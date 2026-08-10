---
name: azr-explain-text-reveal
description: "Azr_Explain word-by-word text reveal synced to narration - the envelope attempt, why it failed, and the exact ElevenLabs-timestamp version that works"
metadata: 
  node_type: memory
  type: project
  originSessionId: 476fe6fc-eae3-4d83-89c0-c52b396e6559
  modified: 2026-08-10T03:44:41.468Z
---

`Azr_Explain` can reveal its sentence word by word in step with the voice-over. Built 2026-08-04, never
committed. Off by default (`bRevealTextWithAudio`). Production plan agreed but deliberately **not**
built - see [[azr-savegame-experiment]] for the other on-hold experiment.

**WHERE IT ACTUALLY LIVES (checked 2026-08-10):** only
`C:\VR_Game\MechadiumVR\TNB-Module2-Version3\Plugins\AzurealXR`. The framework-repo copy was reverted
at some point and is **gone** - `Azr_Explain.h` there has zero `bRevealTextWithAudio`. Copy it back from
TNB if it is wanted in the framework (the two differ only by the save system's `AzrArmedMode`).

**Two paths exist in the code.** `FAzr_ExplainStep::WordTimings` (3-box CSV of seconds) filled in =
exact reveal, driven straight off the numbers. Blank = falls back to estimating pace from audio
loudness.

**The generator script is LOST.** `Tools/Azr-ElevenLabsTimings.ps1` (ElevenLabs `with-timestamps` ->
wav + word-time CSV, with `-SelfTest`, `-ListVoices` and an output-format fallback ladder) exists
nowhere on disk any more. Its outputs survive in `C:\Narration` (`C1_Intro.wav`, `C1_Intro.times.txt`,
29 words). Rewriting it needs the notes below, which are the whole reason this memory exists.

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
