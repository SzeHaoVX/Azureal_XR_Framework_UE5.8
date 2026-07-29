// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrFlowMenus.h"
#include "AzrFlowBuilder.h"
#include "AzrInteractionFlows.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"

#include "ToolMenus.h"
#include "ToolMenuSection.h"
#include "ToolMenuEntry.h"
#include "ToolMenuDelegates.h"
#include "ToolMenuContext.h"

#include "BlueprintEditorContext.h"                 // UBlueprintEditorToolMenuContext
#include "BlueprintEditor.h"                        // FBlueprintEditor
#include "Toolkits/AssetEditorToolkitMenuContext.h" // UAssetEditorToolkitMenuContext
#include "Toolkits/AssetEditorToolkit.h"

#include "ContentBrowserMenuContexts.h"             // UContentBrowserAssetContextMenuContext, EIncludeSubclasses
#include "AssetRegistry/AssetData.h"

#include "Engine/Blueprint.h"
#include "Styling/AppStyle.h"
#include "Textures/SlateIcon.h"
#include "Framework/Commands/UIAction.h"            // FExecuteAction

#define LOCTEXT_NAMESPACE "AzrFlow"

namespace
{
	const FName GAzrMenuOwner(TEXT("AzurealXREditor_Flows"));
	const TCHAR* GAzrIcon = TEXT("GraphEditor.EventGraph_16x");
	FDelegateHandle GStartupCallbackHandle;

	/** Editor toast reporting what a flow added, or why it could not. */
	void ShowResultNotification(const FString& Message, bool bSuccess)
	{
		FNotificationInfo Info(FText::FromString(Message));
		Info.ExpireDuration = 4.5f;
		Info.bUseSuccessFailIcons = true;
		TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
		if (Item.IsValid())
		{
			Item->SetCompletionState(bSuccess ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail);
		}
	}

	FSlateIcon AzrIcon()
	{
		return FSlateIcon(FAppStyle::GetAppStyleSetName(), GAzrIcon);
	}

	/** Resolve the Blueprint a toolbar/menu action was invoked on, from the tool-menu context. */
	UBlueprint* ResolveBlueprintFromMenuContext(const FToolMenuContext& Context)
	{
		if (const UBlueprintEditorToolMenuContext* BpCtx = Context.FindContext<UBlueprintEditorToolMenuContext>())
		{
			if (UBlueprint* Blueprint = BpCtx->GetBlueprintObj())
			{
				return Blueprint;
			}
		}
		if (const UAssetEditorToolkitMenuContext* ToolkitCtx = Context.FindContext<UAssetEditorToolkitMenuContext>())
		{
			if (TSharedPtr<FAssetEditorToolkit> Toolkit = ToolkitCtx->Toolkit.Pin())
			{
				if (Toolkit->GetToolkitFName() == FName(TEXT("BlueprintEditor")))
				{
					TSharedPtr<FBlueprintEditor> BpEditor = StaticCastSharedPtr<FBlueprintEditor>(Toolkit);
					return BpEditor.IsValid() ? BpEditor->GetBlueprintObj() : nullptr;
				}
			}
		}
		return nullptr;
	}

	void RunAndNotify(UBlueprint* Blueprint, const FAzrFlowDef& Def)
	{
		const FAzrFlowBuilder::FResult Result = FAzrFlowBuilder::BuildFlow(Blueprint, Def);
		ShowResultNotification(Result.Message, Result.bSuccess);
	}

	using FLeafActionFactory = TFunction<FToolUIActionChoice(const FAzrFlowDef&)>;

	/**
	 * Build the grouped Grab▸ / Latch / Touch / Attach Target structure into `Menu`, one section.
	 * Groups with a single flow are direct entries; multi-flow groups become submenus.
	 * `MakeLeafAction` supplies each leaf's click action (differs for toolbar vs content browser).
	 */
	void BuildFlowMenu(UToolMenu* Menu, FLeafActionFactory MakeLeafAction)
	{
		FToolMenuSection& Section = Menu->FindOrAddSection(TEXT("AzurealFlows"), LOCTEXT("FlowsHeading", "Azureal Interaction"));
		const TArray<FAzrFlowDef>& Flows = FAzrInteractionFlows::All();

		TArray<FString> Groups;
		for (const FAzrFlowDef& Flow : Flows)
		{
			Groups.AddUnique(Flow.Group);
		}

		for (const FString& Group : Groups)
		{
			TArray<FAzrFlowDef> GroupFlows;
			for (const FAzrFlowDef& Flow : Flows)
			{
				if (Flow.Group == Group)
				{
					GroupFlows.Add(Flow);
				}
			}

			if (GroupFlows.Num() == 1)
			{
				const FAzrFlowDef& Def = GroupFlows[0];
				Section.AddMenuEntry(
					Def.Id,
					FText::FromString(Def.Group),
					FText::FromString(Def.Tooltip),
					AzrIcon(),
					MakeLeafAction(Def));
			}
			else
			{
				Section.AddSubMenu(
					FName(*Group),
					FText::FromString(Group),
					LOCTEXT("GroupTip", "Add an Azureal interaction variant to this Blueprint."),
					FNewToolMenuChoice(FNewToolMenuDelegate::CreateLambda([GroupFlows, MakeLeafAction](UToolMenu* SubMenu)
					{
						FToolMenuSection& SubSection = SubMenu->FindOrAddSection(TEXT("Variants"), FText::GetEmpty());
						for (const FAzrFlowDef& Def : GroupFlows)
						{
							SubSection.AddMenuEntry(
								Def.Id,
								FText::FromString(Def.Label),
								FText::FromString(Def.Tooltip),
								AzrIcon(),
								MakeLeafAction(Def));
						}
					})),
					/*bOpenSubMenuOnClick=*/false,
					AzrIcon());
			}
		}
	}

