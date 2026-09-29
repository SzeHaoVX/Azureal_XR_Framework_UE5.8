# Azureal XR Framework — project template

An Unreal Engine 5.8 project with the Azureal XR Framework installed, ready to build a training
module on. The framework plugins are **precompiled**: use them from Blueprint or C++, but their
implementation source is not included and they cannot be modified.

## Requirements

- **Unreal Engine 5.8**, installed from the Epic Games Launcher. The plugins are built against it and
  will not load in any other engine version.
- **Visual Studio 2022 or newer, with the MSVC 14.44 toolchain or a newer one** — needed by everyone,
  including Blueprint-only teams. The project has a C++ game module (`Source/Azureal_XR_V2`), which
  Unreal compiles the first time the project is opened and every time you package. An older
  toolchain is refused when Unreal links the framework.
- **Windows (Win64) only.** Android and Quest builds are not supported by this release; packaging for
  them will leave the framework out.

## Getting started

1. Clone this repository.
2. Open `Azureal_Framework.uproject`. The first time, Unreal reports that the `Azureal_XR_V2` module is
   missing and offers to rebuild it: choose **Yes**. That compiles the project's C++ module, which
   takes about a minute. Unreal asks again whenever the C++ code has changed since the last build —
   after pulling a teammate's C++ changes, for example, or after a Clean.

## Included plugins

| Plugin | Purpose |
|---|---|
| `AzurealXR` | The framework: VR pawn and locomotion, interaction components (Grab, Latch, Touch, Animation, …), in-world guidance UI, session reporting, and editor authoring tools. |
| `Azureal_CSM` | Chapter / step curriculum system built on the framework. |
| `AzurealForceExit` | Immediate application exit for PCVR. |
| `ManualVRPlugin` | Legacy session telemetry. Blueprint-only: its nodes cannot be called from C++. |

These live in `Plugins/`. Do not edit, move or delete them — they are the compiled framework, and a
change there cannot be rebuilt.

A **Clean** or **Rebuild** (from Visual Studio or the command line) deletes the framework's binaries
along with your own build output; the next build puts them back from the copy each plugin keeps in its
`Precompiled/` folder. Keep those folders. After a Clean, build once (or accept the editor's offer to
rebuild missing modules) before opening the editor.

## Building your own code

The project file is `Azureal_Framework.uproject`, but its C++ module, its build targets and the
packaged executable are named `Azureal_XR_V2`; Unreal does not require the two to match.

Write game code in `Source/Azureal_XR_V2`, or add your own plugin under `Plugins/`. To use the
framework from C++, add its module to your `Build.cs`:

```csharp
PublicDependencyModuleNames.AddRange(new string[] { "AzurealXR", "Azureal_CSM" });
```

The framework is precompiled for **Development**, **DebugGame** and **Shipping**, for both the editor
and the packaged game. The **Test** configuration is not supported.

## Version control

The repository is about 1.3 GB, most of it demo-scene textures; no file exceeds GitHub's 100 MB
limit, so Git LFS is not required.

The included `.gitignore` keeps the framework's precompiled binaries under version control while
ignoring your own build output. Keep its `!/Plugins/...` lines: without them git silently drops the
framework from every commit.
