<#
.SYNOPSIS
    Generate ElevenLabs narration together with the word timings the Azr_Explain text reveal needs.

.DESCRIPTION
    Calls the ElevenLabs "with-timestamps" endpoint, which returns the spoken audio AND a
    character-by-character alignment saying exactly when each character is voiced. Those characters are
    folded back into words, so every word gets the moment it is spoken.

    That list is what makes the reveal exact. Without it Azr_Explain has to infer the pacing from how
    loud the audio is at each instant, which follows the voice but is never word-perfect -- measured at
    up to 0.97s of drift by mid-sentence, worst around the pauses between paragraphs.

    Outputs, side by side:
      <name>.wav / .mp3   import into Unreal, assign to the step's Audio Track
      <name>.times.txt    comma-separated seconds, paste into the step's Word Timings box

    VOICE SETTINGS
    The ElevenLabs website encodes what you generated with into the filename, e.g.
        ..._Roger - Laid-Back, Casual, Resonant_pre_sp100_s89_sb97_m2.wav
                                                    sp100 s89  sb97 m2
    meaning speed 1.00, stability 0.89, similarity boost 0.97, multilingual v2. The defaults below match
    that, so regenerated lines sound like the ones already made. Change them and the voice changes
    character -- match the existing clips or redo the whole module.

    Generation is NOT deterministic without -Seed. A re-run of the same text gave 10.63s where the
    original was 11.10s, so always ship the audio that came out with its own timings.

.EXAMPLE
    # Prove the timing maths works. No API call, no credits.
    .\Azr-ElevenLabsTimings.ps1 -SelfTest

.EXAMPLE
    # Confirm the voice id against your own account
    .\Azr-ElevenLabsTimings.ps1 -ListVoices

.EXAMPLE
    # Normal use. A file handles paragraph breaks cleanly.
    .\Azr-ElevenLabsTimings.ps1 -TextFile C:\Narration\C1_Intro.txt -OutName C1_Intro -OutDir C:\Narration
#>

[CmdletBinding()]
param(
    [string] $Text,
    [string] $TextFile,
    [string] $OutName,
    [string] $OutDir = ".",

    [string] $ApiKey = $env:ELEVENLABS_API_KEY,

    # Roger - Laid-Back, Casual, Resonant. Run -ListVoices to confirm against your own account.
    [string] $VoiceId = "CwhRBWXzGAHq8TQ4Fs17",
    [string] $ModelId = "eleven_multilingual_v2",

    # Defaults mirror the existing module's clips -- see the note above before changing these.
    [ValidateRange(0.0, 1.0)] [double] $Stability       = 0.89,
    [ValidateRange(0.0, 1.0)] [double] $SimilarityBoost = 0.97,
    [ValidateRange(0.7, 1.2)] [double] $Speed           = 1.00,
    [ValidateRange(0.0, 1.0)] [double] $Style           = 0.00,
    [switch] $NoSpeakerBoost,

    # Same seed + same text + same settings reproduces a generation. 0 leaves it to ElevenLabs.
    [int] $Seed = 0,

    # Starting rung of the format ladder. PCM is raw samples and gets a WAV header added below.
    # Unreal 5.8 imports mp3 as well as wav, so the mp3 fallback needs no conversion.
    [ValidateSet("pcm_44100", "pcm_24000", "pcm_22050", "pcm_16000", "mp3_44100_128")]
    [string] $OutputFormat = "pcm_44100",

    [switch] $ListVoices,
    [switch] $SelfTest
)

$ErrorActionPreference = "Stop"

# --------------------------------------------------------------------------------------------------
# Characters -> word start times.
#
# Its own function so -SelfTest can exercise the part that actually decides synchronisation, with no
# API call and no credits spent.
# --------------------------------------------------------------------------------------------------
function ConvertTo-WordStartTimes {
    param(
        [Parameter(Mandatory = $true)] [array] $Characters,
        [Parameter(Mandatory = $true)] [array] $StartTimes
    )

    $times  = New-Object System.Collections.Generic.List[double]
    $inWord = $false

    for ($i = 0; $i -lt $Characters.Count; $i++) {
        $isSpace = [string]::IsNullOrWhiteSpace($Characters[$i])

        if (-not $isSpace -and -not $inWord) {
            # First character of a word -- the instant it begins being spoken.
            $times.Add([double]$StartTimes[$i])
            $inWord = $true
        }
        elseif ($isSpace) {
            $inWord = $false
        }
    }

    return $times
}

# Same rule as the C++ (any run of whitespace separates words) so the counts agree. If they ever
# disagree Unreal rejects the timings -- safe, but not useful.
function Get-WordCount {
    param([Parameter(Mandatory = $true)] [string] $InText)
    return ($InText -split '\s+' | Where-Object { $_ -ne "" }).Count
}

