---
name: grab-hand-scanner-rotation
description: The HandScanner's rotation IS the frame Azr_Grab snaps held objects to — never rotate the scanner to aim the distance-grab beam (use DistanceCapsuleAim)
metadata:
  node_type: memory
  type: project
  originSessionId: a1abb5c2-2ea6-458c-b89c-14fa5a41670e
  modified: 2026-07-28T08:44:27.789Z
---

**`UAzr_HandScanner`'s transform does double duty, and that is a trap.** `UAzr_HandScanner::ProcessGrabInput` calls `SnapActorToHand(this, TargetSnap)`, so the scanner component IS the "hand" frame: `Azr_Grab` computes `TargetRelativeTransform = Actor.GetRelativeTransform(SnapPoint)` at grab time and then places the object as `TargetRelativeTransform × CurrentHand->GetComponentTransform()` (`Azr_Grab.cpp:668, 941, 949-950`). Net effect: the authored ghost hand (`LeftSnap_Visual`/`RightSnap_Visual` on `AAzr_Interactable`) is forced to land exactly on the scanner's transform. **Therefore any rotation applied to the HandScanner component rotates EVERY grabbed object off its authored pose** — all grabbables, both hands, rotation-only.

**Real incident (2026-07-28):** after the 5.7.4→5.8 port, grabs came out rotated vs what devs authored in the viewport. It was NOT an engine regression — the dev had rotated `LeftHandScanner`/`RightHandScanner` in `BP_Azr_Pawn` to fix the distance-grab capsule's direction (its aim was hardcoded `FRotator(90,0,0)` relative to the scanner, so rotating the scanner was the only way to steer it). That silently re-aimed grab too. **Diagnostic value: `Azr_Latch` was unaffected because Latch only uses the snap points to fly a COSMETIC ghost hand (`Azr_Latch.cpp:589-606`) and drives the real handle by parent-relative scalar math (angle/distance from `Hand->GetComponentLocation()`, `:794/894/908`) — it never consumes the hand's full rotation. "Grab wrong / Latch fine" ⇒ suspect the hand frame, not the interactable.**

**Fix (implemented):** added `UAzr_HandScanner::DistanceCapsuleAim` (FRotator, EditAnywhere, default Zero = straight forward). `UpdateDistanceCapsuleShape()` now aims the capsule via `Dir = DistanceCapsuleAim.RotateVector(FVector::ForwardVector)`, `SetRelativeRotation(FRotationMatrix::MakeFromZ(Dir).Rotator())` (a capsule's long axis is its local +Z), `SetRelativeLocation(Dir * HalfLen)` so it starts at the hand. **Rule going forward: aim the distance beam with `DistanceCapsuleAim`; keep the HandScanner component's own rotation at the value grab needs (C++ default is identity).** Capsules are runtime-created (see [[azurealxr-editor-tooling]] context / CLAUDE.md nested-subobject note), so property changes apply on the next PIE start.

Prior wrong theory, do not revisit: OpenXR 1.1 default-on in 5.8 changing the grip pose. `bIsOpenXR1_1Enabled=False` was tried and did NOT fix it; the line was reverted out of `Config/DefaultEngine.ini`.
