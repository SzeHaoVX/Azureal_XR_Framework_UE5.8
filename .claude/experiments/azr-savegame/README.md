# Experiment: whole-world save and resume

**Status: parked. Deliberately NOT part of the framework.** Kept here so it can be revived if it is
ever confirmed for production. The framework source is untouched.

Working prototype as of 2026-08-03, proven on TNB Chapter 1 including mid-step resume. Never tested on
chapters 2-7, never packaged, never ported.

## What it did

A learner could stop at any step or sub-step, close the app, and later resume at exactly the step,
sub-step and position in the world they left. It captures every reflected property on every saveable
actor and its components — so all Blueprint variables come back, plus transforms, attachments,
physics velocities, visibility, the player's pose, and which Azureal interactions were armed.

What it cannot capture, and why saving is only allowed at quiescent moments: **Blueprint execution
position**. A graph part-way through a Delay, a timer or an async node keeps that position in the
latent action manager, which is not reflected and cannot be serialised. Restoring into one leaves a
chain that never continues.

## Files here

| File | What it is |
|---|---|
| `source/` | the 7 new save-system files, verbatim |
| `armed-mode.patch` | adds `AzrArmedMode` / `AzrArmedSequenceID` to the interaction components |
| `csm-hooks.patch` | the Azureal_CSM hooks (ChapterSubsystem, TrainingStepPage, MainMenuPage) |
| `SAVE_SYSTEM_TESTING.md` | the original testing guide |

Both patches were verified to apply cleanly against the framework at archive time.

## Reviving it

```
git apply .claude/experiments/azr-savegame/armed-mode.patch
git apply .claude/experiments/azr-savegame/csm-hooks.patch
cp .claude/experiments/azr-savegame/source/*.h   Plugins/AzurealXR/Source/AzurealXR/Public/
cp .claude/experiments/azr-savegame/source/*.cpp Plugins/AzurealXR/Source/AzurealXR/Private/
```

`Azr_Explain.h` also needs the same `AzrArmedMode` block the other components get — it is not in
`armed-mode.patch` because that file additionally carries the text-reveal experiment, which is archived
separately under `azr-explain-text-reveal/`. Copy the block from any other component.

A full working copy also runs in the TNB sandbox.

## Console commands it adds

`Azr.Save`, `Azr.Load`, `Azr.Save.Info`, `.Delete`, `.Dump`, `.RoundTrip`, `.Verify`, `.SetSafe`, and
`Azr.Actor.Dump <NamePart>`. `Azr.Save.Verify` captures, saves, reloads, restores, re-captures and
diffs — it is what made the bugs below findable.

## Rules that each cost a build-and-test cycle to find

- The Game Manager's `Steps Integer` is a blind counter — `RunStepsOrder` increments *then* switches.
  Resume must SET it and never re-run the sequencer; re-running arms the step's sub-step 1 alongside
  the restored one and both fire.
- **Never snapshot while a step chain is in flight.** Chains open
  `Spawn Sound 2D → Delay → … → Step N`, so a save at step entry catches the world with nothing armed.
  `GoNextPage` therefore saves only on chapter completion.
- **Exclude widget object references.** Widgets live in `/Engine/Transient`, so their saved paths never
  resolve after a level load and the restore writes NULL over the GM's `WBP Step Page` — after which
  `AdvanceProgress` silently goes nowhere.
- **Exclude engine infrastructure actors** (Controller, GameMode, GameState, PlayerState,
  CameraManager, HUD, WorldSettings). `BP_Azr_GameMode` is a Blueprint, so it was being property-
  restored, and that froze the HMD view.
- **Never write these raw** — restore them through their setters: `bHidden`,
  `RelativeLocation/Rotation/Scale`, `AttachParent/AttachSocketName/AttachChildren`, `BodyInstance`. A
  raw write changes memory without telling the engine, so the later setter sees "no change" and skips,
  and collision comes back dead.
- `PostLoadMapWithWorld` fires **after** `World->BeginPlay()`, so widgets have already constructed. Any
  flag a widget checks during its own construction must be raised BEFORE `OpenLevel`.
- `SetTotalSessionSteps` wipes `StepTriggerHistory` — restore it in the SAME frame or `Build Step UI`
  reads it as blank and fires a step.
- Pawn restore: shift the rig so the CAMERA lands on the saved spot, yaw only, and never apply the
  vertical delta. Reuse `AAzr_Pawn::ExecuteRoomScaleTeleport`.
- **Delete the slot (`Azr.Save.Delete`) after any save-code change.** Saves survive project restarts,
  and a stale one looks exactly like "your fix didn't work".

## Why it was not recommended for production

Saves are **~18 MB** — every Blueprint variable on ~73 actors. Trim with an `AzrNoSave` tag first.
Beyond that: LMS dedup is unwired (`MarkReported`/`WasReported` exist but nothing calls them), there is
no Continue button on the main menu, and chapters 2-7 are untested.

The deeper reason it was fragile is structural, not a bug: step position is duplicated in five places
that must agree by hand. See the Game Manager notes — fixing that first would make most of the above
unnecessary.