# --------------------------------------------------------------------------------------------------
# Self test -- no network, no key, no credits
# --------------------------------------------------------------------------------------------------
if ($SelfTest) {
    Write-Host ""
    Write-Host "SELF TEST - timing maths only, no API call" -ForegroundColor Cyan
    Write-Host ""

    $sentence = "Check the 11kV panel."          # 4 words, with punctuation and a digit-word
    $chars  = $sentence.ToCharArray() | ForEach-Object { [string]$_ }
    # Synthetic alignment: every character 0.10s apart, so the expected answers are obvious by eye.
    $starts = 0..($chars.Count - 1) | ForEach-Object { [math]::Round($_ * 0.10, 3) }

    $got      = ConvertTo-WordStartTimes -Characters $chars -StartTimes $starts
    $expected = @(0.0, 0.6, 1.0, 1.5)   # C(0) t(6) 1(10) p(15)
    $words    = Get-WordCount -InText $sentence

    Write-Host ("  sentence : '{0}'" -f $sentence)
    Write-Host ("  words    : {0}" -f $words)
    Write-Host ("  expected : {0}" -f (($expected | ForEach-Object { "{0:F3}" -f $_ }) -join ","))
    Write-Host ("  got      : {0}" -f (($got      | ForEach-Object { "{0:F3}" -f $_ }) -join ","))
    Write-Host ""

    $ok = ($got.Count -eq $words) -and ($got.Count -eq $expected.Count)
    if ($ok) {
        for ($i = 0; $i -lt $expected.Count; $i++) {
            if ([math]::Abs($got[$i] - $expected[$i]) -gt 0.0005) { $ok = $false; break }
        }
    }

    if ($ok) { Write-Host "  PASS - word boundaries and counts line up." -ForegroundColor Green }
    else     { Write-Host "  FAIL" -ForegroundColor Red; exit 1 }

    Write-Host ""
    return
}

# --------------------------------------------------------------------------------------------------
# Everything past here needs the API
# --------------------------------------------------------------------------------------------------
if ([string]::IsNullOrWhiteSpace($ApiKey)) {
    throw "No API key. Set it once with:  `$env:ELEVENLABS_API_KEY = '<your key>'   (or pass -ApiKey)"
}
$headers = @{ "xi-api-key" = $ApiKey }

if ($ListVoices) {
    Write-Host ""
    Write-Host "Your ElevenLabs voices:" -ForegroundColor Cyan
    $voices = Invoke-RestMethod -Method Get -Uri "https://api.elevenlabs.io/v1/voices" -Headers $headers
    foreach ($v in $voices.voices) { Write-Host ("  {0,-26} {1}" -f $v.name, $v.voice_id) }
    Write-Host ""
    return
}

if ([string]::IsNullOrWhiteSpace($OutName)) { throw "-OutName is required." }

if (-not [string]::IsNullOrWhiteSpace($TextFile)) {
    if (-not (Test-Path $TextFile)) { throw "Text file not found: $TextFile" }
    $Text = Get-Content -Raw -Encoding UTF8 $TextFile
}
if ([string]::IsNullOrWhiteSpace($Text)) { throw "Provide -Text or -TextFile." }

$Text = $Text.Trim()

if (-not (Test-Path $OutDir)) { New-Item -ItemType Directory -Force -Path $OutDir | Out-Null }
$OutDir = (Resolve-Path $OutDir).Path

$voiceSettings = @{
    stability         = $Stability
    similarity_boost  = $SimilarityBoost
    style             = $Style
    use_speaker_boost = (-not $NoSpeakerBoost.IsPresent)
    speed             = $Speed
}

$payload = @{ text = $Text; model_id = $ModelId; voice_settings = $voiceSettings }
if ($Seed -gt 0) { $payload["seed"] = $Seed }
$body = $payload | ConvertTo-Json -Depth 6

