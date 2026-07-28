// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class UBlueprint;
struct FAzrFlowDef;

/**
 * Generic authoring-flow builder. Given an FAzrFlowDef it ensures the component exists on the
 * Blueprint, then (for whatever the def specifies) stamps Enable/Disable custom-events → calls
 * (Target fed by a component VariableGet) and On-* component-bound events, and compiles.
 * Idempotent: only missing pieces are added. Shared by the F1 hotkey, the toolbar dropdown, and
 * the content-browser submenu.
 */
class FAzrFlowBuilder
{
public:
	struct FResult
	{
		bool    bSuccess = false;
		bool    bComponentAdded = false;
		int32   NodesAdded = 0;
		FString Message;
	};

	static FResult BuildFlow(UBlueprint* Blueprint, const FAzrFlowDef& Def);
};
