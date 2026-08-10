# Save / resume — setup, usage, testing

Experimental. Prove it here, then port to the AzurealXR plugin proper.

---

# 1. What it is made of

Eight files. Everything else is untouched framework code.

**AzurealXR — the generic half (would work on Android, knows nothing about curricula)**

| File | Role |
|---|---|
| `Public/Azr_SaveTypes.h` | The record structs — actor, component, property, pawn, payload |
| `Public/Azr_SaveGame.h` | The save object itself |
| `Public/Azr_SaveSubsystem.h` / `Private/…cpp` | Capture and restore. The engine of the whole thing |
| `Public/Azr_Saveable.h` | Optional interface for state the property system cannot reach |
| `Public/Azr_SaveVerifier.h` / `Private/…cpp` | Test tooling and console commands |

**Azureal_CSM — the curriculum half**

`ChapterSubsystem` contributes a `"CSM"` payload; `TrainingStepPage` contributes the sub-step
position and triggers the autosave; `MainMenuPage` gains the Continue API.

The dependency stays one-way: **CSM knows about AzurealXR, never the reverse.** AzurealXR just holds
an opaque blob it never interprets. That is what makes this portable to the plugin as-is.

---

# 2. Setup

## Works with zero setup

Saving is automatic. `UTrainingStepPage::AdvanceProgress` calls `SaveProgressNow()` at every sub-step
boundary, plus `ConfirmQuizAnswer` (quizzes never reach `AdvanceProgress`) and `GoNextPage` (which is
where chapter completion is marked). Paging **backwards** deliberately does not save, so reviewing an
earlier step cannot overwrite your resume position.

You can test immediately with the console commands in §3 — no Blueprint work needed.

## Needed for a Continue button

Four nodes on `WBP_MainMenu`, all already on `Main Menu Page`:

| Node | Use |
|---|---|
| `Has Saved Progress` | show/hide the Continue button |
| `Get Saved Progress Label` | its caption — e.g. `Chapter 2 - Step 4 of 9` |
| `Continue Saved Progress` | on pressed. Travels to the saved level and restores. Returns false if unusable |
| `Clear Saved Progress` | already called by `Restart Whole Module` |

`Continue Saved Progress` returning **false** means the save was refused — wrong module version, or a
missing level. Fall back to the normal start flow and log it.

## Optional hardening

`Set Safe To Save (false)` at the start of each `Sub N-M-K` chain and `(true)` at its end makes the
system refuse a manual save while a chain is mid-`Delay`. Autosave already only fires at boundaries,
so this only matters if you add a manual save button.

## Required if you report to the LMS

`UAzr_SessionSubsystem` has no deduplication. On resume, guard your `Record Action` / `Quiz Update`
calls with `Was Reported` and call `Mark Reported` after, or a resumed learner posts duplicate records
that cannot be cleaned up. **Nothing calls these yet — this is on you when you wire the GMs.**

## Environment variables

| Variable | Effect if unset |
|---|---|
| `AZUREAL_USER_ID` / `AZUREAL_TOKEN` | Slot name falls back to a single shared `AzurealProgress` — fine for dev, **wrong for a shared training PC** |
| `AZUREAL_MODULE_VERSION_ID` | The stale-content guard is skipped entirely, so dev iteration is not blocked. Set it in production |

---

# 3. Usage — console commands

Open the console with **`** in PIE.

| Command | What it does |
|---|---|
| `Azr.Save [slot]` | Snapshot now. Reports `REFUSED` if a chain is in flight |
| `Azr.Load [slot]` | Reload the level and restore |
| `Azr.Save.Info [slot]` | Label, timestamp, elapsed time — without loading |
| `Azr.Save.Delete [slot]` | Delete a slot |
| `Azr.Save.Dump` | List what a capture contains: actors, property counts, armed interactions, payloads |
| `Azr.Save.RoundTrip` | Capture → write → read back → compare. Instant, non-destructive |
| `Azr.Save.Verify` | Capture → save → reload → restore → capture again → compare. **The real test** |
| `Azr.Save.SetSafe 0\|1` | Force the in-flight guard |

Omit the slot to use the current learner's. Both verification commands use their own scratch slot and
never touch real progress.

Saves live in `Saved/SaveGames/`. Delete the folder to start clean.

---

# 4. Testing

## Start with this

```
Azr.Save.Verify
```

It compares the world before and after a real save/reload/restore, field by field. Every line it
prints is state the system failed to bring back — a machine decides, not your eyes.

```
VERIFY PASSED - the restored world matches the baseline exactly.
```

```
VERIFY FAILED - 2 difference(s). Each line below is state the save system is not bringing back:
    BP_C2_Valve_C_1.CurrentAngle: value differs after restore
    Payload 'CSM': 84 bytes -> 61 bytes, contents differ
```

## Suggested order

1. `Azr.Save.RoundTrip` at chapter start — must pass, or serialisation is broken and nothing else
   matters yet.
2. `Azr.Save.Dump` — confirm your GM, your interactables and a `payload 'CSM'` line all appear, and
   that armed interactions show as `[Azr_Grab=Grab]`.
3. Complete one sub-step → `Azr.Save.Verify`.
4. Complete a master step → `Azr.Save.Verify`.
5. Answer a quiz → `Azr.Save.Verify`.
6. Play a chapter end to end with a verify at every boundary.

**Always resume and play to the end — never resume and just look.** The GM's `Steps Integer` is a
blind counter, so a bad resume looks perfect on the first frame and fires the wrong step several
sub-steps later.

## Negative tests

- **Mid-chain refusal** — `Azr.Save.SetSafe 0` then `Azr.Save` must report `REFUSED`.
- **Damaged save** — truncate the `.sav` and `Azr.Load`. Must refuse, and **must not wipe the level**.
- **Wrong level** — `Azr.Load`, then immediately open a different map. The restore must abandon itself
  rather than apply to the wrong world.
- **Stale content** — set `AZUREAL_MODULE_VERSION_ID`, save, change it, load. Must refuse.
- **Hard kill** — kill the process mid-chain, relaunch, Continue. Should land on the last boundary and
  must not soft-lock.

## VR checks

- Walk 2 m off your play-space centre, save, reload — you should be where you were **standing**,
  facing the same way, with no world tilt.

---

# 5. Known limits

**Blueprint execution position cannot be serialised.** A graph inside a `Delay`, timer or async node
keeps that position in the latent action manager. That is why saves happen only at sub-step
boundaries. The guarantee is: **you lose at most the sub-step you were in the middle of completing.**

**Animation state machines and Niagara are unreachable.** Montages and Level Sequences *are*
restorable by playback position — implement `IAzr_Saveable` and write the position into a saved
variable in `AzrOnSaved`.

**These properties are deliberately not restored raw** — `bHidden`, `RelativeLocation/Rotation/Scale`,
`AttachParent/AttachSocketName/AttachChildren`, `BodyInstance`. Each is applied through its proper
setter instead. Writing them raw changes memory without telling the engine, so the render transform
never updates, the actor never really hides, and collision comes back dead.

**A renamed Blueprint variable loses its value** (records are keyed by name — it keeps its authored
default rather than corrupting the rest). **A retyped variable is not detected** and will deserialise
garbage. Retype with the same name only if you also clear old saves.

---

# 6. Not yet done

- LMS dedup wiring (§2) — the API exists, nothing calls it
- Continue button on `WBP_MainMenu` — C++ side ready, Blueprint side not built
- Slot names hash the learner token to 32 bits; a collision is astronomically unlikely but not impossible
