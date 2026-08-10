---
name: csm-game-manager-flow
description: "How a chapter Game Manager (GM_C<n>) is actually wired - the 4 phases, and the position-is-identity problem that makes it expensive to author"
metadata: 
  node_type: memory
  type: project
  originSessionId: 476fe6fc-eae3-4d83-89c0-c52b396e6559
  modified: 2026-08-05T07:38:41.743Z
---

Measured from `GM_C1` in the TNB Module 2 project (2026-08-04, via UnrealClaude MCP `blueprint_query`):
**680 nodes in one flat EventGraph, zero functions or collapsed graphs**, 69 custom events (9 `Step N`
+ 60 `Sub N-M-K`), 37 variables (35 of them actor refs), 324 calls across 105 distinct types.

**The four phases a dev wires by hand, every chapter:**
1. **BeginPlay** - `Delay 0.2` then a `Sequence`: set `Chapter Number` on `Azr_GameInstance`; find
   `BP_CSM_C<n>` and `Enable Pointer`; `Get All Widgets Of Class` WBP_StepPage index [0]; then ~35
   chained `Get Actor Of Class` -> promote to variable, one per interactable.
2. **Dispatch** - `Event RunStepsOrder` (fired by Start Chapter AND by Next) -> `Steps Integer ++` ->
   `Switch on Int`. Each output: `Spawn Sound 2D -> Delay(its Duration) -> Spawn Sound 2D -> Delay ->
   Step N`. Nothing is armed during that window.
3. **Step body** - `Step N` arms the first interaction. Each `Sub N-M-K` hides the previous guidance,
   arms the next, optionally does bespoke world work (Door Open, Teleport Inside, Set New Location),
   then calls `Advance Progress` on the step page.
4. **Reporting** - after every Advance Progress, `ManualVR Update` with four hand-typed ints
   (Chapter Code / Procedure Code / Sub Procedure Code / Completion Status). At the last sub of each
   step, `Enable Pointer` + a "STEP X COMPLETED" `Spawn Sound 2D`.

**The completion loop is circular and name-coupled.** The GM has *zero* delegate-binding nodes. It
arms an interactable by calling a position-named function on it (`Set 1-2 Action Visible`); the
interactable holds its own `GM_C1` reference, binds its own Azr component delegate
(`ComponentBoundEvent`), and calls the GM's position-named event back (`Sub 1-2-1`).

**Why:** the step position is duplicated in **five** places that must agree, with nothing enforcing it -
the `Steps Integer` counter, the GM's event names, the interactable's function names, the hand-typed
ManualVR codes, and the CSM DataAsset's array order. Renumbering means editing all five by hand, and a
mismatch fails silently. This is the root cause of the save/resume bugs in
[[azr-savegame-experiment]] and of how long a chapter takes to author.

**How to apply:**
- ~50% of the 324 calls are pure boilerplate (33 Delay, 31 Advance Progress, 31 ManualVR Update,
  27 Spawn Sound 2D, 35 GetActorOfClass). The other ~50% is a long tail of bespoke per-actor functions
  that will never fit a generic schema - do NOT design assuming full data-driving works.
- The 33 `Delay` nodes are latent state, unserialisable, and the reason a mid-chain save soft-locks.
- Chapter 1 uses `ManualVR Update`, i.e. the legacy telemetry path, not `UAzr_SessionSubsystem`.
- `Get All Widgets Of Class`[0] and each `Get Actor Of Class` assume exactly one instance exists.
- MCP recipe: `POST http://127.0.0.1:3000/mcp/tool/blueprint_query` (IPv4, editor must be running),
  body needs `operation` (`inspect`/`get_graph`/`get_nodes`/`get_variables`/`search_nodes`/
  `find_references`) + `blueprint_path`; `get_nodes` defaults to `limit` 100, max 1000. Node fields are
  `class` and `title`, not `node_type`. `GET /mcp/tools` lists all 28 tools.
