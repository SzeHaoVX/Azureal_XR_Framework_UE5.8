// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * One authoring "flow": a component to add + the Enable/Disable calls and event nodes to stamp.
 * Adding a new interaction type is a single table row in AzrInteractionFlows.cpp — the toolbar
 * dropdown, the content-browser submenu, and the builder all read from this registry, so no new
 * UI or builder code is needed per type.
 *
 * A field left empty means "skip that piece": EnableFunction/DisableFunction == NAME_None skips the
 * enable/disable event+call; an empty EventDelegates list skips bound events (e.g. Attach Target,
 * which is a passive receptacle — the flow just adds the component).
 */
struct FAzrFlowDef
{
	FName          Id;                 // stable unique id (e.g. "GrabNormal")
	FString        Group;              // menu group ("Grab", "Latch", "Touch", "Attach Target")
	FString        Label;              // leaf label within a multi-entry group ("Normal", "Attach", …); empty for single-entry groups
	FString        ClassPath;          // component class, e.g. "/Script/AzurealXR.Azr_Grab"
	FName          ComponentVarName;   // component variable name to create/reuse ("Azr_Grab")
	FName          EnableFunction;     // UFUNCTION to call on Enable (or NAME_None)
	FName          DisableFunction;    // UFUNCTION to call on Disable (or NAME_None)
	FString        EnableEventLabel;   // custom-event node title wired to the enable call ("Enable Grab")
	FString        DisableEventLabel;  // custom-event node title wired to the disable call ("Disable Grab")
	TArray<FName>  EventDelegates;     // BlueprintAssignable delegates to add as component-bound events
	FString        Tooltip;            // menu tooltip

	// --- Optional tether Tag widget ---
	FString        TagWidgetName;      // base name for the Tag WidgetComponent ("GrabTag"). Empty = no widget.
	TArray<FName>  TetherStructPath;   // reflective path to the FAzr_TetherConfig, e.g. {"Grab","TetherSettings"}
	                                   // or {"TetherSettings"}. Its TargetWidgetName is pointed at the widget.
};

class FAzrInteractionFlows
{
public:
	/** The ordered registry of all authoring flows. */
	static const TArray<FAzrFlowDef>& All();

	/** Look up a flow by its stable Id (e.g. the F1 hotkey uses "GrabNormal"). */
	static const FAzrFlowDef* FindById(FName Id);
};
