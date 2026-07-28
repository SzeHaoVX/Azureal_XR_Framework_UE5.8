// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * One-click editor entry points for the Azureal interaction flows (method 3):
 *   - a single "Azureal" combo/dropdown button on the Blueprint editor toolbar, and
 *   - an "Add Azureal Interaction" submenu when right-clicking a Blueprint in the Content Browser.
 * Both menus are generated from FAzrInteractionFlows::All() and route each choice through
 * FAzrFlowBuilder::BuildFlow — so adding a new interaction type never touches this file.
 */
class FAzrFlowMenus
{
public:
	static void Register();
	static void Unregister();
};
