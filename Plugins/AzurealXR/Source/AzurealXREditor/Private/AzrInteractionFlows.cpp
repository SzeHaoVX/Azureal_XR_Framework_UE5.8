// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrInteractionFlows.h"

// Widget classes shipped with the plugin (Interaction/Explain_Action_Tag_Label).
#define AZR_TAG_WIDGET     TEXT("/AzurealXR/Interaction/Explain_Action_Tag_Label/Tag.Tag_C")
#define AZR_EXPLAIN_WIDGET TEXT("/AzurealXR/Interaction/Explain_Action_Tag_Label/Explain_Widget.Explain_Widget_C")
#define AZR_ACTION_WIDGET  TEXT("/AzurealXR/Interaction/Explain_Action_Tag_Label/Action_Widget.Action_Widget_C")
#define AZR_LABEL_WIDGET   TEXT("/AzurealXR/Interaction/Explain_Action_Tag_Label/Label.Label_C")

// Field order matches FAzrFlowDef:
//   Id, Group, Label, ClassPath, ComponentVarName,
//   EnableFunction, DisableFunction, EnableEventLabel, DisableEventLabel, EventDelegates, Tooltip,
//   WidgetComponentName, WidgetClassPath, WidgetScale, WidgetNamePaths, ModePropertyName, ModeValue
const TArray<FAzrFlowDef>& FAzrInteractionFlows::All()
{
	static const TArray<FAzrFlowDef> Flows =
	{
		// ---- Grab (one component, four modes; each mode has its OWN TetherSettings) ----
		{
			TEXT("GrabNormal"), TEXT("Grab"), TEXT("Normal"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrab"), TEXT("DisableGrab"),
			TEXT("Enable Grab"), TEXT("Disable Grab"),
			{ TEXT("OnGrabbed"), TEXT("OnReleased") },
			TEXT("Free pick-up grab + On Grabbed / On Released."),
			TEXT("Grab_Tag"), AZR_TAG_WIDGET, 0.05f,
			{ TEXT("Grab.TargetWidgetName") },
			TEXT("GrabMode"), 0
		},
		{
			TEXT("GrabAttach"), TEXT("Grab"), TEXT("Attach"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrabAttach"), TEXT("DisableGrabAttach"),
			TEXT("Enable Grab Attach"), TEXT("Disable Grab Attach"),
			{ TEXT("OnGrabAttached"), TEXT("OnGrabDetached") },
			TEXT("Grab that snaps into an Attach Target socket."),
			TEXT("Grab Attach_Tag"), AZR_TAG_WIDGET, 0.05f,
			{ TEXT("GrabAttach.TargetWidgetName") },
			TEXT("GrabMode"), 1
		},
		{
			TEXT("GrabRemove"), TEXT("Grab"), TEXT("Remove"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrabRemove"), TEXT("DisableGrabRemove"),
			TEXT("Enable Grab Remove"), TEXT("Disable Grab Remove"),
			{ TEXT("OnGrabRemoved") },
			TEXT("Grab-to-remove (e.g. take a part off)."),
			TEXT("Grab Remove_Tag"), AZR_TAG_WIDGET, 0.05f,
			{ TEXT("GrabRemove.TargetWidgetName") },
			TEXT("GrabMode"), 2
		},
		{
			TEXT("GrabTrigger"), TEXT("Grab"), TEXT("Trigger"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrabTrigger"), TEXT("DisableGrabTrigger"),
			TEXT("Enable Grab Trigger"), TEXT("Disable Grab Trigger"),
			{ TEXT("OnGrabTriggered"), TEXT("OnGrabTriggerReleased") },
			TEXT("Grab + squeeze trigger (analog value)."),
			TEXT("Grab Trigger_Tag"), AZR_TAG_WIDGET, 0.05f,
			{ TEXT("GrabTrigger.TargetWidgetName") },
			TEXT("GrabMode"), 3
		},

		// ---- Latch (1-DOF; mode Angular/Linear/Rotation is a component property) ----
		{
			TEXT("Latch"), TEXT("Latch"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Latch"), TEXT("Azr_Latch"),
			TEXT("EnableLatch"), TEXT("DisableLatch"),
			TEXT("Enable Latch"), TEXT("Disable Latch"),
			{ TEXT("OnValueChanged"), TEXT("OnLatched"), TEXT("OnLatchReleased") },
			TEXT("Lever / slider / valve (set the mode on the component)."),
			TEXT("Latch_Tag"), AZR_TAG_WIDGET, 0.05f,
			{ TEXT("TargetWidgetName") },
			NAME_None, -1
		},

		// ---- Touch (detection only) ----
		{
			TEXT("Touch"), TEXT("Touch"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Touch"), TEXT("Azr_Touch"),
			TEXT("EnableTouch"), TEXT("DisableTouch"),
			TEXT("Enable Touch"), TEXT("Disable Touch"),
			{ TEXT("OnTouched"), TEXT("OnUntouched") },
			TEXT("Hand-proximity detection + On Touched / On Untouched."),
			TEXT("Touch_Tag"), AZR_TAG_WIDGET, 0.05f,
			{ TEXT("TargetWidgetName") },
			NAME_None, -1
		},

		// ---- Attach Target (passive receptacle: no enable/disable/events) ----
		{
			TEXT("AttachTarget"), TEXT("Attach Target"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_AttachTarget"), TEXT("Azr_AttachTarget"),
			NAME_None, NAME_None,
			TEXT(""), TEXT(""),
			{},
			TEXT("Socket/receptacle for Grab-Attach."),
			TEXT("Attach Target_Tag"), AZR_TAG_WIDGET, 0.05f,
			{ TEXT("TargetWidgetName") },
			NAME_None, -1
		},

		// ---- Guidance UI (Explain / Explain+ share the one Azr_Explain component) ----
		{
			TEXT("Explain"), TEXT("Explain"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Explain"), TEXT("Azr_Explain"),
			TEXT("EnableExplain"), TEXT("DisableExplain"),
			TEXT("Enable Explain"), TEXT("Disable Explain"),
			{ TEXT("OnExplainStarted"), TEXT("OnExplainCompleted") },
			TEXT("In-world explanation panel. On Explain Started / Completed."),
			TEXT("Explain_Widget"), AZR_EXPLAIN_WIDGET, 0.1f,
			{ TEXT("SingleExplainStep.WidgetName") },
			NAME_None, -1
		},
		{
			TEXT("ExplainPlus"), TEXT("Explain+"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Explain"), TEXT("Azr_Explain"),
			TEXT("EnableExplainPlus"), TEXT("DisableExplain"),
			TEXT("Enable Explain Plus"), TEXT("Disable Explain"),
			{ TEXT("OnExplainPlusStarted"), TEXT("OnExplainPlusCompleted") },
			TEXT("Explanation with extra interaction. On Explain Plus Started / Completed."),
			TEXT("Explain Plus_Widget"), AZR_EXPLAIN_WIDGET, 0.1f,
			// The chain's start and end steps both point at the same panel; MiddleSteps are authored.
			{ TEXT("StartStep.WidgetName"), TEXT("EndStep.WidgetName") },
			NAME_None, -1
		},
		{
			TEXT("Action"), TEXT("Action"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Action"), TEXT("Azr_Action"),
			TEXT("EnableAction"), TEXT("DisableAction"),
			TEXT("Enable Action"), TEXT("Disable Action"),
			{ TEXT("OnActionCompleted"), TEXT("OnStartButtonPressed"), TEXT("OnCompletedButtonPressed") },
			TEXT("Action panel with progress + Start/Completed buttons."),
			TEXT("Action_Widget"), AZR_ACTION_WIDGET, 0.1f,
			{ TEXT("WidgetName") },
			NAME_None, -1
		},
		{
			TEXT("Label"), TEXT("Label"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Label"), TEXT("Azr_Label"),
			TEXT("EnableLabel"), TEXT("DisableLabel"),
			TEXT("Enable Label"), TEXT("Disable Label"),
			{},
			TEXT("Floating world-space label (enable/disable only, no events)."),
			TEXT("Label_Widget"), AZR_LABEL_WIDGET, 0.05f,
			// Label keeps its widget name per payload entry; entry 0 is created if the array is empty.
			{ TEXT("LabelPayloads.WidgetName") },
			NAME_None, -1
		},
	};
	return Flows;
}

const FAzrFlowDef* FAzrInteractionFlows::FindById(FName Id)
{
	for (const FAzrFlowDef& Flow : All())
	{
		if (Flow.Id == Id)
		{
			return &Flow;
		}
	}
	return nullptr;
}
