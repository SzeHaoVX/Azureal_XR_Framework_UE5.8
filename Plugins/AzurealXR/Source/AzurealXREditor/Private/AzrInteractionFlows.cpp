// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrInteractionFlows.h"

// Field order matches FAzrFlowDef:
//   Id, Group, Label, ClassPath, ComponentVarName,
//   EnableFunction, DisableFunction, EnableEventLabel, DisableEventLabel, EventDelegates, Tooltip,
//   TagWidgetName, TetherStructPath
const TArray<FAzrFlowDef>& FAzrInteractionFlows::All()
{
	static const TArray<FAzrFlowDef> Flows =
	{
		// ---- Grab (one component, four modes; each mode has its OWN TetherSettings config) ----
		{
			TEXT("GrabNormal"), TEXT("Grab"), TEXT("Normal"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrab"), TEXT("DisableGrab"),
			TEXT("Enable Grab"), TEXT("Disable Grab"),
			{ TEXT("OnGrabbed"), TEXT("OnReleased") },
			TEXT("Free pick-up grab + On Grabbed / On Released."),
			TEXT("GrabTag"), { TEXT("Grab"), TEXT("TetherSettings") }
		},
		{
			TEXT("GrabAttach"), TEXT("Grab"), TEXT("Attach"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrabAttach"), TEXT("DisableGrabAttach"),
			TEXT("Enable Grab Attach"), TEXT("Disable Grab Attach"),
			{ TEXT("OnGrabAttached"), TEXT("OnGrabDetached") },
			TEXT("Grab that snaps into an Attach Target socket."),
			TEXT("GrabTag"), { TEXT("GrabAttach"), TEXT("TetherSettings") }
		},
		{
			TEXT("GrabRemove"), TEXT("Grab"), TEXT("Remove"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrabRemove"), TEXT("DisableGrabRemove"),
			TEXT("Enable Grab Remove"), TEXT("Disable Grab Remove"),
			{ TEXT("OnGrabRemoved") },
			TEXT("Grab-to-remove (e.g. take a part off)."),
			TEXT("GrabTag"), { TEXT("GrabRemove"), TEXT("TetherSettings") }
		},
		{
			TEXT("GrabTrigger"), TEXT("Grab"), TEXT("Trigger"),
			TEXT("/Script/AzurealXR.Azr_Grab"), TEXT("Azr_Grab"),
			TEXT("EnableGrabTrigger"), TEXT("DisableGrabTrigger"),
			TEXT("Enable Grab Trigger"), TEXT("Disable Grab Trigger"),
			{ TEXT("OnGrabTriggered"), TEXT("OnGrabTriggerReleased") },
			TEXT("Grab + squeeze trigger (analog value)."),
			TEXT("GrabTag"), { TEXT("GrabTrigger"), TEXT("TetherSettings") }
		},

		// ---- Latch (1-DOF; mode Angular/Linear/Rotation is a component property) ----
		{
			TEXT("Latch"), TEXT("Latch"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Latch"), TEXT("Azr_Latch"),
			TEXT("EnableLatch"), TEXT("DisableLatch"),
			TEXT("Enable Latch"), TEXT("Disable Latch"),
			{ TEXT("OnValueChanged"), TEXT("OnLatched"), TEXT("OnLatchReleased") },
			TEXT("Lever / slider / valve (set the mode on the component)."),
			TEXT("LatchTag"), { TEXT("TetherSettings") }
		},

		// ---- Touch (detection only) ----
		{
			TEXT("Touch"), TEXT("Touch"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Touch"), TEXT("Azr_Touch"),
			TEXT("EnableTouch"), TEXT("DisableTouch"),
			TEXT("Enable Touch"), TEXT("Disable Touch"),
			{ TEXT("OnTouched"), TEXT("OnUntouched") },
			TEXT("Hand-proximity detection + On Touched / On Untouched."),
			TEXT("TouchTag"), { TEXT("TetherSettings") }
		},

		// ---- Attach Target (passive receptacle: no enable/disable/events — component + tag widget) ----
		{
			TEXT("AttachTarget"), TEXT("Attach Target"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_AttachTarget"), TEXT("Azr_AttachTarget"),
			NAME_None, NAME_None,
			TEXT(""), TEXT(""),
			{},
			TEXT("Socket/receptacle for Grab-Attach."),
			TEXT("AttachTargetTag"), { TEXT("TetherSettings") }
		},

		// ---- Guidance UI (Explain / Explain+ share the one Azr_Explain component; no tag widget) ----
		{
			TEXT("Explain"), TEXT("Explain"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Explain"), TEXT("Azr_Explain"),
			TEXT("EnableExplain"), TEXT("DisableExplain"),
			TEXT("Enable Explain"), TEXT("Disable Explain"),
			{ TEXT("OnExplainStarted"), TEXT("OnExplainCompleted") },
			TEXT("In-world explanation panel. On Explain Started / Completed."),
			TEXT(""), {}
		},
		{
			TEXT("ExplainPlus"), TEXT("Explain+"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Explain"), TEXT("Azr_Explain"),
			TEXT("EnableExplainPlus"), TEXT("DisableExplain"),
			TEXT("Enable Explain Plus"), TEXT("Disable Explain"),
			{ TEXT("OnExplainPlusStarted"), TEXT("OnExplainPlusCompleted") },
			TEXT("Explanation with extra interaction. On Explain Plus Started / Completed."),
			TEXT(""), {}
		},
		{
			TEXT("Action"), TEXT("Action"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Action"), TEXT("Azr_Action"),
			TEXT("EnableAction"), TEXT("DisableAction"),
			TEXT("Enable Action"), TEXT("Disable Action"),
			{ TEXT("OnActionCompleted"), TEXT("OnStartButtonPressed"), TEXT("OnCompletedButtonPressed") },
			TEXT("Action panel with progress + Start/Completed buttons."),
			TEXT(""), {}
		},
		{
			TEXT("Label"), TEXT("Label"), TEXT(""),
			TEXT("/Script/AzurealXR.Azr_Label"), TEXT("Azr_Label"),
			TEXT("EnableLabel"), TEXT("DisableLabel"),
			TEXT("Enable Label"), TEXT("Disable Label"),
			{},
			TEXT("Floating world-space label (enable/disable only, no events)."),
			TEXT(""), {}
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
