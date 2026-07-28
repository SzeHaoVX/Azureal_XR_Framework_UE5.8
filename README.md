# Azureal XR Framework

**A C++ framework for building VR training simulations in Unreal Engine 5.8.**
Developed by **Virtual X Sdn Bhd**.

Azureal provides the layer between a bare Unreal project and a finished VR training module: a
ready-made VR pawn, a component-based physical interaction model, in-world guidance UI, and
progress reporting to the Azureal training server. Content teams assemble a course from these
pieces instead of rebuilding VR fundamentals for every product.

| | |
|---|---|
| **Engine** | Unreal Engine 5.8 |
| **Platforms** | Win64 (PCVR, OpenXR) · Android/Quest for the core framework |
| **Language** | C++ (Blueprint is used for content, not framework logic) |
| **Status** | Active development |

---

## Repository layout

This repository is a **development harness**: a host project used to compile the framework and
test it in PIE. The framework itself is the `AzurealXR` plugin.

```
Plugins/
  AzurealXR/          <- the framework (the product)
  Azureal_CSM/        <- optional curriculum/chapter system
  ManualVRPlugin/     <- legacy LMS telemetry
  AzurealForceExit/   <- instant-quit utility for PCVR builds
Content/              <- demo and test assets only
Source/               <- intentionally empty game module
Config/               <- rendering, collision and input configuration
```

> **Framework code belongs in `Plugins/AzurealXR/`, never in `Source/`.** The primary game module
> is an empty shell by design. Assets under `Content/` are demos and fixtures that show how a
> downstream training module consumes the framework.

### Plugins

| Plugin | Purpose | Platforms |
|---|---|---|
| **AzurealXR** | The framework. VR pawn and locomotion, interaction components, guidance UI, session reporting. | Win64, Android |
| **Azureal_CSM** | Optional curriculum layer: chapters, procedures, sub-procedures and quizzes, with menu and step-page widgets. | Win64 |
| **ManualVRPlugin** | Legacy LMS telemetry, configured by command line. Superseded by the framework's own session subsystem. | Win64 |
| **AzurealForceExit** | `ForceKillGame()` — terminates a packaged build instantly without the crash reporter. | Win64 |

`AzurealXR` has no dependency on `Azureal_CSM`, so the framework stays reusable on its own. The
dependency runs one way only: the curriculum plugin consumes the framework.

---

## Requirements

- Unreal Engine **5.8** (Launcher install)
- Visual Studio 2022 with the *Game development with C++* workload
- An OpenXR-capable headset for VR testing (a desktop no-HMD fallback is built into the pawn)

## Getting started

```powershell
# 1. Generate project files
& "C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\GenerateProjectFiles.bat" -project="<repo>\Azureal_XR_V2.uproject" -game

# 2. Build the editor target
& "C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\Build.bat" Azureal_XR_V2Editor Win64 Development -Project="<repo>\Azureal_XR_V2.uproject" -WaitMutex

# 3. Open the editor
& "C:\Program Files\Epic Games\UE_5.8\Engine\Binaries\Win64\UnrealEditor.exe" "<repo>\Azureal_XR_V2.uproject"
```

Open `Content/Framework_Development.umap` — the sandbox level used to exercise framework features —
and press Play. The typical loop is **edit plugin C++ → build the editor target → PIE-test**.

---

## Core concepts

### Interaction is composed, not inherited

Interactions are **components you add to any actor**, not a class you derive from. `AAzr_Interactable`
exists only as a convenience base for grabbable props.

| Component | Behaviour |
|---|---|
| `UAzr_Grab` | Pick-up. Four modes: free grab, attach-to-socket, remove, and trigger (analog squeeze). |
| `UAzr_Latch` | One-degree-of-freedom motion: angular lever, linear slider, or rotating valve. |
| `UAzr_Touch` | Hand-proximity detection. |
| `UAzr_AttachTarget` | Socket/receptacle that a Grab-Attach object snaps into. |
| `UAzr_GazeManager` | Look-at sequences driven from the camera. |

