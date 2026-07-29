// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IPropertyTypeCustomization.h"

/**
 * Details customization for FAzr_TetherConfig.
 *
 * The struct is shared by every tethered component, but its TargetWidgetName is only read by Grab,
 * Latch, Touch and Attach Target. Explain, Explain+ and Action resolve their widget through their
 * own Widget Name field and ignore this one entirely, so showing it there is misleading — two
 * fields that look like they do the same thing, one of which does nothing.
 *
 * Customizing the STRUCT (rather than each owning class) hides it at every nesting depth
 * automatically, including the copies inside Explain's step structs and its MiddleSteps array.
 * Display only: nothing is removed from the struct, and the components that use the field keep it.
 */
class FAzrTetherConfigCustomization : public IPropertyTypeCustomization
{
public:
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, class IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
};
