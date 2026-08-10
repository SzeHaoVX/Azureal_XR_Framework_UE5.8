---
name: azr-savegame-experiment
description: Save/resume prototype lives in the TNB-Module2-Version3 sandbox (untracked); the hard-won rules that make it work
metadata: 
  node_type: memory
  type: project
  originSessionId: 476fe6fc-eae3-4d83-89c0-c52b396e6559
  modified: 2026-08-10T04:04:48.751Z
---

Whole-world save/resume. On hold as of 2026-08-03. Working for Chapter 1 mid-step resume; not tested on
chapters 2-7, not ported, not production-ready. See [[csm-build-from-document-workflow]].

**ARCHIVED, NOT IMPLEMENTED**, at `.claude/experiments/azr-savegame/` in the framework repo (committed
2026-08-10): the 7 new source files verbatim, `armed-mode.patch`, `csm-hooks.patch`,
`SAVE_SYSTEM_TESTING.md` and a README with the revive steps and every rule below. Both patches were
verified to apply cleanly. The framework source itself is **untouched** — archive experiments, do not
merge them; see [[framework-repo-is-home-for-all-notes]]. A working copy also runs in the TNB sandbox.

Files: `Azr_SaveTypes/Saveable/SaveGame/SaveSubsystem/SaveVerifier` in AzurealXR, plus hooks in CSM's
`ChapterSubsystem` (opaque "CSM" payload), `TrainingStepPage`, `MainMenuPage`. Console tools: `Azr.Save.Verify`
(capture → save → reload → restore → capture → diff), `.RoundTrip`, `.Dump`, `Azr.Actor.Dump <name>`.

**Why:** these rules each cost a build-and-test cycle to find. Every one is non-obvious and re-derivable only
the hard way.

**How to apply:**
- The GM's `Steps Integer` is a blind counter — `RunStepsOrder` increments *then* switches. Resume must SET it
  and never re-run the sequencer; re-running arms the step's sub-step 1 alongside the restored one.
- Never snapshot while a GM chain is in flight. Chains open `Spawn Sound 2D → Delay → … → Step N`, so a save at
  step entry catches the world with nothing armed. `GoNextPage` therefore saves only on chapter completion.
- Exclude widget object references from the snapshot. Widgets live in `/Engine/Transient`, so their paths never
  resolve after a load and the restore writes NULL over the GM's `WBP Step Page` — `AdvanceProgress` then
  silently goes nowhere.
- Exclude engine infrastructure actors (Controller, GameMode, GameState, PlayerState, CameraManager, HUD,
  WorldSettings). `BP_Azr_GameMode` is a Blueprint, so it was being restored and it froze the HMD view.
- Never write these raw — restore them through their setters: `bHidden`, `RelativeLocation/Rotation/Scale`,
  `AttachParent/AttachSocketName/AttachChildren`, `BodyInstance`. Raw writes change memory without telling the
  engine, so the later setter sees "no change" and skips; collision comes back dead.
- `PostLoadMapWithWorld` fires AFTER `World->BeginPlay()`, so widgets have already constructed. Any flag a
  widget checks at construct must be raised BEFORE `OpenLevel`.
- `SetTotalSessionSteps` wipes `StepTriggerHistory`; restore it in the SAME frame or `Build Step UI` reads it as
  blank and fires a step.
- Pawn restore: shift the rig so the CAMERA lands on the saved spot, yaw only, and never apply the vertical
  delta — reuse `AAzr_Pawn::ExecuteRoomScaleTeleport`.
- **Delete the slot (`Azr.Save.Delete`) after any save-code change.** Saves survive project restarts and a stale
  one looks exactly like "your fix didn't work".
- Saves are ~18 MB (every Blueprint variable on ~73 actors). Trim with the `AzrNoSave` tag before production.