Every component is **dormant until enabled**. Each exposes paired `EnableX()` / `DisableX()`
Blueprint methods, and does not tick until active — so a training sequence enables exactly the
interaction it currently wants and nothing else is live.

Two ownership rules worth knowing: a held object **cannot be stolen** by the other hand (the player
must release first), while **latches are deliberately multi-hand**.

### Guidance UI

`UAzr_Explain`, `UAzr_Action` and `UAzr_Label` present in-world instructions, progress and tags.
They share the same presentation package as the interaction components: custom-depth outline
highlighting, a cable "tether" linking an object to its billboarded widget, an indicator actor,
sound and haptics.

### Locomotion

`AAzr_Pawn` builds the entire VR rig in C++ — tracking origin, camera, motion controllers, hand
meshes, hand scanners and UI laser pointers. Stick input is routed to teleport arc, smooth movement,
snap or smooth turn, and blink-step, gated to a configurable dominant hand.

Walkable space is authored with **`Azr_TeleportArea`** volumes: place a box over the floor the
player may reach and resize it. Validation is a containment test rather than a baked navigation
mesh, which keeps upper floors, mezzanines and tight spaces workable without regenerating anything.
Areas can be enabled and disabled at runtime to open or close parts of a scene as a procedure
progresses, and a landing-surface mode lets the arc settle on the volume itself for platforms that
have no floor collision. Levels built against a navigation mesh continue to work unchanged.

### Authoring tools

The `AzurealXREditor` module adds one-click scaffolding for interaction setups. From any Actor
Blueprint, the **Azureal** toolbar menu (or the Content Browser context menu, or <kbd>F1</kbd> in a
graph) adds the chosen component and generates its boilerplate: enable and disable events wired to
the matching calls, the component's event nodes, a labelled comment block, and the tag widget where
one applies. Repeat use adds further numbered instances rather than duplicating nodes.

### Localization

User-facing strings use `FAzr_MultiLangText`, which carries **English, Malay and Tamil** variants.
The active language comes from the session environment and falls back to English when a translation
is blank.

### Session reporting

`UAzr_SessionSubsystem` is an HTTP client that reports progress to the Azureal server. It is
configured entirely through `AZUREAL_*` environment variables supplied by the launcher (token, API
URL, module version, language). When those are absent it logs a warning and runs in **Offline
Mode**, so the framework remains testable without a server.

Blueprints drive it through async nodes: start session, record action, quiz update, record time and
end session. Reporting is **opt-in** — a course must call these nodes where it wants progress
recorded.

---

## Project configuration

Rendering is tuned for VR and content is authored against it. From `Config/DefaultEngine.ini`:
forward shading, instanced stereo, 4× MSAA, Substrate, no static lighting, custom-depth with
stencil write, and OpenXR fixed foveation. **Do not change forward shading, MSAA, Substrate or
static lighting casually** — materials and lighting depend on them.

Collision is fixed at project level and referenced by name in C++: the `Azr_Interactable` and
`Azr_Trace` trace channels, and the `Azr_Collision` profile. New interactable content must use
exactly these.

---

## Conventions

- Framework types are prefixed `Azr_` (`AAzr_`, `UAzr_`, `FAzr_`, `EAzr_`).
- Blueprint-facing categories are namespaced `Azureal|…` (Logic, Settings, Events, Components).
- Components are `ClassGroup=(AzurealXR)` and Blueprint-spawnable.
- Blueprint-facing indices are 1-based; internal indices are 0-based.
- Asset prefixes follow Unreal convention: `BP_`, `WBP_`, `DA_`, `IA_`/`IMC_`, `M_`/`MI_`/`MPC_`,
  `SM_`/`SK_`, `T_`, `ABP_`.

---

## License

Copyright © Virtual X Sdn Bhd. All rights reserved.
Proprietary and confidential — not for redistribution.
