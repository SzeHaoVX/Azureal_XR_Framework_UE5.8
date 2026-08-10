// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "IPropertyTypeCustomization.h"

class FReply;
class IPropertyHandle;

/**
 * Puts a Generate Narration button on every Explain step, next to the text it narrates.
 *
 * A details-panel customization rather than a CallInEditor function on the component, because
 * CallInEditor buttons are stripped for archetypes -- and a component sitting in a Blueprint, which is
 * where these steps are actually authored, is exactly that. The button would simply never appear.
 */
class FAzr_ExplainStepCustomization : public IPropertyTypeCustomization
{
public:
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, class IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils) override;

private:
	TSharedPtr<IPropertyHandle> StepHandle;

	FReply OnGenerateClicked();
};

/**
 * Adds one button that generates every step on the component that needs it.
 *
 * This is the one a developer normally uses: write the sentences, click once, and the audio and the
 * timings are filled in for the whole component. Steps whose text has not changed since they were last
 * generated are skipped, so it costs nothing to click again.
 */
class FAzr_ExplainCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	/**
	 * Handles are kept rather than the layout builder: a details panel can be rebuilt between the row
	 * being made and the button being pressed, and the handles stay valid where the builder does not.
	 */
	TArray<TSharedPtr<IPropertyHandle>> StepHandles;
	TSharedPtr<IPropertyHandle> MiddleStepsArrayHandle;

	FReply OnGenerateAllClicked();
};
