---
name: azr-explain-text-reveal
description: "Azr_Explain word-by-word text reveal synced to narration - the envelope attempt, why it failed, and the exact ElevenLabs-timestamp version that works"
metadata: 
  node_type: memory
  type: project
  originSessionId: 476fe6fc-eae3-4d83-89c0-c52b396e6559
  modified: 2026-08-10T03:56:35.323Z
---

`Azr_Explain` can reveal its sentence word by word in step with the voice-over. Built 2026-08-04, never
committed. Off by default (`bRevealTextWithAudio`). Production plan agreed but deliberately **not**
built - see [[azr-savegame-experiment]] for the other on-hold experiment.

**WHERE IT LIVES:** the framework repo, **committed** on 2026-08-10 — `Plugins/AzurealXR`
(`Azr_Explain`, `Azr_ExplainWidget`, `Azr_Types`) plus `Tools/Azr-ElevenLabsTimings.ps1`. Also present
in the TNB sandbox, which additionally carries the save system's `AzrArmedMode`; that property is
deliberately **not** in the framework copy.

It was lost once: an earlier framework copy was reverted without either of us noticing and survived
only in TNB, and the script vanished entirely and had to be rewritten from these notes. That is exactly
why it is committed now — see [[framework-repo-is-home-for-all-notes]].

**Two paths exist in the code.** `FAzr_ExplainStep::WordTimings` (3-box CSV of seconds) filled in =
exact reveal, driven straight off the numbers. Blank = falls back to estimating pace from audio
loudness. Sample output from a real run is in `C:\Narration` (`C1_Intro.wav` + `.times.txt`, 29 words).

**Why:** the estimate was measured at **0.97 s worst-case error** against real timings - the failures
land on paragraph pauses (1.2 s of silence no spelling-based heuristic can predict). Exact timings are
the only thing that actually works.

**How to apply:**
- `OnAudioSingleEnvelopeValue` must be bound **before** the sound starts - `AudioComponent.cpp:837`
  latches it at Play time. `SpawnSoundAttached` plays on creation, so binding after is permanently too
  late. Build the component with `bAutoActivate=false`, bind, then `Play()`.
- UE's envelope is an **average absolute sample value**: speech peaks around **0.1**, not near 1.0, and
  scales with asset mastering. Any absolute silence threshold is wrong for the next clip - judge
  relative to the clip's own running peak (0.15 works).
- **UE 5.8 imports mp3, ogg, flac, opus and aiff**, not just wav (`SoundFactory.cpp:152-160`, gated on
  `WITH_SNDFILE_IO`). No ffmpeg conversion step needed.
- ElevenLabs: use `alignment`, **never** `normalized_alignment` - the normalized one tracks the spoken
  expansion ("11kV" becomes "eleven kilovolts"), so its indices do not match the displayed words.
- `pcm_44100` needs Pro tier; `pcm_24000` works on this account. The script walks down the format
  ladder automatically and only steps down on `output_format_not_allowed`.
- ElevenLabs filenames encode the generation settings: `_sp100_s89_sb97_m2` = speed 1.00, stability
  0.89, similarity boost 0.97, multilingual v2. Match these or regenerated lines sound different from
  the rest of the module.
- Regeneration is **not** deterministic without `-Seed`; a re-run gave 10.63 s vs the original 11.10 s.
  Always ship the wav that came with its timings.

**Known gaps, in the order they must be fixed for production:**
1. `FAzr_ExplainStep::AudioTrack` is a **single** `USoundBase*` while text and timings are 3-box - a
   Malay session gets Malay text with English audio. Blocks any non-English deployment.
2. `Elapsed` runs off wall clock (`GetTimeSeconds() - StepStartTime`), not actual playback position -
   a streaming hitch desyncs everything after it. `OnAudioPlaybackPercent` would fix it.
3. Word-count check catches added/removed words but not swapped ones ("substation" to "sub-station"
   stays 29 words). Needs a text checksum stored beside the timings.
4. Manual paste does not scale. Agreed design: a `CallInEditor` **Generate Narration** button on the
   step that calls ElevenLabs, imports the wav and fills the timings. Verified feasible -
   `FObjectDetails::AddCallInEditorMethods`, `IAssetTools::ImportAssetTasks`, `FBase64::Decode`, and
   the `AzurealXREditor` module already exists to host it. The API key must live in
   `UDeveloperSettings` with `config=EditorPerProjectUserSettings` (per-user ini, never an asset), and
   the checksum from (3) is what makes re-clicking free instead of re-billing.
