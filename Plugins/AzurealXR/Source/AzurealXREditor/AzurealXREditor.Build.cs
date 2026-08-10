using UnrealBuildTool;

public class AzurealXREditor : ModuleRules
{
    public AzurealXREditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
            }
            );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "InputCore",
                "Slate",
                "SlateCore",
                "UMG",                   // UWidgetComponent + UUserWidget (Tag tether widget)
                "UnrealEd",              // FKismetEditorUtilities, FBlueprintEditorUtils, FScopedTransaction, SGraphEditor header, UAssetEditorToolkitMenuContext
                "Kismet",                // FBlueprintEditor, UBlueprintEditorToolMenuContext
                "KismetCompiler",
                "BlueprintGraph",        // FGraphNodeCreator, UK2Node_*, UEdGraphSchema_K2
                "SubobjectDataInterface",// USubobjectDataSubsystem (component add)
                "ToolMenus",             // UToolMenus toolbar button + content-browser entry
                "ContentBrowser",        // UContentBrowserAssetContextMenuContext
                "PropertyEditor",        // details-panel Generate Narration buttons
                "AssetTools",            // IAssetTools::ImportAssetTasks (generated narration -> USoundWave)
                "DeveloperSettings",     // UAzr_NarrationSettings (per-user ElevenLabs config)
                "Settings",              // ISettingsModule (this module loads too late for the automatic sweep)
                "HTTP",                  // ElevenLabs text-to-speech with timestamps
                "Json",                  // parsing the alignment data those timestamps arrive in
                "AzurealXR"              // UAzr_HandScanner (component visualizer), UAzr_Explain (narration buttons)
            }
            );
    }
}
