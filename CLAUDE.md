# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project overview

**This repo is a blank Unreal Engine 5.8 host project used to develop the Azureal XR Framework by Virtual X Sdn Bhd — and the framework is one plugin: `AzurealXR`. That plugin is the real product.** The three other plugins (`Azureal_CSM`, `ManualVRPlugin`, `AzurealForceExit`) are first-party **companion/optional modules** built in the same harness, not part of the core framework. `Azureal_XR_V2` itself is only a harness to compile the plugin C++ and PIE-test it: the primary game module (`Source/Azureal_XR_V2/`) is an intentionally **empty shell** (one `IMPLEMENT_PRIMARY_GAME_MODULE` line, zero classes) and should stay that way — write framework code in `Plugins/AzurealXR/`, never in `Source/`.

The framework targets OpenXR headsets on Win64 (PCVR), with a desktop (no-HMD) fallback built into the pawn. **All framework logic is C++.** The Blueprint and content assets in the repo (`Content/`, and each plugin's `Content/`) are demo / example / test material showing how a downstream training-module project *consumes* the framework — treat them as fixtures, not as the framework itself. The plugins (AzurealXR is the framework; the rest are companions):

| Plugin | Purpose |
|---|---|
| **AzurealXR** — *THE framework* | The product. VR pawn/locomotion, physical interaction components (Grab/Latch/Touch), gaze, in-world guidance UI (Explain/Action/Label/Highlight), and the `UAzr_SessionSubsystem` HTTP client that reports progress to the Azureal server. Win64 + Android. Pulls in OpenXR/XRBase/EnhancedInput/CableComponent (the .uproject itself enables none of these). Everything under "Architecture" below is this plugin unless stated otherwise. |
| **Azureal_CSM** — *companion* | Optional chapter/step curriculum system that layers on top of the framework (the acronym is never expanded in code): data assets defining chapters → master steps → sub-steps/quizzes, a `UChapterSubsystem` (GameInstance subsystem) holding progression across level loads, and C++ UMG base classes (MainMenuPage, TrainingStepPage, row widgets). **Win64 only** — excluded from Android builds. |
| **ManualVRPlugin** — *legacy companion* | Older/parallel LMS telemetry — a C++ `UBlueprintFunctionLibrary` ("ManualVR" backend): session create/update/end over HTTP, configured by command-line args instead of env vars. Loads at `PreLoadingScreen`. Overlaps the framework's own `UAzr_SessionSubsystem` — two parallel telemetry systems (see *Session reporting* below). |
| **AzurealForceExit** — *utility* | One C++ Blueprint-callable node, `ForceKillGame()` — `::TerminateProcess` on Windows to quit instantly without the crash reporter (PCVR quit behavior). |

Maps: `Content/Framework_Development.umap` is the **development sandbox level** (World Partition — actors live one-file-per-actor under `Content/__ExternalActors__/`) where you drop framework components to exercise them; it is not a shipping product level. Plugin `Content/` also holds demo maps (`AzurealXR/Content/DemoScene`, `.../ExampleScene/.../Map_Example_Interactions`) that isolate individual systems.

## Build & development commands

Engine is a Launcher install at `C:\Program Files\Epic Games\UE_5.8` (the .sln references it by relative path). There are no tests and no lint setup. The normal dev loop is a plugin one: **edit plugin C++ → build the editor target (or Live Coding) → PIE-test in `Framework_Development.umap`.** The game/package commands below are rarely needed for framework work.

```powershell
# Build editor binaries (required after any C++ change)
& "C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\Build.bat" Azureal_XR_V2Editor Win64 Development -Project="C:\GitHub\Azureal_XR_Framework_UE5.8\Azureal_XR_V2.uproject" -WaitMutex

# Build the game (non-editor) target
& "C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\Build.bat" Azureal_XR_V2 Win64 Development -Project="C:\GitHub\Azureal_XR_Framework_UE5.8\Azureal_XR_V2.uproject" -WaitMutex

# Launch the editor
& "C:\Program Files\Epic Games\UE_5.8\Engine\Binaries\Win64\UnrealEditor.exe" "C:\GitHub\Azureal_XR_Framework_UE5.8\Azureal_XR_V2.uproject"

# Regenerate VS project files (after adding/removing source files or plugins)
& "C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\GenerateProjectFiles.bat" -project="C:\GitHub\Azureal_XR_Framework_UE5.8\Azureal_XR_V2.uproject" -game

# Package a Win64 build
& "C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun -project="C:\GitHub\Azureal_XR_Framework_UE5.8\Azureal_XR_V2.uproject" -platform=Win64 -clientconfig=Development -build -cook -stage -pak
```

Two solutions exist: `Azureal_XR_V2.sln` is the game solution; `Automation_Azureal_XR_V2.sln` contains only engine C# tooling (UBT/UAT/EpicGames.*) — you rarely need it. `Binaries/`, `Intermediate/`, `Saved/`, `DerivedDataCache/`, `.vs/`, and each plugin's `Binaries/`/`Intermediate/` are generated — never edit them, and ignore them when searching (built artifacts are currently checked into the tree).

Runtime context: `UAzr_SessionSubsystem` reads `AZUREAL_*` environment variables (token, API URL, module version id, …) set by an external launcher; missing vars → it logs a warning and falls back to Offline Mode (all session calls fail fast, nothing is queued). `ManualVRPluginBPLibrary::InitializeCommandLine` is harsher: an empty init string calls `exit(0)`, and a failed CreateSession quits the app — running Blueprints that use ManualVR nodes outside its launcher will kill the process.

## Architecture

### Framework vs. curriculum: decoupled except for localization

`AzurealXR` (the framework — how you interact) and `Azureal_CSM` (a separate, optional curriculum module — what the training flow is) are deliberately decoupled: **`AzurealXR` has no dependency on CSM**, so it stays independently reusable. The one dependency is **one-directional** — `Azureal_CSM.Build.cs` lists `AzurealXR` as a private dependency so the curriculum can share the localization system (`FAzr_MultiLangText` in `Azr_Types.h` + `UAzr_SessionSubsystem::GetSessionLanguage()`) — see *Localization* below. The companion depending on the framework is fine; the framework still never depends on the companion. They are otherwise bridged only on the *consumer* side, by a per-chapter "Game Manager" actor that a downstream training module supplies (the demo one, `GM_C1`, is a Blueprint, but it can equally be C++). The contract itself is C++: `FChapterDef` names a `ChapterGameManagerClass`, an instance of which **must be placed in that chapter's level**; `UTrainingStepPage` finds it via `GetActorOfClass` and calls `IStepSequencerInterface::Execute_RunStepsOrder` each time a new step is first entered. The Game Manager then drives AzurealXR components (Enable/Disable + delegate binding) and calls `AdvanceProgress()` back on the step page. Despite its name, `StepSequencerInterface` has nothing to do with Level Sequencer.

### AzurealXR interaction model

- **Components, not inheritance.** `AAzr_Interactable` is only a convenience base actor for grabbable props. The real "brains" are components you add to any actor: `UAzr_Grab` (free pick-up; modes: plain / attach-to-socket / remove / trigger — chosen by which `Enable*` you call), `UAzr_Latch` (1-DOF constrained motion: Angular lever, Linear slider, Rotation valve — the component itself is the moving pivot), `UAzr_Touch` (detection only). Latch and Touch are split brain/zone: `UAzr_LatchZone`/`UAzr_TouchZone` box components link to their brain by matching **`InteractID`** (int32, default 1) among sibling components. `UAzr_AttachTarget` is the socket/receptacle for GrabAttach, matched by `CompatibleClass` + `AttachSequenceID`.
- **Everything is dormant until enabled.** The universal pattern is paired `EnableX()`/`DisableX()` BlueprintCallable methods; zones sit at `NoCollision` and components don't tick until enabled (`bStartWithTickEnabled=false`, tick toggled on demand). `EndPlay` auto-disables. A training sequence (Game Manager BP) is expected to enable exactly the interaction it currently wants.
- **Grab is single-owner — no stealing.** A held `UAzr_Grab` object cannot be taken by the other hand: `SnapActorToHand` returns early when `CurrentHand` is set to a *different* hand, and `UAzr_HandScanner::ProcessGrabInput` skips objects where `IsHeld()` is true. The player must release, then the other hand can grab. Every `Disable*` path (and `EndPlay`, via `DisableGrab`) silently drops a held object through `ClearHeldState()` — it detaches and clears `CurrentHand` but deliberately does **not** broadcast `OnReleased` (a programmatic disable is not a player release), so a force-disable mid-hold can never leave an object stuck un-grabbable. **Latches are intentionally multi-hand** (`ActiveHands[]`) and exempt from this ownership lock — do not add it there.
- **Detection is overlap + tags + one collision profile.** `UAzr_HandScanner` (one per hand on the pawn) builds two overlap capsules at runtime and **tags them in C++** (`CreateScanCapsules`): `InteractCapsule` → `Left`/`Right`, `DistanceGrabCapsule` → `DistanceLeft`/`DistanceRight`. Those tags are **load-bearing** — interactables/zones read the *overlapping capsule's* tag to know a hand is present and which one (`IsRelevantHandComp` for the indicator, plus `Azr_Touch` and `Azr_LatchZone` hand detection). Set them in the scanner code, never in the Blueprint. Zones flip to profile `Azr_Collision` when enabled, and the scanner *rejects any overlap whose profile name isn't exactly that*. Grab/Latch instead resolve handedness from the scanner's `bIsRightHand`, so they don't depend on the capsule tag. No interfaces, no traces (gaze is a fat capsule overlap from the camera, unoccluded by walls).
- **Guidance visuals ride along.** Grab/Latch/Touch/AttachTarget/Explain/Action all share the same package: custom-depth outline (stencil **252**) pulsed via `MPC_Highlight`'s `"Alpha"` scalar, a CableComponent "tether" from mesh to a billboarded widget, an `AAzr_Indicator` actor (animations in BP via OnStartIdle/OnExpand/OnShrink), sounds and haptics. This block is **copy-pasted across four files** (Azr_Grab, Azr_Latch, Azr_Touch, Azr_AttachTarget) — a fix in one must be applied in all.
- **Blueprint contract:** components find their target mesh/widget on the owner **by name** (`TargetMesh` / `TargetWidget` defaults, matched by exact FName *or substring* `Contains()` — beware accidental matches). Delegates BP binds to live under category `Azureal|Events` (`OnGrabbed/OnReleased`, `OnValueChanged`, `OnTouched`, `OnGazeTriggered`, `OnExplainPlusCompleted`, `OnActionCompleted`, …). C++ widget bases are `UCLASS(Abstract)` with `meta=(BindWidget)` members the WBP must name exactly.

### AzurealXR pawn

`AAzr_Pawn` builds the whole rig in C++ (VROrigin → Camera + motion controllers → hand meshes, `UAzr_HandScanner`s, widget-interaction "smart lasers", gaze reticle widget) but leaves two things to the Blueprint subclass (`BP_Azr_Pawn` in plugin content): **all Enhanced Input assets** (`IMC_Default`, `IA_*` — EditAnywhere pointers never set in C++; unassigned = that input silently dead) and the **`UAzr_Teleport` component** (`FindComponentByClass` at BeginPlay; absent = teleport/blink-step silently no-op). Locomotion is stick-routed through `ProcessStickInput` (teleport arc / smooth move / snap turn / blink-step, dominant-hand gated); hovering a UI widget soft-locks sticks to scrolling. `AAzr_GameMode` is intentionally empty — default pawn is set per-level/in-editor, not hardcoded. Config *does* set `GlobalDefaultGameMode=/AzurealXR/Core/BP_Azr_GameMode` (a Blueprint subclass of it), but no `GameInstanceClass` is set, and `GameDefaultMap` still points at the engine OpenWorld template map (so a packaged build does not boot the project map).

### Azureal_CSM flow

`UChapterBundle` (data asset, e.g. `Module_1`) lists `FChapterDef`s → each has a level soft-ptr, a hard-referenced `UTrainingCurriculum` (per-chapter `FStepData[]`: Standard checklist or Quiz), and the Game Manager class. `UChapterSubsystem` survives `OpenLevel` and holds current chapter, completed set, and per-chapter step high-water marks — **session-only; there is no SaveGame/persistence anywhere**. `UTrainingStepPage` compiles authored steps through `GetFilteredSteps(bShowExplanations)` — Explanation-type sub-steps are globally togglable via `UExplanationFlowLibrary` (a process-wide C++ `static bool`, default true). Quiz pages: C++ `EvaluateCurrentPageType()` is an **empty stub**; the WBP must call `ForceQuizStateFromBlueprint()` or quizzes silently don't work. Chapter completion is granted by paging past the last step onto the result page.

### Localization (English / Malay / Tamil)

Multi-language text uses **`FAzr_MultiLangText`** (`Azr_Types.h`) — a struct of three `FString`s (`English`/`Malay`/`Tamil`). Active language = `UAzr_SessionSubsystem::GetSessionLanguage()` (the `AZUREAL_LANGUAGE` env var: `en`/`ms`/`ta`), falling back to English when a box is blank. **Two parallel resolvers** read it:
- **AzurealXR widgets** (`Azr_LabelWidget`/`Azr_ActionWidget`/`Azr_ExplainWidget`) each have a private `GetLocalizedText()` — self-contained, no CSM dependency. The interaction components' description fields (`UAzr_Grab::Grab.Description`, `Azr_Latch::LatchDescription`, `Azr_Touch::TouchDescription`, `Azr_AttachTarget::AttachDescription`, `FAzr_ExplainStep::ExplainText`, `UAzr_Action::ActionDescription`, `FAzr_LabelPayload::LabelText`) are all `FAzr_MultiLangText`, and the widget button captions (`Text_*`) get EN/Malay/Tamil defaults seeded in `NativeConstruct`.
- **CSM** uses `UMyBlueprintFunctionLibrary::GetActiveLanguageText(WorldContext, FAzr_MultiLangText)` (a `BlueprintPure` node) for chapter titles, step/quiz text, restart prompts, and page chrome (`TrainingStepPage` button/time labels seed English defaults). This is the reason CSM depends on AzurealXR.

**Content contract:** retyping a serialized field to `FAzr_MultiLangText` **wipes the previously-authored `FText`** in DataAssets/Blueprints — the 3 boxes must be re-authored. Step titles, sub-step descriptions, and quiz questions are resolved **Blueprint-side** (WBP nodes call `GetActiveLanguageText`), not in C++ — so those WBP nodes must be wired to the resolver. Adding a new localized string = make the field `FAzr_MultiLangText`, then resolve it through the in-plugin resolver (AzurealXR widgets) or `GetActiveLanguageText` (CSM).

### Session reporting (two parallel systems)

- `UAzr_SessionSubsystem` (AzurealXR): env-var configured (`AZUREAL_TOKEN`, `AZUREAL_API_URL`, …), session types Training/Event/Course choose REST path prefixes (`/training-sessions`, `/event-sessions`, `/course-sessions`). Blueprints use the async nodes `Azureal - Start Session` / `Record Action` / `Quiz Update` / `End Session` / `Record Time` (`Azr_StartSessionAction`, `Azr_AzurealUpdate` — the latter is *not* an auto-updater despite the name). Only HTTP 200 counts as success; no retry/queueing.
- `ManualVRPluginBPLibrary`: command-line configured, `/api/app/training-session/*` routes, state in file-scope C++ globals. Which system a given product build uses is decided in Blueprints.

### Authoring a CSM course — the setup workflow

How a downstream product (e.g. the "Westport WFH" safety course, UE 5.7) builds a curriculum on this framework. **Terminology:** a *Procedure* = a Master Step (`FStepData`); a *Sub-Procedure* = a Sub-Step (`FSubStepData`). Shape: **Module → Chapters → Master Steps → Sub-Steps / Quiz**. Pipeline: **chapter doc → instruction sheet (CSV) → built blueprints**.

**Scaffold (per module)** — duplicate three plugin templates into consumer content (typically `/Game/CSM`; `Azureal_CSM` is a project plugin so its assets are yours to copy). Use the plugin's `WBP_MainMenu`/`WBP_StepPage` **directly** — don't copy the widgets (copying forces painful widget-class retyping):
1. `Module_1` (once) → the `UChapterBundle` chapter registry.
2. `DA_Chapter<n>` (per chapter) → the `UTrainingCurriculum` steps.
3. `GM_C<n>` (per chapter) → the step sequencer.

**Then wire it up:**
- **Populate `DA_Chapter<n>`:** `MasterSteps[]` = one `FStepData` per Procedure (`StepType` Standard/Quiz, `StepTitle`, `SubSteps[]` — each `Description` + `Type` Interaction/Explanation), 1:1 from the CSV's `No / Procedure / Sub-No / Sub-Procedure` columns.
- **Wire `Module_1`:** `AllChapters[]` = one `FChapterDef` per chapter — `ChapterTitle`, `ChapterLevel` (map), `StepData → DA_Chapter<n>`, `ChapterGameManagerClass → GM_C<n>`.
- **`BP_CSM` (menu actor):** parent `AAzr_Interactable` + a `WidgetComponent` (Scale 0.1, Widget Class `WBP_MainMenu`, *Draw at Desired Size* ON, collision preset **`Azr_Collision`** so the laser can hit it). Graph: `BeginPlay → Get widget → SetVisibility(true) → EnablePointer(Target = the widget component)` (`EnablePointer` inherited from `AAzr_Interactable`; left null the laser aims at `SceneRoot`, not the menu).
- **The one required wiring step:** on `WBP_MainMenu`, point `Initialize Chapters → Master List` (Chapter Subsystem) and `Generate Chapter List → Data Asset` (Main Menu Page) at **your** `Module_1` — otherwise the menu shows the plugin's demo chapters and edits to your copies silently do nothing. (This is the data source `UMainMenuPage::GenerateChapterList` reads.)

**Per-chapter runtime pieces (dev-owned, not auto-generated):**
- **`GM_C<n>`** is the real sequencer — its `IStepSequencerInterface::RunStepsOrder()` graph enables the step's interaction(s), binds their completion delegates, and calls `AdvanceProgress` (often hundreds of nodes; a ~256-node reference lives in Westport's `Test_Chapter/GM_C1`). **`BP_C<n>_CSM`** is only a *thin placed actor* (~3 nodes) — don't hunt for logic there.
- **`BP_C<n>_*`** interactable actors (Azr components) + **`BP_C<n>_*_Ghost`** placement guides (`M_Ghost` shows the correct target spot, e.g. where a hook belongs — a content convention, distinct from `UAzr_AttachTarget`'s auto ghost). Consumer content is usually split `/Game/CSM` (curriculum + menu) vs `/Game/MCP` (interactables).
- **Progress/score reporting is opt-in — CSM never auto-reports.** The `Azureal - Record Action` / `Quiz Update` / `End Session` nodes live in **AzurealXR** (`UAzr_SessionSubsystem`); CSM's C++ only touches that subsystem for `GetSessionLanguage()`. So `GM_C<n>` **must call the record/quiz/end nodes** per sub-step/quiz, or nothing reaches the LMS.

## Conventions

- **Naming:** everything in AzurealXR is prefixed `Azr_` (`AAzr_`/`UAzr_`/`FAzr_`/`EAzr_`); CSM classes are unprefixed. UFUNCTION/UPROPERTY categories are namespaced `Azureal|…` (Logic, Settings, Events, Components). Components are `UCLASS(ClassGroup=(AzurealXR), meta=(BlueprintSpawnableComponent))`. Standard asset prefixes: `BP_`, `WBP_`, `IA_`/`IMC_`, `DA_`, `GM_`, `M_`/`MI_`/`MPC_`, `SC_`, `SM_`/`SK_`, `T_`, `ABP_`. Downstream **content** conventions: per-chapter prefix `C1`…`C5` (e.g. `BP_C3_LeftHook`), and `*_Ghost` (`M_Ghost`) placement-guide assets.
- **Lifecycle idiom** ("sleepy" components): `bCanEverTick=true` + `bStartWithTickEnabled=false`, tick enabled only while active; `Enable*/Disable*` pairs guarded by a bool; timer lambdas capture `TWeakObjectPtr`, never `this`.
- **Delegates:** `DECLARE_DYNAMIC_MULTICAST_DELEGATE*`, `BlueprintAssignable`, bound with `RemoveDynamic`-then-`AddDynamic`; async BP nodes unbind and `SetReadyToDestroy` on first callback.
- Blueprint-facing indices are 1-based (chapter/step/option numbers); internals 0-based.
- Per-developer content goes under `Content/Developers/<name>/` (existing: `HAOVX`).

## Critical constraints — do not break these

1. **Collision setup is config-level and hardcoded in code:** `ECC_GameTraceChannel1` = `Azr_Interactable`, `ECC_GameTraceChannel2` = `Azr_Trace`, profile `Azr_Collision` (DefaultEngine.ini). The profile *name string* is hardcoded in the pawn, scanner, and every zone — new interactable content must use exactly these; don't reassign the channel slots.
2. **Hardcoded plugin-content paths in C++ constructors** (`ConstructorHelpers::FObjectFinder` on `/AzurealXR/Core/XRMannequins/...`, `/AzurealXR/Interaction/Highlight/MPC_Highlight`, `/AzurealXR/Interaction/Cable_System/...`, ghost-hand meshes, sound cues, haptics). Moving or renaming assets under `Plugins/AzurealXR/Content/` silently nulls these defaults.
3. **Magic values shared across systems:** custom-depth stencil `252` (Grab/Latch/Touch/Gaze/Explain/Action/Highlight + the outline post-process material), MPC scalar parameter name `"Alpha"`, gaze-reticle material parameter `"Progress"`, `AAzr_Interactable::GlobalHiveSpeed` (a mutable `static float` — last enabler wins process-wide).
4. **Rendering is the VR-tuned forward path — content depends on it.** From `DefaultEngine.ini`: `r.ForwardShading=True` (forward, **not** deferred), `vr.InstancedStereo=True`, `r.AntiAliasingMethod=3` (**MSAA**) + `r.MSAACount=4`, `r.Nanite.ProjectEnabled=True`, `r.Substrate=True`, `r.AllowStaticLighting=False`, `r.CustomDepth=3` (stencil write enabled — the outline system needs this), OpenXR fixed-foveation (`bIsFBFoveationEnabled=True`, `xr.VRS.FoveationLevel=2`). What is deliberately **off** despite leftover flags: GI is None (`r.DynamicGlobalIlluminationMethod=0`), reflections are SSR (`r.ReflectionMethod=2`), `r.RayTracing=False`, VSM off (`r.Shadow.Virtual.Enable=0`) — so the stray `r.Lumen.HardwareRayTracing=True` / `r.PathTracing=True` lines are inert at runtime. Materials/lighting were authored under this exact setup; don't flip forward-shading, MSAA, Substrate, or static-lighting casually. (`bStartInVR=True` in `DefaultGame.ini`.)
5. **Single-player assumptions everywhere:** player index 0 hardcoded in all lookups.
6. **Azureal_CSM is Win64-only** — its .uplugin has `PlatformAllowList: ["Win64"]` and `Installed: true` (the other three plugins are not "installed"). An Android/Quest package will not contain the CSM module, so anything gated on the curriculum system needs a non-CSM path on Android. (Its `EngineVersion` is `5.8.0`, matching the project.)
7. **`UAzr_GazeManager` pauses after every zone** — Blueprint must call `TriggerNextGaze()` or the sequence stalls; it has no "all done" delegate of its own.
8. **This is a dev harness, so product/packaging config is intentionally unset — don't "fix" it unless asked.** `GameDefaultMap` = engine OpenWorld template, no MapsToCook/packaging section, `DefaultEditor.ini` empty, and DefaultGame.ini keeps placeholder copyright/ProjectID. Iterate via the editor target + PIE, not by cooking a package.

## Known sharp edges (pre-existing, be careful nearby)

- ManualVRPlugin has latent null-deref paths in its HTTP callbacks (missing `return` after failure checks) and keeps all state in file-scope globals.
- `FindMeshByName`/`FindWidgetByName` substring matching can grab the wrong component; `UAzr_Grab` looks for a mesh literally named `"Target Mesh"` (with a space) before falling back.
- `FindAndShowGhost()` picks the *first* (not nearest) `UAzr_AttachTarget` in a 50 m sphere.
- Latch `Linear` mode treats `LimitMin/Max` as absolute parent-local coordinates, unlike Angular/Rotation which offset from the BeginPlay transform; the latch's `InitialTransform` is captured once at BeginPlay and must not be invalidated by runtime repositioning.
- `AAzr_Interactable::OnConstruction` strips ComponentTick and shadows from all components (opt out with `KeepTick`/`KeepShadow` tags); `SkipGhost` excludes meshes from AttachTarget ghost generation.
- CSM's `UTrainingStepPage` gives up silently after 10×0.1 s retries if the subsystem has no data; `GoNextPage` still prints a leftover on-screen debug message.
- User-facing strings in CSM are hardcoded English (`FText::FromString`) — not localization-ready.
- **Don't create child components inside a component that is itself a native default subobject** (nested default subobjects). When the owning actor is Blueprint-subclassed (e.g. `BP_Azr_Pawn`), UE 5.8 fires a *"Template Mismatch during attachment"* ensure + a `DetailLayoutHelpers` ensure because the nested subobject's `AttachParent` doesn't remap from the CDO to the instance. `UAzr_HandScanner` therefore builds its `InteractCapsule`/`DistanceGrabCapsule` at runtime in `BeginPlay` (`NewObject` + `RegisterComponent`, `RF_Transient`, sizes exposed as `EditAnywhere` floats) — mirror that for any new scanner-like component. Components you add through a Blueprint's SCS (the Grab/Latch/Touch/Explain/Action/AttachTarget tether anchors + cable) go through a *different* instancing path and are unaffected — only native-subobject-of-a-BP-subclassed-native-actor nesting trips it. **Corollary:** when you move a sub-component to runtime creation, re-establish in code anything the Blueprint had configured on it — the scanner capsules' `Left`/`Right`/`DistanceLeft`/`DistanceRight` hand tags were authored on the old BP sub-component, so runtime-creating the capsules silently dropped them and broke close-range hand detection until they were re-added in `CreateScanCapsules`.
