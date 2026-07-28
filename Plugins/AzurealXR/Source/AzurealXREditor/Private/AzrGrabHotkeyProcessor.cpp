// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrGrabHotkeyProcessor.h"
#include "AzrFlowBuilder.h"
#include "AzrInteractionFlows.h"

#include "Framework/Application/SlateApplication.h"
#include "Widgets/SWidget.h"
#include "GraphEditor.h"
#include "EdGraph/EdGraph.h"
#include "Engine/Blueprint.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "InputCoreTypes.h"

#include "AzrFlowNotify.h"

namespace
{
	/** Walk up from the keyboard-focused widget to an SGraphEditor and return the graph it is showing. */
	UEdGraph* ResolveFocusedGraph()
	{
		TSharedPtr<SWidget> Widget = FSlateApplication::Get().GetKeyboardFocusedWidget();
		while (Widget.IsValid())
		{
			const FName TypeName = Widget->GetType();
			if (TypeName == TEXT("SGraphEditor") || TypeName == TEXT("SGraphEditorImpl"))
			{
				TSharedPtr<SGraphEditor> GraphEditor = StaticCastSharedPtr<SGraphEditor>(Widget);
				return GraphEditor.IsValid() ? GraphEditor->GetCurrentGraph() : nullptr;
			}
			Widget = Widget->GetParentWidget();
		}
		return nullptr;
	}
}

bool FAzrGrabHotkeyProcessor::HandleKeyDownEvent(FSlateApplication& /*SlateApp*/, const FKeyEvent& InKeyEvent)
{
	if (InKeyEvent.GetKey() != EKeys::F1)
	{
		return false;
	}

	// Only act when the user is actually inside a Blueprint graph. Otherwise let
	// F1 do its normal thing (Help) by returning false.
	UEdGraph* Graph = ResolveFocusedGraph();
	if (!Graph)
	{
		return false;
	}

	UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraph(Graph);
	if (!Blueprint)
	{
		return false;
	}

	// Build once per physical press (ignore OS auto-repeat), but still consume the
	// key on repeat so Help never fires while F1 is held down in a graph.
	// F1 is the quick shortcut for the most common flow: Grab (Normal).
	if (!InKeyEvent.IsRepeat())
	{
		if (const FAzrFlowDef* GrabNormal = FAzrInteractionFlows::FindById(FName(TEXT("GrabNormal"))))
		{
			const FAzrFlowBuilder::FResult Result = FAzrFlowBuilder::BuildFlow(Blueprint, *GrabNormal);
			AzrFlow::ShowResultNotification(Result.Message, Result.bSuccess);
		}
	}

	return true;
}