	// ---- Blueprint editor toolbar: single "Azureal" combo button ----
	void PopulateToolbarDropdown(UToolMenu* Menu)
	{
		BuildFlowMenu(Menu, [](const FAzrFlowDef& Def) -> FToolUIActionChoice
		{
			return FToolUIActionChoice(FToolMenuExecuteAction::CreateLambda([Def](const FToolMenuContext& Context)
			{
				if (UBlueprint* Blueprint = ResolveBlueprintFromMenuContext(Context))
				{
					RunAndNotify(Blueprint, Def);
				}
				else
				{
					ShowResultNotification(TEXT("Open this from a Blueprint editor."), false);
				}
			}));
		});
	}

	void RegisterBlueprintToolbarButton()
	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu(TEXT("AssetEditor.BlueprintEditor.ToolBar"));
		if (!ToolbarMenu)
		{
			return;
		}

		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection(TEXT("AzurealXR"));
		Section.AddEntry(FToolMenuEntry::InitComboButton(
			TEXT("AzurealFlows"),
			FToolUIActionChoice(),
			FNewToolMenuChoice(FNewToolMenuDelegate::CreateStatic(&PopulateToolbarDropdown)),
			LOCTEXT("AzurealLabel", "Azureal"),
			LOCTEXT("AzurealTip", "Add an Azureal interaction flow (Grab, Latch, Touch, Attach Target) to this Blueprint."),
			AzrIcon()));
	}

	// ---- Content Browser: "Add Azureal Interaction" submenu on Blueprint assets ----
	void RegisterContentBrowserEntry()
	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu(TEXT("ContentBrowser.AssetContextMenu"));
		if (!Menu)
		{
			return;
		}

		FToolMenuSection& Section = Menu->FindOrAddSection(TEXT("GetAssetActions"));
		Section.AddDynamicEntry(TEXT("AzurealFlows"), FNewToolMenuSectionDelegate::CreateLambda([](FToolMenuSection& InSection)
		{
			const UContentBrowserAssetContextMenuContext* Ctx = InSection.FindContext<UContentBrowserAssetContextMenuContext>();
			if (!Ctx)
			{
				return;
			}

			// Exactly class "Blueprint" (Actor/Object BPs) — skip Widget/Anim BP subclasses (no asset load).
			const TArray<FAssetData> BlueprintAssets = Ctx->GetSelectedAssetsOfType(UBlueprint::StaticClass(), EIncludeSubclasses::No);
			if (BlueprintAssets.Num() == 0)
			{
				return;
			}

			InSection.AddSubMenu(
				TEXT("AddAzurealInteraction"),
				LOCTEXT("AddAzurealCB", "Add Azureal Interaction"),
				LOCTEXT("AddAzurealCBTip", "Add an Azureal interaction flow to the selected Blueprint(s)."),
				FNewToolMenuChoice(FNewToolMenuDelegate::CreateLambda([BlueprintAssets](UToolMenu* SubMenu)
				{
					BuildFlowMenu(SubMenu, [BlueprintAssets](const FAzrFlowDef& Def) -> FToolUIActionChoice
					{
						return FToolUIActionChoice(FExecuteAction::CreateLambda([BlueprintAssets, Def]()
						{
							// Load happens only on click.
							for (const FAssetData& AssetData : BlueprintAssets)
							{
								if (UBlueprint* Blueprint = Cast<UBlueprint>(AssetData.GetAsset()))
								{
									RunAndNotify(Blueprint, Def);
								}
							}
						}));
					});
				})),
				/*bOpenSubMenuOnClick=*/false,
				AzrIcon());
		}));
	}

	void RegisterMenus()
	{
		FToolMenuOwnerScoped OwnerScope(GAzrMenuOwner);
		RegisterBlueprintToolbarButton();
		RegisterContentBrowserEntry();
	}
}

void FAzrFlowMenus::Register()
{
	// UToolMenus::Get() can be null in StartupModule — defer until menus are ready.
	GStartupCallbackHandle = UToolMenus::RegisterStartupCallback(
		FSimpleMulticastDelegate::FDelegate::CreateStatic(&RegisterMenus));
}

void FAzrFlowMenus::Unregister()
{
	UToolMenus::UnRegisterStartupCallback(GStartupCallbackHandle);
	UToolMenus::UnregisterOwner(GAzrMenuOwner);
}

#undef LOCTEXT_NAMESPACE
