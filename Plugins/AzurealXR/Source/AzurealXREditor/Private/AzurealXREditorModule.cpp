// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "Modules/ModuleManager.h"
#include "AzrFlowMenus.h"
#include "AzrHandScannerVisualizer.h"
#include "Azr_ExplainCustomization.h"
#include "Azr_HandScanner.h"
#include "Azr_NarrationSettings.h"
#include "ISettingsModule.h"
#include "PropertyEditorModule.h"
#include "UnrealEdGlobals.h"
#include "Editor/UnrealEdEngine.h"

/**
 * Editor-only module for AzurealXR authoring shortcuts.
 *
 * Adds the Azureal authoring tools: the interaction-flow menus and the hand scanner visualizer.
 */
class FAzurealXREditorModule : public IModuleInterface
{
	/**
	 * Where a settings section was registered, remembered so it can be taken down again without
	 * asking the settings object -- which is not safe to do once shutdown has started.
	 */
	struct FRegisteredSettingsSection
	{
		FName Container;
		FName Category;
		FName Name;
	};

	TArray<FRegisteredSettingsSection> RegisteredSettingsSections;

public:
	virtual void StartupModule() override
	{
		// One-click entry points: BP-editor toolbar dropdown + Content Browser submenu.
		FAzrFlowMenus::Register();

		// Generate Narration buttons: one on each Explain step, one for the whole component. These are
		// details-panel customizations rather than CallInEditor functions because CallInEditor buttons
		// are stripped for archetypes, and a component inside a Blueprint -- where these steps are
		// authored -- is an archetype.
		{
			FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));

			PropertyModule.RegisterCustomPropertyTypeLayout(
				TEXT("Azr_ExplainStep"),
				FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FAzr_ExplainStepCustomization::MakeInstance));

			PropertyModule.RegisterCustomClassLayout(
				TEXT("Azr_Explain"),
				FOnGetDetailCustomizationInstance::CreateStatic(&FAzr_ExplainCustomization::MakeInstance));

			PropertyModule.NotifyCustomizationModuleChanged();

			UE_LOG(LogTemp, Log, TEXT("[Azr Narration] Registered details customizations for Azr_Explain and Azr_ExplainStep."));
		}

		// Registered by hand rather than left to the engine's automatic sweep of UDeveloperSettings.
		// That sweep only re-runs while a settings window is already open (FSettingsEditorModule gates
		// it on there being a live settings editor), so whether the section is there depends on when
		// this module happened to load relative to the window being opened. Registering at startup
		// makes it unconditional.
		// Loaded, not merely asked for: at PostEngineInit the Settings module is not necessarily up yet,
		// and GetModulePtr would hand back null and skip the registration without a word.
		if (ISettingsModule* SettingsModule = FModuleManager::LoadModulePtr<ISettingsModule>(TEXT("Settings")))
		{
			// Two sections on purpose. The voice belongs to the project and is committed; the API key
			// belongs to the developer and must never be. Which window each lands in follows from that
			// choice, not the other way round -- UDeveloperSettings routes anything configured against
			// EditorPerProjectUserSettings to Editor Preferences.
			auto RegisterSection = [this, SettingsModule](UDeveloperSettings* Settings)
			{
				// Remembered now, while the object system is alive. Shutdown must not ask a
				// UDeveloperSettings anything -- see ShutdownModule.
				RegisteredSettingsSections.Add({
					Settings->GetContainerName(),
					Settings->GetCategoryName(),
					Settings->GetSectionName() });

				// Asked of the object itself so the section is identical to the one the engine's own
				// sweep would have made, rather than a second entry sitting beside it.
				SettingsModule->RegisterSettings(
					Settings->GetContainerName(),
					Settings->GetCategoryName(),
					Settings->GetSectionName(),
					Settings->GetSectionText(),
					Settings->GetSectionDescription(),
					Settings);

				// The container is logged because it is the field that decides which window this shows
				// up in, and its absence once cost an afternoon of looking in the wrong one.
				UE_LOG(LogTemp, Log, TEXT("[Azr Narration] Registered settings: %s / %s / %s"),
					*Settings->GetContainerName().ToString(),
					*Settings->GetCategoryName().ToString(),
					*Settings->GetSectionName().ToString());
			};

			RegisterSection(GetMutableDefault<UAzr_NarrationProjectSettings>());
			RegisterSection(GetMutableDefault<UAzr_NarrationSettings>());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[Azr Narration] Settings module unavailable; the narration settings pages will be missing."));
		}

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

		// Unregistered from names captured at startup, never by asking the settings objects again.
		// Module shutdown runs while the object system is being torn down, so GetDefault() there can
		// hand back null -- and dereferencing that crashed the editor on every clean exit. Nothing in
		// this function may touch a UObject.
		if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>(TEXT("Settings")))
		{
			for (const FRegisteredSettingsSection& Section : RegisteredSettingsSections)
			{
				SettingsModule->UnregisterSettings(Section.Container, Section.Category, Section.Name);
			}
		}
		RegisteredSettingsSections.Reset();

		if (FModuleManager::Get().IsModuleLoaded(TEXT("PropertyEditor")))
		{
			FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));
			PropertyModule.UnregisterCustomPropertyTypeLayout(TEXT("Azr_ExplainStep"));
			PropertyModule.UnregisterCustomClassLayout(TEXT("Azr_Explain"));
			PropertyModule.NotifyCustomizationModuleChanged();
		}

		if (GUnrealEd)
		{
			GUnrealEd->UnregisterComponentVisualizer(UAzr_HandScanner::StaticClass()->GetFName());
		}

	}

};

IMPLEMENT_MODULE(FAzurealXREditorModule, AzurealXREditor)
