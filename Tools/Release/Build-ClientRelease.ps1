<#
.SYNOPSIS
    Builds the client release of the Azureal XR Framework: this project with its four plugins
    precompiled and their implementation source removed, mirrored into the Azureal_Framework repo.

.DESCRIPTION
    Stages, each of which must pass before the next runs:

      1. Host     - copies the plugins' tracked source (never Binaries/Intermediate) into a clean
                    host project, so nothing stale from day-to-day development can ship.
      2. Build    - compiles every plugin for the editor and the packaged game, in Development,
                    DebugGame and Shipping, with the MSVC toolchain pinned (see -CompilerVersion).
      3. Package  - collects exactly the build products UBT reports, plus generated headers and
                    content, the way RunUAT BuildPlugin does.
      4. Strip    - removes every .cpp and Private folder, the .pdb files (archived separately for
                    crash symbolication), UHT's .gen.cpp files, and all comments from the shipped
                    headers and Build.cs files; marks every module bUsePrecompiled, and keeps a copy
                    of the build products in Precompiled/ that each module restores after a Clean.
      5. Assemble - the project template: uproject, Config, Content, Source and the stripped plugins.
      6. Audit    - refuses the release if anything that should not ship is still present.
      7. Verify   - builds a throwaway copy the way a client would, with C++ that subclasses and links
                    against the framework, in every configuration; runs a Rebuild and a Clean and
                    confirms the framework restores itself byte for byte; opens the editor once,
                    unattended; packages a Shipping game and starts it (skip with -SkipPackage).
      8. Publish  - mirrors into the Azureal_Framework clone. Commits only with -Commit, pushes only
                    with -Push. The commit message is -Changes as a bullet list: what changed for
                    the people using the framework, and nothing about the dev repo.

    Why not RunUAT BuildPlugin as-is: it cannot pin the compiler version, it never builds DebugGame,
    it builds the plugin as an engine plugin rather than the project plugin a client will have, and it
    packages the full Source folder. This script drives UBT with the same arguments BuildPlugin uses
    and adds the rest.

.EXAMPLE
    powershell -NoProfile -ExecutionPolicy Bypass -File Tools\Release\Build-ClientRelease.ps1
    Builds, strips, audits and verifies, then stages the result in the output repo without committing.

.EXAMPLE
    ... -File Tools\Release\Build-ClientRelease.ps1 -Commit -Push -Changes 'New SkipHighlight tag', 'Fixed ...'
#>
[CmdletBinding()]
param(
    [string]$OutputRepo      = 'C:\Azureal_Framework',
    [string]$OutputRemote    = 'https://github.com/SzeHaoVX/Azureal_Framework.git',
    [string]$StageRoot       = 'C:\AzrRel',
    [string]$EngineDir       = 'C:\Program Files\Epic Games\UE_5.8',

    # UBT refuses to link precompiled objects built with a NEWER compiler family than the one the
    # client has selected (UEBuildModuleCPP.cs: "was precompiled with MSVC toolchain X but the
    # currently selected toolchain is Y"). Building with the same family Epic used for the Launcher
    # engine means anyone who can build against that engine can build against this.
    [string]$CompilerVersion = '14.44.35207',

    [switch]$SkipBuild,
    [switch]$SkipVerify,
    [switch]$SkipPackage,
    [switch]$Commit,
    [switch]$Push,

    # What this release changes, one point each. Becomes the commit message as a bullet list.
    [string[]]$Changes,
    [switch]$AllowDirty
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version 2.0

# --- What ships ------------------------------------------------------------------------------------

# Dependency order: a plugin is built after the plugins it depends on, since its editor DLL links
# against their import libraries in the same host.
$Plugins = @('AzurealXR', 'Azureal_CSM', 'AzurealForceExit', 'ManualVRPlugin')

# Target, configuration. The editor also needs DebugGame: plugins in a PROJECT are treated as the
# project's own code (bCanBuildDebugGame), so "DebugGame Editor" loads a DebugGame DLL for them rather
# than falling back to Development the way engine plugins do.
#
# The game rows are built with -NoDebugInfo. Their .obj files ship, and MSVC embeds debug info in
# each one (/Z7): every function and local variable name, the types, and a line table back into the
# Private .cpp files -- about 90% of each file. /Zi would not help; it moves only the types out. The
# editor rows keep debug info because it goes to .pdb files, which are archived and never shipped.
# The cost: client crash reports from a packaged game do not symbolicate frames inside the framework.
$BuildMatrix = @(
    @{ Target = 'UnrealEditor'; Config = 'Development'; Extra = ''             },
    @{ Target = 'UnrealEditor'; Config = 'DebugGame';   Extra = ''             },
    @{ Target = 'UnrealGame';   Config = 'Development'; Extra = '-NoDebugInfo' },
    @{ Target = 'UnrealGame';   Config = 'DebugGame';   Extra = '-NoDebugInfo' },
    @{ Target = 'UnrealGame';   Config = 'Shipping';    Extra = '-NoDebugInfo' }
)

# Plugin folders copied from source. Binaries and Intermediate are deliberately absent: they are
# rebuilt from scratch, which is what keeps Live Coding patch libraries and stale objects out.
$PluginSourceDirs = @('Source', 'Content', 'Resources', 'Config', 'Shaders')

# Project-level tracked paths that make up the template. Everything else in the dev repo stays out,
# including CLAUDE.md, .claude, .mcp.json, Tools and the dev README.
$TemplateRoots = @('Azureal_XR_V2.uproject', 'Config', 'Content', 'Source')

# Clients get the project as Azureal_Framework throughout -- project file, C++ module, build targets,
# and so the packaged executable. The dev harness keeps Azureal_XR_V2. Nothing the plugins ship refers
# to the game module, and it has no classes, so no asset refers to /Script/Azureal_XR_V2 either; the
# audit fails if the old name survives anywhere.
$DevProjectName     = 'Azureal_XR_V2'
$ReleaseProjectName = 'Azureal_Framework'
$ReleaseProjectFile = "$ReleaseProjectName.uproject"

# Tracked template files that never ship. DefaultEditorPerProjectUserSettings.ini is per-user editor
# state, and it is where the ElevenLabs API key for Generate Narration got committed -- shipped, every
# client editor would load that key and spend our credits.
$TemplateExclude = @('Config/DefaultEditorPerProjectUserSettings.ini')

# INI sections for developer tools that do not ship.
$StripIniSectionPattern = 'UnrealClaude|Uplink'

# INI lines that are per-project secrets or identities. Removed rather than blanked, so the engine
# generates a fresh value for each client project instead of every client sharing ours.
$StripIniLinePattern = '^\s*SecurityToken\s*='

# Credential shapes. The release fails if any appears in any shipped file, text or binary (binaries are
# read both as single-byte and as UTF-16, the two ways strings end up inside .uasset/.dll/.obj files).
$CredentialPatterns = @(
    'sk_[0-9a-f]{40,}',                                  # ElevenLabs / OpenAI-style secret keys
    'xi-api-key\s*[:=]\s*[A-Za-z0-9]{20,}',
    'Bearer [A-Za-z0-9._\-]{20,}',
    'eyJ[A-Za-z0-9_-]{15,}\.eyJ[A-Za-z0-9_-]{10,}',      # JWT
    '-----BEGIN [A-Z ]*PRIVATE KEY-----',
    'AKIA[0-9A-Z]{16}',                                  # AWS access key id
    'gh[pousr]_[A-Za-z0-9]{36}|github_pat_[A-Za-z0-9_]{22,}',
    'xox[abprs]-[A-Za-z0-9-]{10,}'                       # Slack
)
# Assignments of a secret-looking key in a text config file, whatever the value looks like.
$CredentialIniPattern = '(?im)^\s*[A-Za-z_.]*(ApiKey|Api_Key|Secret|Password|AccessToken|AuthToken)\s*=\s*\S'

$DevRepo      = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
$ReleaseDir   = Join-Path $PSScriptRoot 'ClientTemplate'
$ProbeDir     = Join-Path $PSScriptRoot 'Probe'
$BuildBat     = Join-Path $EngineDir 'Engine\Build\BatchFiles\Build.bat'
$EditorCmd    = Join-Path $EngineDir 'Engine\Binaries\Win64\UnrealEditor-Cmd.exe'

$HostDir      = Join-Path $StageRoot 'host'
$PackageDir   = Join-Path $StageRoot 'package'
$ReleaseOut   = Join-Path $StageRoot 'release'
$VerifyDir    = Join-Path $StageRoot 'verify'
$LogDir       = Join-Path $StageRoot 'logs'
$ManifestDir  = Join-Path $StageRoot 'manifests'

# --- Helpers --------------------------------------------------------------------------------------

function Write-Stage([string]$Text) { Write-Host ''; Write-Host "=== $Text ===" -ForegroundColor Cyan }
function Write-Ok([string]$Text)    { Write-Host "  ok  $Text" -ForegroundColor Green }
function Write-Note([string]$Text)  { Write-Host "  --  $Text" }
function Fail([string]$Text)        { Write-Host "  FAIL  $Text" -ForegroundColor Red; throw $Text }

function Invoke-Git {
    # Arguments arrive as ONE array, never as loose words: PowerShell would swallow a bare "--" as its own
    # end-of-parameters marker, so "ls-files -- path" would silently stop being restricted to path.
    param([string]$Repo, [string[]]$GitArgs)
    # git writes progress to stderr; under 'Stop' Windows PowerShell would turn that into an error.
    $old = $ErrorActionPreference; $ErrorActionPreference = 'Continue'
    try { $out = & git -C $Repo @GitArgs 2>&1 } finally { $ErrorActionPreference = $old }
    if ($LASTEXITCODE -ne 0) { Fail "git $($GitArgs -join ' ') failed in $Repo`n$($out | Out-String)" }
    return $out
}

function Invoke-Build {
    param([string]$Name, [string]$Arguments)
    $log = Join-Path $LogDir "$Name.log"
    $err = Join-Path $LogDir "$Name.err.log"
    $p = Start-Process -FilePath $BuildBat -ArgumentList $Arguments -NoNewWindow -Wait -PassThru `
        -RedirectStandardOutput $log -RedirectStandardError $err
    if ($p.ExitCode -ne 0) {
        $tail = (Get-Content $log -Tail 25) -join "`n"
        Fail "$Name failed (exit $($p.ExitCode)). Log: $log`n$tail"
    }
    Write-Ok $Name
    return $log
}

