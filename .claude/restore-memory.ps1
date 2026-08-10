<#
.SYNOPSIS
    Restore this repo's assistant memory from the backup committed alongside it.

.DESCRIPTION
    The live memory is not stored in the repo. It sits in a per-machine folder whose name is derived
    from where this repo happens to live on disk, so it does not survive a new account, a new machine,
    or moving this directory. `.claude/memory-backup/` is the version-controlled copy; this script puts
    it back.

    Run it once after cloning on a new machine, then start a session and the memories are recalled.

.EXAMPLE
    powershell -ExecutionPolicy Bypass -File .\.claude\restore-memory.ps1

.EXAMPLE
    # Overwrite memories that already exist at the destination
    powershell -ExecutionPolicy Bypass -File .\.claude\restore-memory.ps1 -Force
#>

[CmdletBinding()]
param(
    [switch] $Force,
    # Preview the destination and what would be copied, without writing anything.
    [switch] $WhatIfOnly
)

$ErrorActionPreference = "Stop"

# Repo root is this script's parent's parent (.claude/restore-memory.ps1)
$repoRoot  = Split-Path -Parent (Split-Path -Parent $PSCommandPath)
$backupDir = Join-Path $repoRoot ".claude\memory-backup"

if (-not (Test-Path $backupDir)) { throw "No backup found at $backupDir" }

# The folder name is the repo's full path with :, \, _ and . all replaced by -
# e.g. C:\GitHub\Azureal_XR_Framework_UE5.8  ->  C--GitHub-Azureal-XR-Framework-UE5-8
$key = $repoRoot -replace '[:\\_.]', '-'
$dest = Join-Path $env:USERPROFILE ".claude\projects\$key\memory"

Write-Host ""
Write-Host "  repo   : $repoRoot"
Write-Host "  backup : $backupDir"
Write-Host "  target : $dest"
Write-Host ""

$files = Get-ChildItem -Path $backupDir -Filter *.md -File | Where-Object { $_.Name -ne "README.md" }
Write-Host ("  memories to restore: {0}" -f $files.Count)

if ($WhatIfOnly) {
    $files | ForEach-Object { Write-Host ("    " + $_.Name) }
    Write-Host ""
    Write-Host "  (dry run - nothing written)" -ForegroundColor Yellow
    return
}

if (-not (Test-Path $dest)) {
    New-Item -ItemType Directory -Force -Path $dest | Out-Null
    Write-Host "  created target folder"
}

$existing = @(Get-ChildItem -Path $dest -Filter *.md -File -ErrorAction SilentlyContinue)
if ($existing.Count -gt 0 -and -not $Force) {
    Write-Host ""
    Write-Host ("  {0} memory file(s) already there. Re-run with -Force to overwrite." -f $existing.Count) -ForegroundColor Yellow
    Write-Host "  Nothing written." -ForegroundColor Yellow
    return
}

$n = 0
foreach ($f in $files) {
    Copy-Item -Path $f.FullName -Destination (Join-Path $dest $f.Name) -Force
    $n++
}

Write-Host ("  restored {0} file(s)" -f $n) -ForegroundColor Green
Write-Host ""

# MEMORY.md is the index loaded at the start of each session - without it the rest is not found.
if (Test-Path (Join-Path $dest "MEMORY.md")) {
    Write-Host "  MEMORY.md index present - start a session and the memories should be recalled." -ForegroundColor Green
} else {
    Write-Host "  WARNING: MEMORY.md is missing from the backup. The index is what gets loaded," -ForegroundColor Red
    Write-Host "           so without it the individual memories will not be found." -ForegroundColor Red
}
Write-Host ""
Write-Host "  NOTE: skills are separate. They live in .claude/skills/ and load straight from the repo."
Write-Host ""
