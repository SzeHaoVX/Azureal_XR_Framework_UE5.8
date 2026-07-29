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

	// --- Optional widget component (the billboarded Tag / Explain / Action / Label panel) ---
	FString        WidgetComponentName; // exact component name to create ("Latch_Tag"). Empty = no widget.
	FString        WidgetClassPath;     // the UMG class the component displays.
	float          WidgetScale;         // uniform scale for the widget component (panels sit larger than tags).

	// Where the component stores the name of the widget it tethers to. Dot-separated reflective
	// paths ending in an FName property — the field differs per component, and Explain+ has two
	// (start and end step). An array member is addressed by its first element, created if missing.
	// e.g. "Grab.TetherSettings.TargetWidgetName", "WidgetName", "LabelPayloads.WidgetName".
	TArray<FString> WidgetNamePaths;

	// Components whose settings are split per mode show a dropdown that picks which block the
	// details panel displays (Azr_Grab's "Grab Mode"). Point the dropdown at the flow that was
	// stamped, so the panel opens on the settings that flow actually uses.
	// Display only — every block keeps its data, so the author can switch between them freely.
	FName ModePropertyName;  // NAME_None when the component has no such dropdown
	int32 ModeValue;         // enum entry to select
};

class FAzrInteractionFlows
{
public:
	/** The ordered registry of all authoring flows. */
	static const TArray<FAzrFlowDef>& All();

	/** Look up a flow by its stable Id (e.g. the F1 hotkey uses "GrabNormal"). */
	static const FAzrFlowDef* FindById(FName Id);
};
