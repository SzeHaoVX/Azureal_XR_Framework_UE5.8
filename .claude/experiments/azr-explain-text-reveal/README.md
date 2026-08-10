# Experiment: word-by-word text reveal synced to narration

**Status: parked. Deliberately NOT part of the framework.** Kept here so it can be revived if it is
ever confirmed for production. The framework source is untouched.

## What it did

`Azr_Explain` clears its sentence when the learner presses Play and rebuilds it a word at a time in
step with the voice-over, holding still through pauses. Off by default (`bRevealTextWithAudio`), so
existing content was unaffected.

Two paths existed:

- **Exact** — fill `FAzr_ExplainStep::WordTimings` (per language, comma-separated seconds) and the
  reveal is driven straight off those numbers. Word-perfect.
- **Estimated** — leave it blank and pacing is inferred from the audio's loudness envelope. Follows the
  voice but drifts; measured at up to **0.97s** by mid-sentence, worst across paragraph pauses.

Tested end to end on TNB Chapter 1 with a real ElevenLabs clip. The exact path was accurate.

## Files here

| File | What it is |
|---|---|
| `explain-text-reveal.patch` | the full code change, as a git patch against the framework |
| `Azr-ElevenLabsTimings.ps1` | generates narration + matching word timings from ElevenLabs |

## Reviving it

```
git apply .claude/experiments/azr-explain-text-reveal/explain-text-reveal.patch
```

Then copy the script to `Tools/` and rebuild the editor target. The patch touches
`Azr_Explain.h/.cpp`, `Azr_ExplainWidget.h/.cpp` and `Azr_Types.h`.

A working copy also lives in the TNB sandbox, which additionally carries the save prototype's
`AzrArmedMode` property — that one is save-system state and must **not** come across with it.

## Things that cost a test cycle to learn

- `OnAudioSingleEnvelopeValue` must be bound **before** the sound starts — `AudioComponent.cpp:837`
  latches it at Play time. `SpawnSoundAttached` plays on creation, so binding after is permanently too
  late. Build the component with `bAutoActivate=false`, bind, then `Play()`. (Doing so also fixed a
  latent bug where every step of an Explain+ chain played from the first step's widget location.)
- The engine's envelope is an **average absolute sample value**: speech peaks around **0.1**, not near
  1.0, and scales with how the clip was mastered. Any absolute silence threshold is wrong for the next
  asset — judge against the clip's own running peak instead.
- **Unreal 5.8 imports mp3**, plus ogg/flac/opus/aiff, not just wav (`SoundFactory.cpp:152-160`). No
  conversion step is needed.
- ElevenLabs: use `alignment`, **never** `normalized_alignment` — the normalized one tracks the spoken
  expansion ("11kV" becomes "eleven kilovolts"), so its indices do not match the displayed words.
- `pcm_44100` needs the Pro tier; `pcm_24000` worked on this account. The script walks down the format
  ladder automatically and steps down only on `output_format_not_allowed`.
- ElevenLabs filenames encode the generation settings: `_sp100_s89_sb97_m2` = speed 1.00, stability
  0.89, similarity boost 0.97, multilingual v2. Match these or regenerated lines sound different from
  the rest of the module.
- Generation is **not** deterministic without `-Seed`: a re-run of the same text gave 10.63s where the
  original was 11.10s. Always ship the audio that came out with its own timings.

## What was never finished

1. `FAzr_ExplainStep::AudioTrack` is a **single** `USoundBase*` while text and timings are per-language,
   so a Malay session would show Malay text with English audio. Blocks any non-English use.
2. `Elapsed` runs off wall clock, not actual playback position, so a streaming hitch desynchronises
   everything after it. `OnAudioPlaybackPercent` would fix it.
3. The word-count guard catches added or removed words but not swapped ones — "substation" to
   "sub-station" stays 29 words. A text checksum stored beside the timings would close that.
4. Pasting timings per step does not scale. The agreed design was a `CallInEditor` **Generate
   Narration** button on the step; verified feasible via `FObjectDetails::AddCallInEditorMethods`,
   `IAssetTools::ImportAssetTasks` and `FBase64::Decode`, with the API key in `UDeveloperSettings`
   (`config=EditorPerProjectUserSettings`, per-user ini, never an asset).