function Reset-Dir([string]$Path) {
    if (Test-Path $Path) { Remove-Item $Path -Recurse -Force }
    New-Item -ItemType Directory -Path $Path -Force | Out-Null
}

function Copy-RelativeFiles {
    param([string]$FromRoot, [string]$ToRoot, [string[]]$RelativePaths)
    foreach ($rel in $RelativePaths) {
        $src = Join-Path $FromRoot $rel
        $dst = Join-Path $ToRoot $rel
        $dir = Split-Path $dst -Parent
        if (-not (Test-Path $dir)) { New-Item -ItemType Directory -Path $dir -Force | Out-Null }
        [System.IO.File]::Copy($src, $dst, $true)
    }
}

function Get-RelativePath([string]$Root, [string]$Path) {
    $r = (Resolve-Path $Root).Path.TrimEnd('\') + '\'
    return $Path.Substring($r.Length)
}

# Comment removal, compiled once. C# rather than a PowerShell loop for speed, and because this has to
# get string literals right or it will eat a "//" out of a URL.
Add-Type -Language CSharp -TypeDefinition @'
using System;
using System.Text;

public static class AzrCommentStripper
{
    static bool IsIdent(char c) { return char.IsLetterOrDigit(c) || c == '_'; }

    // Removes // and /* */ comments but keeps every line break, so line N of the output is line N of
    // the input. That is not cosmetic: GENERATED_BODY() expands to a macro named after __LINE__, and
    // the definitions it must match were written into the shipped .generated.h against the ORIGINAL
    // line numbers. Move one line and every client class that includes the header stops compiling.
    public static string Strip(string s, bool isCSharp, out int comments)
    {
        StringBuilder o = new StringBuilder(s.Length);
        int n = s.Length, i = 0;
        comments = 0;

        while (i < n)
        {
            char c = s[i];
            char d = (i + 1 < n) ? s[i + 1] : '\0';

            if (c == '/' && d == '/')
            {
                comments++;
                i += 2;
                while (i < n)
                {
                    if (s[i] == '\n')
                    {
                        // C/C++ only: a backslash right before the break continues the comment.
                        int k = i - 1;
                        if (k >= 0 && s[k] == '\r') k--;
                        if (!isCSharp && k >= 0 && s[k] == '\\') { o.Append('\n'); i++; continue; }
                        break;
                    }
                    if (s[i] == '\r') o.Append('\r');
                    i++;
                }
                continue;
            }

            if (c == '/' && d == '*')
            {
                comments++;
                i += 2;
                bool closed = false;
                while (i < n)
                {
                    if (s[i] == '*' && i + 1 < n && s[i + 1] == '/') { i += 2; closed = true; break; }
                    if (s[i] == '\n' || s[i] == '\r') o.Append(s[i]);
                    i++;
                }
                if (!closed) throw new Exception("unterminated block comment");
                // "a/**/b" must stay two tokens.
                if (o.Length > 0 && i < n && IsIdent(o[o.Length - 1]) && IsIdent(s[i])) o.Append(' ');
                continue;
            }

            if (c == '"')
            {
                if (isCSharp && i > 0 && s[i - 1] == '@')
                {
                    // C# verbatim string: "" is the only escape.
                    o.Append(c); i++;
                    while (i < n)
                    {
                        if (s[i] == '"' && i + 1 < n && s[i + 1] == '"') { o.Append("\"\""); i += 2; continue; }
                        o.Append(s[i]);
                        if (s[i] == '"') { i++; break; }
                        i++;
                    }
                    continue;
                }

                if (!isCSharp && IsRawStringStart(s, i))
                {
                    int open = s.IndexOf('(', i + 1);
                    if (open < 0 || open - i - 1 > 16) throw new Exception("malformed raw string literal");
                    string delim = s.Substring(i + 1, open - i - 1);
                    string close = ")" + delim + "\"";
                    int end = s.IndexOf(close, open + 1, StringComparison.Ordinal);
                    if (end < 0) throw new Exception("unterminated raw string literal");
                    end += close.Length;
                    o.Append(s, i, end - i);
                    i = end;
                    continue;
                }

                o.Append(c); i++;
                while (i < n)
                {
                    char e = s[i];
                    o.Append(e); i++;
                    if (e == '\\' && i < n) { o.Append(s[i]); i++; continue; }
                    if (e == '"' || e == '\n') break;
                }
                continue;
            }

            // A quote after an identifier character is a C++14 digit separator (1'000), not a char.
            if (c == '\'' && !(i > 0 && IsIdent(s[i - 1])))
            {
                o.Append(c); i++;
                while (i < n)
                {
                    char e = s[i];
                    o.Append(e); i++;
                    if (e == '\\' && i < n) { o.Append(s[i]); i++; continue; }
                    if (e == '\'' || e == '\n') break;
                }
                continue;
            }

            o.Append(c);
            i++;
        }
        return o.ToString();
    }

    static bool IsRawStringStart(string s, int quote)
    {
        if (quote < 1 || s[quote - 1] != 'R') return false;
        int k = quote - 2;
        while (k >= 0 && IsIdent(s[k])) k--;
        string prefix = s.Substring(k + 1, (quote - 1) - (k + 1));
        return prefix == "" || prefix == "u8" || prefix == "u" || prefix == "U" || prefix == "L";
    }

    public static int CountLines(string s)
    {
        int count = 0;
        foreach (char c in s) if (c == '\n') count++;
        return count;
    }
}
'@

function Remove-Comments {
    param([string]$Path, [bool]$IsCSharp)
    $text = [System.IO.File]::ReadAllText($Path)
    $removed = 0
    $stripped = [AzrCommentStripper]::Strip($text, $IsCSharp, [ref]$removed)

    if ([AzrCommentStripper]::CountLines($stripped) -ne [AzrCommentStripper]::CountLines($text)) {
        Fail "comment removal changed the line count of $Path"
    }
    $again = 0
    [void][AzrCommentStripper]::Strip($stripped, $IsCSharp, [ref]$again)
    if ($again -ne 0) { Fail "comments survived removal in $Path" }

    [System.IO.File]::WriteAllText($Path, $stripped, (New-Object System.Text.UTF8Encoding($false)))
    return $removed
}

# --- 0. Preconditions ----------------------------------------------------------------------------

Write-Stage 'Preconditions'

# Checked here rather than at publish, which is an hour of building away.
if ($Commit -and -not ($Changes | Where-Object { $_ -and $_.Trim() })) { Fail '-Commit needs -Changes: the points this release changes' }

if (-not (Test-Path $BuildBat)) { Fail "no engine at $EngineDir" }

$msvcRoots = @(
    'C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC',
    'C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\MSVC',
    'C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC',
    'C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC'
)
if (-not ($msvcRoots | Where-Object { Test-Path (Join-Path $_ $CompilerVersion) })) {
    Fail "MSVC $CompilerVersion is not installed. Add it from the Visual Studio Installer (Individual components)."
}
Write-Ok "MSVC $CompilerVersion present"

# Publishing mirrors the dev repo over the output repo, so anything committed straight into the output
# repo since the last release would be wiped. Release commits only list what changed, so they cannot
# be told apart by their message; the last one is recorded here at publish instead.
#
# One record per output-repo branch, since a release goes onto whichever branch the clone has checked
# out. main keeps the original LAST_RELEASE; any other branch gets LAST_RELEASE-<branch>. A branch with
# no record yet was cut from main, so main's record is what it is checked against.
$LastReleaseFile = Join-Path $StageRoot 'LAST_RELEASE'
$OutputBranch = 'main'
if (Test-Path (Join-Path $OutputRepo '.git')) {
    $OutputBranch = (Invoke-Git $OutputRepo @("rev-parse", "--abbrev-ref", "HEAD") | Select-Object -First 1).ToString().Trim()
    if ($OutputBranch -eq 'HEAD') { Fail "$OutputRepo is on a detached HEAD. Check out the branch the release is for." }
    Write-Ok "publishing onto output-repo branch '$OutputBranch'"
}
$BranchFileSuffix = $OutputBranch -replace '[^A-Za-z0-9._-]', '_'
$BranchReleaseFile = if ($OutputBranch -eq 'main') { $LastReleaseFile } else { Join-Path $StageRoot "LAST_RELEASE-$BranchFileSuffix" }
$GuardFile = if (Test-Path $BranchReleaseFile) { $BranchReleaseFile } else { $LastReleaseFile }
if ((Test-Path $GuardFile) -and (Test-Path (Join-Path $OutputRepo '.git'))) {
    $lastRelease = (Get-Content $GuardFile -Raw).Trim()
    $changedSince = @(Invoke-Git $OutputRepo @("diff", "--name-only", $lastRelease, "HEAD"))
    if ($changedSince.Count) {
        Invoke-Git $OutputRepo @("log", "--oneline", "$lastRelease..HEAD") | ForEach-Object { Write-Host "        $_" }
        $changedSince | Select-Object -First 20 | ForEach-Object { Write-Host "        $_" }
        Fail "$($changedSince.Count) file(s) were committed to $OutputRepo since the last release. Move them into the dev repo first, or this release removes them."
    }
    Write-Ok 'nothing committed to the output repo since the last release'
}

$shippedPaths = @($TemplateRoots) + ($Plugins | ForEach-Object { "Plugins/$_" })
# Files the template leaves out cannot make the release unreproducible, so their edits do not count.
$dirty = Invoke-Git $DevRepo (@("status", "--porcelain", "--") + $shippedPaths) |
    Where-Object { $TemplateExclude -notcontains ($_.ToString().Substring(3).Trim('"')) }
if ($dirty -and -not $AllowDirty) {
    Fail "uncommitted changes in shipped paths - a release must be reproducible from a commit:`n$($dirty | Out-String)"
}
$DevCommit = (Invoke-Git $DevRepo @("rev-parse", "HEAD") | Select-Object -First 1).ToString().Trim()
$DevShort  = $DevCommit.Substring(0, 8)
Write-Ok "building from dev commit $DevShort$(if ($dirty) { ' (DIRTY - not reproducible)' })"

New-Item -ItemType Directory -Path $StageRoot, $LogDir, $ManifestDir -Force | Out-Null

# --- 1-2. Host + Build ---------------------------------------------------------------------------

if (-not $SkipBuild) {
    Write-Stage 'Host projects'
    Reset-Dir $HostDir
    Reset-Dir $ManifestDir

    # One host per plugin, holding that plugin and only the plugins it depends on -- the same shape
    # RunUAT BuildPlugin uses. A single host for all four does not work: the plugin named by -plugin=
    # is loaded into its own "Plugin" scope above the project, and UBT rejects any PROJECT module that
    # references it ("Module 'Azureal_CSM' (Project) should not reference module 'AzurealXR'
    # (Plugin)"). A dependency sitting in the project scope, referenced BY the plugin, is fine.
    foreach ($plugin in $Plugins) {
        $descriptor = Get-Content (Join-Path $DevRepo "Plugins\$plugin\$plugin.uplugin") -Raw | ConvertFrom-Json
        $deps = @()
        if ($descriptor.PSObject.Properties.Name -contains 'Plugins') {
            $deps = @($descriptor.Plugins | Where-Object { $Plugins -contains $_.Name } | ForEach-Object { $_.Name })
        }

        $pluginHost = Join-Path $HostDir $plugin
        foreach ($p in @($plugin) + $deps) {
            $files = Invoke-Git $DevRepo @("ls-files", "--", "Plugins/$p") | ForEach-Object { $_.ToString() } | Where-Object {
                $inner = $_.Substring("Plugins/$p/".Length)
                ($inner -eq "$p.uplugin") -or ($PluginSourceDirs | Where-Object { $inner.StartsWith("$_/") })
            }
            Copy-RelativeFiles -FromRoot $DevRepo -ToRoot $pluginHost -RelativePaths $files
        }

        $pluginEntries = (@($plugin) + $deps | ForEach-Object { "{ `"Name`": `"$_`", `"Enabled`": true }" }) -join ', '
        Set-Content -Path (Join-Path $pluginHost 'HostProject.uproject') -Encoding ASCII `
            -Value "{ `"FileVersion`": 3, `"Plugins`": [ $pluginEntries ] }"
        Write-Ok "$plugin$(if ($deps.Count) { " (with dependency: $($deps -join ', '))" })"
    }

    Write-Stage "Build (MSVC $CompilerVersion)"
    foreach ($plugin in $Plugins) {
        $hostProject = Join-Path $HostDir "$plugin\HostProject.uproject"
        $uplugin = Join-Path $HostDir "$plugin\Plugins\$plugin\$plugin.uplugin"
        foreach ($b in $BuildMatrix) {
            $name = "$plugin-$($b.Target)-$($b.Config)"
            $manifest = Join-Path $ManifestDir "$name.xml"
            # The arguments RunUAT BuildPlugin passes to UBT, plus three of our own:
            #  -BuildPluginAsLocal   builds the plugin with the rules a *project* plugin gets, which is what
            #                        it is in a client's project. Without it the plugin is treated like an
            #                        engine plugin: DebugGame silently comes out as Development-named binaries
            #                        (overwriting the real ones), and UHT classifies the modules differently.
            #  -DisableAdaptiveUnity the host copy is not under git, so adaptive unity counts every file as
            #                        being edited and compiles each on its own. That is a different build from
            #                        the dev tree's, and it fails on includes that unity normally supplies.
            #  -CompilerVersion      the toolchain gate described in the header.
            $arguments = "$($b.Target) Win64 $($b.Config) -Project=`"$hostProject`" -plugin=`"$uplugin`" " +
                         "-noubtmakefiles -manifest=`"$manifest`" -nohotreload -BuildPluginAsLocal -DisableAdaptiveUnity " +
                         "-CompilerVersion=$CompilerVersion $($b.Extra) -WaitMutex"
            [void](Invoke-Build -Name $name -Arguments $arguments)
        }
    }
    Set-Content -Path (Join-Path $HostDir 'BUILD_COMMIT') -Value $DevCommit -Encoding ASCII
}

# --- 3. Package ------------------------------------------------------------------------------------

Write-Stage 'Package'
Reset-Dir $PackageDir

# -SkipBuild packages binaries built from an earlier commit. That is only honest if no framework code
# has changed since; content may have (it is taken from the dev repo below, not from the build host).
$buildCommitFile = Join-Path $HostDir 'BUILD_COMMIT'
if (-not (Test-Path $buildCommitFile)) { Fail 'no recorded build to package; run without -SkipBuild' }
$BuildCommit = (Get-Content $buildCommitFile -Raw).Trim()
if ($BuildCommit -ne $DevCommit) {
    $codePaths = $Plugins | ForEach-Object { "Plugins/$_/Source"; "Plugins/$_/$_.uplugin" }
    $codeChanged = Invoke-Git $DevRepo (@("diff", "--name-only", $BuildCommit, $DevCommit, "--") + $codePaths)
    if ($codeChanged) { Fail "framework source changed since the build at $($BuildCommit.Substring(0, 8)); run without -SkipBuild:`n$($codeChanged | Out-String)" }
    Write-Ok "reusing the build from $($BuildCommit.Substring(0, 8)); only content changed since"
}

foreach ($plugin in $Plugins) {
    $hostPlugin = Join-Path $HostDir "$plugin\Plugins\$plugin"
    $outPlugin  = Join-Path $PackageDir "Plugins\$plugin"

    $products = New-Object System.Collections.Generic.HashSet[string]([StringComparer]::OrdinalIgnoreCase)
    foreach ($b in $BuildMatrix) {
        $manifest = Join-Path $ManifestDir "$plugin-$($b.Target)-$($b.Config).xml"
        if (-not (Test-Path $manifest)) { Fail "missing build manifest $manifest" }
        foreach ($node in ([xml](Get-Content $manifest -Raw)).SelectNodes('//BuildProducts/string')) {
            $path = $node.InnerText
            if ($path.StartsWith($hostPlugin + '\', [StringComparison]::OrdinalIgnoreCase)) {
                [void]$products.Add((Get-RelativePath $hostPlugin $path))
            }
        }
    }

    # The rest of what BuildPlugin's package filter takes from the build: descriptor, headers, and UHT's
    # generated headers -- all of which must match the binaries.
    $extra = Get-ChildItem $hostPlugin -Recurse -File | ForEach-Object { Get-RelativePath $hostPlugin $_.FullName } | Where-Object {
        $_ -eq "$plugin.uplugin" -or
        $_ -match '^Source\\' -or
        $_ -match '^Intermediate\\Build\\.*\\Inc\\'
    }
    foreach ($e in $extra) { [void]$products.Add($e) }
    Copy-RelativeFiles -FromRoot $hostPlugin -ToRoot $outPlugin -RelativePaths ([string[]]$products)

    # Content, from the dev repo at the release commit rather than the build host, so a content-only fix
    # can ship with -SkipBuild.
    $prefix = "Plugins/$plugin/"
    $content = @(Invoke-Git $DevRepo @("ls-files", "--", "Plugins/$plugin") | ForEach-Object { $_.ToString().Substring($prefix.Length) } |
        Where-Object { $_ -match '^(Content|Resources|Config|Shaders)/' })
    Copy-RelativeFiles -FromRoot (Join-Path $DevRepo "Plugins\$plugin") -ToRoot $outPlugin -RelativePaths $content
    Write-Ok "$plugin ($($products.Count) build files, $($content.Count) content files)"
}

# --- 4. Strip --------------------------------------------------------------------------------------

Write-Stage 'Strip'
$SymbolDir = Join-Path $StageRoot "symbols\$DevShort"
Reset-Dir $SymbolDir

# Added to every shipped module's rules constructor, after bUsePrecompiled. System.IO only: the rules
# compiler does not reference System.IO.Compression, which is why the copy is not a zip.
$RestoreBlock = @'

		// Clean and Rebuild treat a project plugin's Binaries and Intermediate folders as build output and
		// delete them, and this plugin cannot be rebuilt from source. Put back anything missing from the
		// copy kept in Precompiled/, which they never touch. This runs before UBT looks for those files.
		string PrecompiledCopy = System.IO.Path.Combine(PluginDirectory, "Precompiled");
		if (System.IO.Directory.Exists(PrecompiledCopy))
		{
			foreach (string CopyFile in System.IO.Directory.GetFiles(PrecompiledCopy, "*", System.IO.SearchOption.AllDirectories))
			{
				string LiveFile = System.IO.Path.Combine(PluginDirectory, System.IO.Path.GetRelativePath(PrecompiledCopy, CopyFile));
				if (!System.IO.File.Exists(LiveFile))
				{
					try
					{
						System.IO.Directory.CreateDirectory(System.IO.Path.GetDirectoryName(LiveFile));
						System.IO.File.Copy(CopyFile, LiveFile);
					}
					catch (System.IO.IOException)
					{
						// Another module of this plugin restored it first.
					}
				}
			}
		}
'@

foreach ($plugin in $Plugins) {
    $root = Join-Path $PackageDir "Plugins\$plugin"

    # Implementation source.
    Get-ChildItem (Join-Path $root 'Source') -Recurse -Directory -Filter 'Private' | Remove-Item -Recurse -Force
    Get-ChildItem (Join-Path $root 'Source') -Recurse -File -Include '*.cpp', '*.c', '*.cc', '*.cxx', '*.inl', '*.ipp' |
        Remove-Item -Force

    # UHT's generated sources: already compiled into the binaries, and Epic ships none of them for
    # its own plugins. They also carry every doc comment as tooltip metadata in plain text.
    Get-ChildItem (Join-Path $root 'Intermediate') -Recurse -File -Include '*.gen.cpp' -ErrorAction SilentlyContinue |
        Remove-Item -Force

    # Symbols: out of the release, into an archive, so crash reports from clients can still be read.
    Get-ChildItem (Join-Path $root 'Binaries') -Recurse -File -Filter '*.pdb' -ErrorAction SilentlyContinue | ForEach-Object {
        $dst = Join-Path $SymbolDir ("$plugin\" + (Get-RelativePath $root $_.FullName))
        New-Item -ItemType Directory -Path (Split-Path $dst -Parent) -Force | Out-Null
        Move-Item $_.FullName $dst -Force
    }

    # A copy of every build product a Clean or Rebuild can delete, in Precompiled/, where UBT's clean
    # never looks. It deletes a project plugin's Binaries/<Platform> products and its
    # Intermediate/Build/<Platform>/x64/<App>/<Config> folders (CleanMode.cs), because only engine
    # plugins count as read-only. The restore code added to each Build.cs below puts them back.
    foreach ($sub in 'Binaries', 'Intermediate\Build\Win64\x64') {
        $src = Join-Path $root $sub
        if (Test-Path $src) {
            Get-ChildItem $src -Recurse -File | ForEach-Object {
                $dst = Join-Path $root ('Precompiled\' + (Get-RelativePath $root $_.FullName))
                New-Item -ItemType Directory -Path (Split-Path $dst -Parent) -Force | Out-Null
                Copy-Item $_.FullName $dst -Force
            }
        }
    }

    # Comments: headers keep their line numbers (see AzrCommentStripper); Build.cs is C#.
    $headerComments = 0
    Get-ChildItem (Join-Path $root 'Source') -Recurse -File -Filter '*.h' | ForEach-Object {
        $headerComments += Remove-Comments -Path $_.FullName -IsCSharp $false
    }

    foreach ($buildCs in Get-ChildItem (Join-Path $root 'Source') -Recurse -File -Filter '*.Build.cs') {
        [void](Remove-Comments -Path $buildCs.FullName -IsCSharp $true)

        # Project plugins are compiled by default -- UBT only treats a module as read-only when the
        # whole PROJECT is installed (RulesCompiler: bReadOnly = Unreal.IsProjectInstalled()), and
        # "Installed": true in the .uplugin does not change that. Without this flag a client's build
        # tries to compile source that is not there.
        #
        # The restore block is for the same reason: nothing marks these binaries read-only, so Clean
        # and Rebuild delete them. The module rules constructor runs in every build after any clean and
        # before UBT reads the precompiled manifests, so restoring here heals a Rebuild in the same run.
        $module = $buildCs.Name -replace '\.Build\.cs$', ''
        $text = [System.IO.File]::ReadAllText($buildCs.FullName)
        $pattern = "(public\s+$module\s*\(\s*ReadOnlyTargetRules\s+Target\s*\)\s*:\s*base\s*\(\s*Target\s*\)\s*\{)"
        $ctorMatches = [regex]::Matches($text, $pattern)
        if ($ctorMatches.Count -ne 1) { Fail "could not find exactly one constructor in $($buildCs.FullName)" }
        $injected = "`r`n`t`tbUsePrecompiled = true;`r`n" + ($RestoreBlock -replace "`r?`n", "`r`n")
        $ctorEnd = $ctorMatches[0].Index + $ctorMatches[0].Length
        $text = $text.Substring(0, $ctorEnd) + $injected + $text.Substring($ctorEnd)
        [System.IO.File]::WriteAllText($buildCs.FullName, $text, (New-Object System.Text.UTF8Encoding($false)))
    }

    # Descriptor: what RunUAT BuildPlugin writes for a packaged plugin, plus one thing of ours. Only
    # Win64 binaries ship, so every module is limited to Win64. Otherwise a client packaging for
    # Android/Quest gets a link failure about missing precompiled objects, where it should be told
    # plainly that the module is not available on that platform.
    $upluginPath = Join-Path $root "$plugin.uplugin"
    $d = [System.IO.File]::ReadAllText($upluginPath) | ConvertFrom-Json
    $d | Add-Member -NotePropertyName Installed -NotePropertyValue $true -Force
    $d | Add-Member -NotePropertyName EngineVersion -NotePropertyValue '5.8.0' -Force
    foreach ($m in $d.Modules) {
        $m | Add-Member -NotePropertyName PlatformAllowList -NotePropertyValue @('Win64') -Force
        if ($m.PSObject.Properties.Name -contains 'PlatformDenyList') { $m.PSObject.Properties.Remove('PlatformDenyList') }
    }
    $u = $d | ConvertTo-Json -Depth 20
    [System.IO.File]::WriteAllText($upluginPath, $u, (New-Object System.Text.UTF8Encoding($false)))
    $check = $u | ConvertFrom-Json
    if (-not $check.Installed -or $check.EngineVersion -ne '5.8.0' -or
        ($check.Modules | Where-Object { @($_.PlatformAllowList) -join ',' -ne 'Win64' })) {
        Fail "descriptor rewrite failed for $plugin"
    }

    Write-Ok "$plugin ($headerComments header comments removed)"
}

# --- 5. Assemble -----------------------------------------------------------------------------------

Write-Stage 'Assemble template'
Reset-Dir $ReleaseOut

$templateFiles = Invoke-Git $DevRepo (@("ls-files", "--") + $TemplateRoots) | ForEach-Object { $_.ToString() } |
    Where-Object { $TemplateExclude -notcontains $_ }
Copy-RelativeFiles -FromRoot $DevRepo -ToRoot $ReleaseOut -RelativePaths $templateFiles
Write-Ok "project files ($(@($templateFiles).Count); left out: $($TemplateExclude -join ', '))"

# Rename the project: the .uproject, the module folder and every file named after it, then every
# mention inside Source, the .uproject and Config (module class, targets, IMPLEMENT_PRIMARY_GAME_MODULE,
# the template's ActiveGameNameRedirects).
Move-Item (Join-Path $ReleaseOut "$DevProjectName.uproject") (Join-Path $ReleaseOut $ReleaseProjectFile)
$releaseSource = Join-Path $ReleaseOut 'Source'
Rename-Item (Join-Path $releaseSource $DevProjectName) $ReleaseProjectName
Get-ChildItem $releaseSource -Recurse -File | Where-Object { $_.Name.StartsWith($DevProjectName) } | ForEach-Object {
    Rename-Item $_.FullName ($_.Name.Replace($DevProjectName, $ReleaseProjectName))
}
$renameTargets = @(Get-ChildItem $releaseSource -Recurse -File) + @(Get-Item (Join-Path $ReleaseOut $ReleaseProjectFile)) +
    @(Get-ChildItem (Join-Path $ReleaseOut 'Config') -Filter '*.ini')
foreach ($f in $renameTargets) {
    $t = [System.IO.File]::ReadAllText($f.FullName)
    if ($t.Contains($DevProjectName)) {
        [System.IO.File]::WriteAllText($f.FullName, $t.Replace($DevProjectName, $ReleaseProjectName), (New-Object System.Text.UTF8Encoding($false)))
    }
}
Write-Ok "project renamed $DevProjectName -> $ReleaseProjectName (file, module, targets)"

foreach ($ini in Get-ChildItem (Join-Path $ReleaseOut 'Config') -Filter '*.ini') {
    $lines = [System.IO.File]::ReadAllLines($ini.FullName)
    $keep = New-Object System.Collections.Generic.List[string]
    $skipping = $false
    foreach ($line in $lines) {
        if ($line -match '^\s*\[') { $skipping = ($line -match $StripIniSectionPattern) }
        if (-not $skipping -and $line -notmatch $StripIniLinePattern) { $keep.Add($line) }
    }
    if ($keep.Count -ne $lines.Count) {
        [System.IO.File]::WriteAllLines($ini.FullName, $keep)
        Write-Ok "removed developer-tool sections and per-project secrets from $($ini.Name)"
    }
}

Copy-Item (Join-Path $PackageDir 'Plugins') (Join-Path $ReleaseOut 'Plugins') -Recurse -Force
Copy-Item (Join-Path $ReleaseDir 'README.md')  $ReleaseOut -Force
Copy-Item (Join-Path $ReleaseDir '.gitignore') $ReleaseOut -Force
Copy-Item (Join-Path $ReleaseDir '.gitattributes') $ReleaseOut -Force

$release = [ordered]@{
    devCommit       = $DevCommit
    buildCommit     = $BuildCommit
    devTreeDirty    = [bool]$dirty
    builtUtc        = (Get-Date).ToUniversalTime().ToString('yyyy-MM-ddTHH:mm:ssZ')
    engine          = '5.8'
    msvcToolchain   = $CompilerVersion
    configurations  = @('Development', 'DebugGame', 'Shipping')
    plugins         = $Plugins
}
# The record of what built this release goes with the symbols, not to clients: nothing in the project
# reads it, and the release commit message carries the same dev commit, build time and compiler.
$release | ConvertTo-Json | Set-Content (Join-Path $SymbolDir 'RELEASE.json') -Encoding UTF8
Write-Ok 'plugins, README, .gitignore, .gitattributes'

# --- 6. Audit --------------------------------------------------------------------------------------

Write-Stage 'Audit'
$all = Get-ChildItem $ReleaseOut -Recurse -File -Force | ForEach-Object { Get-RelativePath $ReleaseOut $_.FullName }
$problems = New-Object System.Collections.Generic.List[string]

$pluginFiles = $all | Where-Object { $_ -like 'Plugins\*' }
foreach ($f in $pluginFiles) {
    if ($f -match '\.(cpp|c|cc|cxx|inl|ipp)$' -and $f -notmatch '\.gen\.cpp$') { $problems.Add("source file: $f") }
    if ($f -match '\.gen\.cpp$')        { $problems.Add("generated source: $f") }
    if ($f -match '\.pdb$')             { $problems.Add("debug symbols: $f") }
    if ($f -match '\.patch_\d+\.')      { $problems.Add("Live Coding patch: $f") }
    if ($f -match '\\Source\\[^\\]+\\Private\\') { $problems.Add("private source folder: $f") }
}
foreach ($f in $all) {
    if ($f -match '(^|\\)(Uplink|UnrealClaude)(\\|$)' -or $f -match '(^|\\)(CLAUDE\.md|\.mcp\.json)$' -or $f -match '(^|\\)\.claude\\') {
        $problems.Add("developer tooling: $f")
    }
}

foreach ($plugin in $Plugins) {
    $root = Join-Path $ReleaseOut "Plugins\$plugin"
    foreach ($buildCs in Get-ChildItem (Join-Path $root 'Source') -Recurse -File -Filter '*.Build.cs') {
        if ((Get-Content $buildCs.FullName -Raw) -notmatch 'bUsePrecompiled\s*=\s*true') { $problems.Add("not marked precompiled: $($buildCs.Name)") }
        if ((Get-Content $buildCs.FullName -Raw) -notmatch 'PrecompiledCopy') { $problems.Add("no Clean/Rebuild restore code in $($buildCs.Name)") }

        $module = $buildCs.Name -replace '\.Build\.cs$', ''
        $moduleType = ((Get-Content (Join-Path $root "$plugin.uplugin") -Raw | ConvertFrom-Json).Modules | Where-Object { $_.Name -eq $module }).Type
        $configs = @('Development', 'DebugGame')
        if ($moduleType -ne 'Editor') {
            foreach ($cfg in 'Development', 'DebugGame', 'Shipping') {
                $pc = Join-Path $root "Intermediate\Build\Win64\x64\UnrealGame\$cfg\$module\$module.precompiled"
                if (-not (Test-Path $pc)) { $problems.Add("no $cfg game build for $module"); continue }
                $tc = (Get-Content $pc -Raw | ConvertFrom-Json).ToolChainVersion
                if (-not $tc.StartsWith(($CompilerVersion.Split('.')[0..1] -join '.') + '.')) {
                    $problems.Add("$module $cfg built with toolchain $tc, not $CompilerVersion")
                }
            }
        }
        if (-not (Test-Path (Join-Path $root "Binaries\Win64\UnrealEditor-$module.dll")))              { $problems.Add("no Development editor DLL for $module") }
        if (-not (Test-Path (Join-Path $root "Binaries\Win64\UnrealEditor-$module-Win64-DebugGame.dll"))) { $problems.Add("no DebugGame editor DLL for $module") }
    }
    foreach ($h in Get-ChildItem (Join-Path $root 'Source') -Recurse -File -Filter '*.h') {
        $n = 0; [void][AzrCommentStripper]::Strip([System.IO.File]::ReadAllText($h.FullName), $false, [ref]$n)
        if ($n -ne 0) { $problems.Add("comments left in $($h.Name)") }
    }

    # The Precompiled/ copy must match the live build products exactly, both ways: a stale or partial
    # copy would "restore" the wrong binaries after a client's Clean.
    $live = @{}; $copy = @{}
    foreach ($sub in 'Binaries', 'Intermediate\Build\Win64\x64') {
        $d = Join-Path $root $sub
        if (Test-Path $d) { Get-ChildItem $d -Recurse -File | ForEach-Object { $live[(Get-RelativePath $root $_.FullName)] = $_.FullName } }
    }
    $copyRoot = Join-Path $root 'Precompiled'
    if (Test-Path $copyRoot) { Get-ChildItem $copyRoot -Recurse -File | ForEach-Object { $copy[(Get-RelativePath $copyRoot $_.FullName)] = $_.FullName } }
    foreach ($k in $live.Keys) {
        if (-not $copy.ContainsKey($k)) { $problems.Add("$plugin build product has no Precompiled copy: $k") }
        elseif ((Get-FileHash $live[$k] -Algorithm SHA1).Hash -ne (Get-FileHash $copy[$k] -Algorithm SHA1).Hash) { $problems.Add("$plugin Precompiled copy differs: $k") }
    }
    foreach ($k in $copy.Keys) { if (-not $live.ContainsKey($k)) { $problems.Add("$plugin Precompiled copy has an extra file: $k") } }
}

# Absolute paths from this machine inside text that ships, and the dev harness's name after the rename.
foreach ($f in $all | Where-Object { $_ -match '\.(h|cpp|cs|uplugin|uproject|ini|json|precompiled|modules|md)$' }) {
    $content = Get-Content (Join-Path $ReleaseOut $f) -Raw
    if ($content -match '(?i)C:[\\/](GitHub|AzrRel|Users)[\\/]') { $problems.Add("local path inside $f") }
    if ($content -and $content.Contains($DevProjectName)) { $problems.Add("old project name $DevProjectName inside $f") }
}
foreach ($f in $all | Where-Object { $_.Contains($DevProjectName) }) { $problems.Add("old project name in a file name: $f") }

foreach ($f in Get-ChildItem $ReleaseOut -Recurse -File | Where-Object { $_.Length -gt 95MB }) {
    $problems.Add("over GitHub's 100 MB file limit: $(Get-RelativePath $ReleaseOut $_.FullName)")
}

# Credentials, in every file. The first audit had no credential check, and an ElevenLabs key in a
# Config ini nearly shipped. Strings inside .uasset/.dll/.obj are stored either single-byte or UTF-16,
# so each file is searched in both forms. Findings name the file, never the match, so the log does not
# become a second copy of the secret.
$credentialRegex = New-Object System.Text.RegularExpressions.Regex(($CredentialPatterns -join '|'), 'Compiled')
$latin1 = [System.Text.Encoding]::GetEncoding(28591)
foreach ($f in Get-ChildItem $ReleaseOut -Recurse -File -Force) {
    $rel = Get-RelativePath $ReleaseOut $f.FullName
    $bytes = [System.IO.File]::ReadAllBytes($f.FullName)
    foreach ($view in @($latin1.GetString($bytes), [System.Text.Encoding]::Unicode.GetString($bytes))) {
        if ($credentialRegex.IsMatch($view)) { $problems.Add("credential-shaped string inside $rel"); break }
    }
    if ($rel -match '\.(ini|json|uplugin|uproject|md|cs|h|txt)$' -and $latin1.GetString($bytes) -match $CredentialIniPattern) {
        $problems.Add("secret-looking setting inside $rel")
    }
}

# Shipped game objects must carry no CodeView debug info (see $BuildMatrix). Read each .obj's section
# table -- UE compiles with /bigobj, whose header differs from a plain COFF one -- and refuse .debug$T
# (full type info) or a .debug$S bigger than the few hundred bytes of compiler identification MSVC
# always writes.
foreach ($f in Get-ChildItem (Join-Path $ReleaseOut 'Plugins') -Recurse -File -Filter '*.obj') {
    $b = [System.IO.File]::ReadAllBytes($f.FullName)
    $bigobj = ([BitConverter]::ToUInt16($b, 0) -eq 0 -and [BitConverter]::ToUInt16($b, 2) -eq 0xFFFF)
    if ($bigobj) { $count = [BitConverter]::ToUInt32($b, 44); $table = 56 } else { $count = [BitConverter]::ToUInt16($b, 2); $table = 20 + [BitConverter]::ToUInt16($b, 16) }
    $debugS = 0; $debugT = $false
    for ($i = 0; $i -lt $count; $i++) {
        $o = $table + 40 * $i
        $name = $latin1.GetString($b, $o, 8).TrimEnd([char]0)
        if ($name -eq '.debug$T') { $debugT = $true }
        if ($name -eq '.debug$S') { $debugS += [BitConverter]::ToUInt32($b, $o + 16) }
    }
    if ($debugT -or $debugS -gt 64KB) { $problems.Add("debug info inside $(Get-RelativePath $ReleaseOut $f.FullName) (.debug`$S $debugS bytes, .debug`$T $debugT)") }
}

if ($problems.Count) { $problems | ForEach-Object { Write-Host "  FAIL  $_" -ForegroundColor Red }; Fail "audit found $($problems.Count) problem(s)" }
$size = [math]::Round(((Get-ChildItem $ReleaseOut -Recurse -File | Measure-Object Length -Sum).Sum / 1MB), 1)
Write-Ok "clean: $($all.Count) files, $size MB, no source, symbols or developer tooling"

# --- 7. Verify -------------------------------------------------------------------------------------

if (-not $SkipVerify) {
    Write-Stage 'Verify as a client'
    Reset-Dir $VerifyDir
    Copy-Item (Join-Path $ReleaseOut '*') $VerifyDir -Recurse -Force

    # Fingerprint the shipped plugins, so we can prove a client build never rewrites them.
    $before = @{}
    Get-ChildItem (Join-Path $VerifyDir 'Plugins') -Recurse -File | ForEach-Object {
        $before[(Get-RelativePath $VerifyDir $_.FullName)] = (Get-FileHash $_.FullName -Algorithm SHA1).Hash
    }

    $module = Join-Path $VerifyDir "Source\$ReleaseProjectName"
    Copy-Item (Join-Path $ProbeDir '*') $module -Force
    $buildCsPath = Join-Path $module "$ReleaseProjectName.Build.cs"
    $b = [System.IO.File]::ReadAllText($buildCsPath)
    $b = $b -replace '(PublicDependencyModuleNames\.AddRange\(new string\[\] \{)', '$1 "AzurealXR", "Azureal_CSM", "AzurealForceExit", "ManualVRPlugin",'
    if ($b -notmatch '"AzurealXR"') { Fail 'could not add framework modules to the probe Build.cs' }
    [System.IO.File]::WriteAllText($buildCsPath, $b)

    $verifyProject = Join-Path $VerifyDir $ReleaseProjectFile
    # The minimum supported toolchain is the strict case; anything newer is allowed by UBT.
    $verifyBuilds = @(
        @{ Target = "${ReleaseProjectName}Editor"; Config = 'Development'; Tc = $CompilerVersion },
        @{ Target = "${ReleaseProjectName}Editor"; Config = 'DebugGame';   Tc = $CompilerVersion },
        @{ Target = $ReleaseProjectName;       Config = 'Development'; Tc = $CompilerVersion },
        @{ Target = $ReleaseProjectName;       Config = 'DebugGame';   Tc = $CompilerVersion },
        @{ Target = $ReleaseProjectName;       Config = 'Shipping';    Tc = $CompilerVersion },
        @{ Target = "${ReleaseProjectName}Editor"; Config = 'Development'; Tc = '' }
    )
    foreach ($v in $verifyBuilds) {
        $tcArg  = if ($v.Tc) { "-CompilerVersion=$($v.Tc)" } else { '' }
        $tcName = if ($v.Tc) { $v.Tc } else { 'default' }
        [void](Invoke-Build -Name "verify-$($v.Target)-$($v.Config)-$tcName" -Arguments "$($v.Target) Win64 $($v.Config) -Project=`"$verifyProject`" $tcArg -WaitMutex")
    }

    function Assert-PluginsUnchanged([string]$After) {
        $changed = New-Object System.Collections.Generic.List[string]
        $now = @{}
        Get-ChildItem (Join-Path $VerifyDir 'Plugins') -Recurse -File | ForEach-Object {
            $rel = Get-RelativePath $VerifyDir $_.FullName
            $now[$rel] = $true
            if (-not $before.ContainsKey($rel)) { $changed.Add("added: $rel") }
            elseif ($before[$rel] -ne (Get-FileHash $_.FullName -Algorithm SHA1).Hash) { $changed.Add("rewritten: $rel") }
        }
        foreach ($rel in $before.Keys) { if (-not $now.ContainsKey($rel)) { $changed.Add("deleted: $rel") } }
        if ($changed.Count) { $changed | Select-Object -First 20 | ForEach-Object { Write-Host "  FAIL  $_" -ForegroundColor Red }; Fail "shipped plugins changed after $After" }
        Write-Ok "shipped plugins byte-identical after $After"
    }
    Assert-PluginsUnchanged 'every client build'

    # Clean and Rebuild, from Visual Studio or the command line, delete the framework's build products
    # (see the Strip stage). A Rebuild must heal itself in the same run, and after a plain Clean the
    # next build must put everything back.
    [void](Invoke-Build -Name 'verify-rebuild-editor' -Arguments "${ReleaseProjectName}Editor Win64 Development -Project=`"$verifyProject`" -Rebuild -WaitMutex")
    Assert-PluginsUnchanged 'an editor Rebuild'
    [void](Invoke-Build -Name 'verify-clean-game' -Arguments "$ReleaseProjectName Win64 Shipping -Project=`"$verifyProject`" -Clean -WaitMutex")
    $cleaned = @($before.Keys | Where-Object { -not (Test-Path (Join-Path $VerifyDir $_)) }).Count
    if ($cleaned -eq 0) { Write-Note 'a Clean deleted no framework files this time, so the restore was not exercised' }
    else { Write-Ok "a Shipping Clean deleted $cleaned framework files" }
    [void](Invoke-Build -Name 'verify-build-after-clean' -Arguments "$ReleaseProjectName Win64 Shipping -Project=`"$verifyProject`" -WaitMutex")
    Assert-PluginsUnchanged 'a Clean and the build after it'

    # One unattended editor launch: a module the editor cannot load fails here instead of prompting.
    $smokeLog = Join-Path $LogDir 'verify-editor-smoke.log'
    $p = Start-Process -FilePath $EditorCmd -PassThru -NoNewWindow `
        -ArgumentList "`"$verifyProject`" -unattended -nullrhi -nosplash -nopause -nosound -ExecCmds=`"QUIT_EDITOR`" -abslog=`"$smokeLog`""
    # Touching Handle makes .NET keep the process handle open; without it ExitCode reads back empty
    # once a -PassThru process has exited.
    $null = $p.Handle
    if (-not $p.WaitForExit(20 * 60 * 1000)) { $p.Kill(); Fail 'editor smoke test timed out' }
    $bad = Select-String -Path $smokeLog -Pattern 'Unable to load module|failed to load|incompatible|Plugin .* failed|could not be compiled|Missing precompiled' |
        Where-Object { $_.Line -match 'Azr|Azureal|ManualVR|ForceExit' }
    if ($bad) { $bad | Select-Object -First 10 | ForEach-Object { Write-Host "  FAIL  $($_.Line)" -ForegroundColor Red }; Fail 'editor could not load the framework' }
    # Errors a client would see on every editor start but that do not stop the framework loading.
    # Listed rather than failed: each is a framework bug to fix in the dev repo, not a packaging fault.
    $clientVisible = Select-String -Path $smokeLog -Pattern 'Failed to find|is not initialized properly|CDO Constructor' |
        Where-Object { $_.Line -match 'Azr|Azureal|ManualVR|ForceExit|FSop|FChapterDef|FRuntimeStep' } |
        ForEach-Object { ($_.Line -replace '^\[[^\]]*\]\[\s*\d+\]', '').Trim() } | Sort-Object -Unique
    foreach ($line in $clientVisible) { Write-Note "editor start error clients will see: $line" }

    foreach ($m in 'AzurealXR', 'AzurealXREditor', 'Azureal_CSM', 'AzurealForceExit', 'ManualVRPlugin') {
        # The module manager logs every DLL it loads by module name; plugin mount lines only name plugins.
        if (-not (Select-String -Path $smokeLog -Pattern "InternalLoadLibrary: '$m'" -Quiet)) { Fail "no sign of $m loading in the editor log" }
    }
    Write-Ok "editor launched unattended and loaded every framework module (exit $($p.ExitCode))"

    if (-not $SkipPackage) {
        # Package Project the way a client ships a build: compile, cook, stage and pak a Shipping game.
        $packageDir = Join-Path $StageRoot 'package-test'
        Reset-Dir $packageDir
        $uat = Join-Path $EngineDir 'Engine\Build\BatchFiles\RunUAT.bat'
        $packageLog = Join-Path $LogDir 'verify-package-shipping.log'
        $u = Start-Process $uat -NoNewWindow -Wait -PassThru -RedirectStandardOutput $packageLog -RedirectStandardError "$packageLog.err" `
            -ArgumentList "BuildCookRun -project=`"$verifyProject`" -platform=Win64 -clientconfig=Shipping -build -cook -stage -pak -archive -archivedirectory=`"$packageDir`" -unattended -utf8output -nop4"
        if ($u.ExitCode -ne 0) { Fail "Package Project (Shipping) failed (exit $($u.ExitCode)). Log: $packageLog`n$((Get-Content $packageLog -Tail 25) -join "`n")" }
        $shippingExe = Get-ChildItem $packageDir -Recurse -Filter '*-Win64-Shipping.exe' | Select-Object -First 1
        if (-not $shippingExe) { Fail "Package Project produced no Shipping executable in $packageDir" }

        # Launch it once. A framework module that cannot initialise in a packaged game ends the process
        # at startup; a healthy one is still running when we stop it.
        $g = Start-Process $shippingExe.FullName -ArgumentList '-nullrhi -nosound -unattended' -PassThru
        $null = $g.Handle
        if ($g.WaitForExit(30000)) { Fail "the packaged Shipping game exited within 30 s (exit $($g.ExitCode))" }
        Stop-Process -Id $g.Id -Force
        $packageMB = [math]::Round((Get-ChildItem $packageDir -Recurse -File | Measure-Object Length -Sum).Sum / 1MB)
        Write-Ok "packaged a Shipping game ($packageMB MB) and it started"
        Assert-PluginsUnchanged 'Package Project'
    }
}

# --- 8. Publish ------------------------------------------------------------------------------------

Write-Stage 'Publish to output repo'

if (-not (Test-Path (Join-Path $OutputRepo '.git'))) {
    $old = $ErrorActionPreference; $ErrorActionPreference = 'Continue'
    & git clone $OutputRemote $OutputRepo 2>&1 | Out-Null
    $ErrorActionPreference = $old
    if ($LASTEXITCODE -ne 0) { Fail "could not clone $OutputRemote" }
    Write-Ok "cloned $OutputRemote"
}

$remote = (Invoke-Git $OutputRepo @("remote", "get-url", "origin") | Select-Object -First 1).ToString().Trim()
# GitHub Desktop and a plain clone disagree on the trailing ".git"; both name the same repo.
function Get-RepoKey([string]$Url) { ($Url.Trim().TrimEnd('/') -replace '\.git$', '').ToLowerInvariant() }
if ((Get-RepoKey $remote) -ne (Get-RepoKey $OutputRemote)) { Fail "output repo origin is $remote, expected $OutputRemote" }

# The dev history holds every line of source. If its first commit is reachable from the output repo,
# someone merged or pushed it there, and publishing on top would only hide the leak.
$devRoot = (Invoke-Git $DevRepo @("rev-list", "--max-parents=0", "HEAD") | Select-Object -First 1).ToString().Trim()
$old = $ErrorActionPreference; $ErrorActionPreference = 'Continue'
& git -C $OutputRepo cat-file -e "$devRoot^{commit}" 2>$null
$leaked = ($LASTEXITCODE -eq 0)
$ErrorActionPreference = $old
if ($leaked) { Fail 'the output repo contains the dev repo history. Stop and clean it before publishing anything.' }
Write-Ok 'output repo shares no history with the dev repo'

Get-ChildItem $OutputRepo -Force | Where-Object { $_.Name -ne '.git' } | Remove-Item -Recurse -Force
Copy-Item (Join-Path $ReleaseOut '*') $OutputRepo -Recurse -Force
Get-ChildItem $ReleaseOut -Force -Filter '.*' -File | Copy-Item -Destination $OutputRepo -Force

# A .gitignore that swallows the framework binaries would drop them from the commit with no error.
$ignored = Invoke-Git $OutputRepo @("status", "--porcelain", "--ignored", "--", "Plugins") | Where-Object { $_ -match '^!!' }
if ($ignored) { $ignored | Select-Object -First 10 | ForEach-Object { Write-Host "  FAIL  $_" -ForegroundColor Red }; Fail '.gitignore hides shipped plugin files' }

[void](Invoke-Git $OutputRepo @("add", "-A"))
$staged = @(Invoke-Git $OutputRepo @("diff", "--cached", "--name-only"))
Write-Ok "$($staged.Count) file(s) changed in $OutputRepo"

if ($Commit -and $staged.Count) {
    # Only what changed, in points. The dev commit this was built from is recorded in RELEASE.json
    # beside the symbols, which is where a crash report gets matched to its build.
    $message = (@($Changes | Where-Object { $_ -and $_.Trim() }) | ForEach-Object { "- $($_.Trim())" }) -join "`n"

    # From a file, not -m. Windows PowerShell passes a double quote inside an argument to a native
    # program unescaped, so a point that quotes a name ("Explanation Mode") splits the message and git
    # reads the rest as pathspecs. No BOM, or it lands at the start of the commit message.
    $messageFile = Join-Path $StageRoot 'COMMIT_MESSAGE.txt'
    [IO.File]::WriteAllText($messageFile, $message + "`n", (New-Object System.Text.UTF8Encoding($false)))
    [void](Invoke-Git $OutputRepo @("commit", "-q", "-F", $messageFile))
    Write-Ok "committed: $((Invoke-Git $OutputRepo @("log", "--oneline", "-1") | Select-Object -First 1))"
    (Invoke-Git $OutputRepo @("rev-parse", "HEAD") | Select-Object -First 1).ToString().Trim() | Set-Content -Path $BranchReleaseFile -Encoding ASCII
}
if ($Push) {
    if (-not $Commit) { Fail '-Push needs -Commit' }
    [void](Invoke-Git $OutputRepo @("push", "origin", "HEAD"))
    Write-Ok "pushed to $OutputRemote"
}

Write-Host ''
Write-Host "Release ready in $OutputRepo$(if (-not $Commit) { ' (staged, not committed)' })." -ForegroundColor Green
Write-Host "Symbols for crash reports and RELEASE.json: $SymbolDir  - archive these; they are NOT in the release."
