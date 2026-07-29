// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "Modules/ModuleManager.h"
#include "Framework/Application/SlateApplication.h"
#include "AzrGrabHotkeyProcessor.h"
#include "AzrFlowMenus.h"
#include "AzrHandScannerVisualizer.h"
#include "AzrTetherConfigCustomization.h"
#include "Azr_HandScanner.h"
#include "UnrealEdGlobals.h"
#include "Editor/UnrealEdEngine.h"
#include "PropertyEditorModule.h"

/**
 * Editor-only module for AzurealXR authoring shortcuts.
 *
 * Registers a Slate input pre-processor that reclaims F1 *only* while keyboard
 * focus is inside a Blueprint graph, and uses it to stamp the standard Azr_Grab
 * interaction boilerplate (component + Enable/Disable Grab + On Grabbed/On Released)
 * onto the open Blueprint. F1 continues to open Help everywhere else.
 */
class FAzurealXREditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
		if (FSlateApplication::IsInitialized())
		{
			InputProcessor = MakeShared<FAzrGrabHotkeyProcessor>();
			// Editor bucket: ahead of Game input, after core engine input.
			FSlateApplication::Get().RegisterInputPreProcessor(InputProcessor, EInputPreProcessorType::Editor);
		}

		// One-click entry points: BP-editor toolbar dropdown + Content Browser submenu.
		FAzrFlowMenus::Register();

		// Draw the hand scanner's runtime-only capsules in the editor viewport so their sizes and
		// the distance-grab aim can be tuned visually instead of by trial-and-error in PIE.
		if (GUnrealEd)
		{
			TSharedPtr<FComponentVisualizer> Visualizer = MakeShareable(new FAzrHandScannerVisualizer());
			GUnrealEd->RegisterComponentVisualizer(UAzr_HandScanner::StaticClass()->GetFName(), Visualizer);
			Visualizer->OnRegister();
		}

		// Hide FAzr_TetherConfig's TargetWidgetName on the components that ignore it.
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomPropertyTypeLayout(
			TEXT("Azr_TetherConfig"),
			FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAzrTetherConfigCustomization::MakeInstance));
		PropertyModule.NotifyCustomizationModuleChanged();
	}

	virtual void ShutdownModule() override
	{
		if (InputProcessor.IsValid() && FSlateApplication::IsInitialized())
		{
			FSlateApplication::Get().UnregisterInputPreProcessor(InputProcessor);
		}
		InputProcessor.Reset();

		FAzrFlowMenus::Unregister();

		if (GUnrealEd)
		{
			GUnrealEd->UnregisterComponentVisualizer(UAzr_HandScanner::StaticClass()->GetFName());
		}

		if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
		{
			FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
			PropertyModule.UnregisterCustomPropertyTypeLayout(TEXT("Azr_TetherConfig"));
			PropertyModule.NotifyCustomizationModuleChanged();
		}
	}

private:
	TSharedPtr<FAzrGrabHotkeyProcessor> InputProcessor;
};

IMPLEMENT_MODULE(FAzurealXREditorModule, AzurealXREditor)