Write-Host ""
Write-Host "Requesting narration + timings..." -ForegroundColor Cyan
Write-Host ("  voice      : {0}" -f $VoiceId)
Write-Host ("  model      : {0}" -f $ModelId)
Write-Host ("  settings   : speed {0:N2}  stability {1:N2}  similarity {2:N2}  style {3:N2}  speakerBoost {4}" -f `
            $Speed, $Stability, $SimilarityBoost, $Style, (-not $NoSpeakerBoost.IsPresent))
if ($Seed -gt 0) { Write-Host ("  seed       : {0}" -f $Seed) }
Write-Host ""

# Which output formats a key may use depends on its subscription tier, and that is not knowable without
# asking. Rather than make the caller guess, walk down from the requested format until one is allowed.
# Best quality first; the mp3 at the end is available on every tier and Unreal 5.8 imports mp3 directly,
# so the ladder always ends somewhere usable.
$ladder   = @("pcm_44100", "pcm_24000", "pcm_22050", "pcm_16000", "mp3_44100_128")
$startAt  = [array]::IndexOf($ladder, $OutputFormat)
if ($startAt -lt 0) { $startAt = 0 }

$resp = $null; $usedFormat = $null

foreach ($fmt in $ladder[$startAt..($ladder.Count - 1)]) {
    $uri = "https://api.elevenlabs.io/v1/text-to-speech/$VoiceId/with-timestamps?output_format=$fmt"
    try {
        $resp = Invoke-RestMethod -Method Post -Uri $uri `
            -Headers ($headers + @{ "Content-Type" = "application/json" }) `
            -Body ([System.Text.Encoding]::UTF8.GetBytes($body))
        $usedFormat = $fmt
        break
    }
    catch {
        $detail = $_.ErrorDetails.Message

        # Only a tier refusal is worth stepping down for. Anything else (bad key, bad voice, bad text)
        # fails identically at every rung, so fail loudly rather than walking the whole ladder.
        if ($detail -and $detail -match 'output_format_not_allowed') {
            Write-Host ("  {0,-14} not on your tier, trying the next one down..." -f $fmt) -ForegroundColor DarkYellow
            continue
        }
        if ($detail) { Write-Host ("ElevenLabs said: " + $detail) -ForegroundColor Red }
        throw
    }
}

if (-not $resp) { throw "Every output format was refused. Check the subscription on this key." }
if (-not $resp.alignment) { throw "No alignment in the response; this model or endpoint returned no timestamps." }

$OutputFormat = $usedFormat
Write-Host ("  granted    : {0}" -f $OutputFormat) -ForegroundColor Green

# --- audio ----------------------------------------------------------------------------------------
$audioBytes = [Convert]::FromBase64String($resp.audio_base64)

if ($OutputFormat -like "pcm_*") {
    # Raw 16-bit mono PCM. Prepend a RIFF header so Unreal imports it as a SoundWave.
    $rate = [int]($OutputFormat -replace 'pcm_', '')
    $ms = New-Object System.IO.MemoryStream
    $bw = New-Object System.IO.BinaryWriter($ms)
    $bw.Write([char[]]"RIFF");  $bw.Write([int](36 + $audioBytes.Length))
    $bw.Write([char[]]"WAVE")
    $bw.Write([char[]]"fmt ");  $bw.Write([int]16)
    $bw.Write([int16]1)                 # PCM
    $bw.Write([int16]1)                 # mono
    $bw.Write([int]$rate)
    $bw.Write([int]($rate * 2))         # byte rate = rate * channels * bytesPerSample
    $bw.Write([int16]2)                 # block align
    $bw.Write([int16]16)                # bits per sample
    $bw.Write([char[]]"data");  $bw.Write([int]$audioBytes.Length)
    $bw.Write($audioBytes)
    $bw.Flush()
    $audioPath = Join-Path $OutDir "$OutName.wav"
    [System.IO.File]::WriteAllBytes($audioPath, $ms.ToArray())
    $bw.Dispose(); $ms.Dispose()
}
else {
    # Unreal 5.8's sound factory registers mp3 alongside wav/ogg/flac/opus, so this imports as-is.
    # The timings are unaffected either way -- they come from the alignment data, not the audio file.
    $audioPath = Join-Path $OutDir "$OutName.mp3"
    [System.IO.File]::WriteAllBytes($audioPath, $audioBytes)
}

# --- timings --------------------------------------------------------------------------------------
# 'alignment' follows the text as submitted. 'normalized_alignment' follows the SPOKEN expansion, where
# "11kV" becomes "eleven kilovolts" -- more characters than the sentence on screen, so its indices would
# not correspond to the words the widget displays.
$wordTimes     = ConvertTo-WordStartTimes -Characters $resp.alignment.characters `
                                          -StartTimes $resp.alignment.character_start_times_seconds
$expectedWords = Get-WordCount -InText $Text

$csv         = ($wordTimes | ForEach-Object { "{0:F3}" -f $_ }) -join ","
$timingsPath = Join-Path $OutDir "$OutName.times.txt"
Set-Content -Path $timingsPath -Value $csv -Encoding utf8 -NoNewline

Write-Host "Done." -ForegroundColor Green
Write-Host ("  audio   : {0}" -f $audioPath)
Write-Host ("  timings : {0}" -f $timingsPath)
Write-Host ""
Write-Host ("  words in text : {0}" -f $expectedWords)
Write-Host ("  timings found : {0}" -f $wordTimes.Count)

if ($wordTimes.Count -ne $expectedWords) {
    Write-Host ""
    Write-Host "WARNING: counts disagree, so Unreal will reject these and fall back to estimating." -ForegroundColor Red
    Write-Host "         Check for unusual punctuation or stray whitespace, then re-run." -ForegroundColor Red
}
else {
    Write-Host ("  last word at  : {0:F2}s" -f $wordTimes[$wordTimes.Count - 1])
    Write-Host ""
    Write-Host "Paste into the step's Word Timings box (English):" -ForegroundColor Cyan
    Write-Host $csv
}
Write-Host ""
