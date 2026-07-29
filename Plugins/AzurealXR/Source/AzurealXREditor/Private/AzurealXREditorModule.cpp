// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "Modules/ModuleManager.h"
#include "AzrFlowMenus.h"
#include "AzrHandScannerVisualizer.h"
#include "Azr_HandScanner.h"
#include "UnrealEdGlobals.h"
#include "Editor/UnrealEdEngine.h"

/**
 * Editor-only module for AzurealXR authoring shortcuts.
 *
 * Adds the Azureal authoring tools: the interaction-flow menus and the hand scanner visualizer.
 */
class FAzurealXREditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
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

	}

	virtual void ShutdownModule() override
	{
		FAzrFlowMenus::Unregister();

		if (GUnrealEd)
		{
			GUnrealEd->UnregisterComponentVisualizer(UAzr_HandScanner::StaticClass()->GetFName());
		}

	}

};

IMPLEMENT_MODULE(FAzurealXREditorModule, AzurealXREditor)
