---
name: unrealclaude-58-port
description: The UnrealClaude MCP plugin was ported UE 5.7→5.8; how to fix it if it regresses / fails to load
metadata: 
  node_type: memory
  type: project
  originSessionId: a1abb5c2-2ea6-458c-b89c-14fa5a41670e
  modified: 2026-07-27T08:53:48.399Z
---

`Plugins/UnrealClaude/` (the MCP editor bridge) was authored for UE 5.7 and ported to 5.8. **The only compile break:** UE 5.8 changed `FJsonObject::Values` keys from `FString` to `UE::FSharedString`. Fix = deref the key: `*Pair.Key` (→ `const TCHAR*` → `FString`), or `FString(*Pair.Key)` where an FString method is called (e.g. `.ToUpper()`). Applied in `MCPToolBase.h`, `AnimationBlueprintUtils.cpp`, and `MCPTool_{AnimBlueprintModify,BlueprintModify,Material,SetProperty}.cpp` (8 sites). `SetField` accepts the new key type, so it was left alone.

**If the editor warns UnrealClaude was built for "5.7.0" / a version mismatch:** its binaries are stale (copied from the 5.7 project). Delete `Plugins/UnrealClaude/{Binaries,Intermediate}`, then rebuild the editor target (`Build.bat Azureal_XR_V2Editor Win64 Development -Project=...`). The `.uplugin` `EngineVersion` is already `5.8.0`.

The plugin relies on 5 local patches baked into its DLL (`CustomEvent` / `VariableGet`-inherited / `ComponentBoundEvent` node types, Blueprint-class `add_variable`, and the `change_variable_type` op). If `blueprint_modify` errors "Unknown node type / Variable not found / Unknown operation", those regressed — see the skill's `build-via-unrealclaude.md`. Used by [[csm-build-from-document-workflow]].
