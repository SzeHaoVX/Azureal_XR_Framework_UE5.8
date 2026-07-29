// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrTetherConfigCustomization.h"

#include "PropertyHandle.h"
#include "DetailWidgetRow.h"
#include "IDetailChildrenBuilder.h"

namespace
{
	const TCHAR* GTargetWidgetNameProperty = TEXT("TargetWidgetName");

	// Components that resolve their widget through their own Widget Name field and never read
	// TargetWidgetName (verified: zero reads in Azr_Explain.cpp / Azr_Action.cpp).
	const TCHAR* GIgnoringClassPaths[] =
	{
		TEXT("/Script/AzurealXR.Azr_Explain"),
		TEXT("/Script/AzurealXR.Azr_Action"),
		TEXT("/Script/AzurealXR.Azr_Label"),
	};

	/** True when the struct being drawn belongs to a component that ignores TargetWidgetName. */
	bool OwnerIgnoresTargetWidgetName(TSharedRef<IPropertyHandle> PropertyHandle)
	{
		TArray<UObject*> OuterObjects;
		PropertyHandle->GetOuterObjects(OuterObjects);

		for (const UObject* Outer : OuterObjects)
		{
			if (!Outer) continue;

			for (const TCHAR* ClassPath : GIgnoringClassPaths)
			{
				const UClass* IgnoringClass = FindObject<UClass>(nullptr, ClassPath);
				if (IgnoringClass && Outer->IsA(IgnoringClass))
				{
					return true;
				}
			}
		}
		return false;
	}
}

TSharedRef<IPropertyTypeCustomization> FAzrTetherConfigCustomization::MakeInstance()
{
	return MakeShareable(new FAzrTetherConfigCustomization());
}

void FAzrTetherConfigCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& /*CustomizationUtils*/)
{
	// Standard header — the struct keeps its normal name row and expander.
	HeaderRow
		.NameContent()
		[
			PropertyHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		[
			PropertyHandle->CreatePropertyValueWidget()
		];
}

void FAzrTetherConfigCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& /*CustomizationUtils*/)
{
	const bool bHideTargetWidgetName = OwnerIgnoresTargetWidgetName(PropertyHandle);

	uint32 NumChildren = 0;
	PropertyHandle->GetNumChildren(NumChildren);

	for (uint32 Index = 0; Index < NumChildren; ++Index)
	{
		TSharedPtr<IPropertyHandle> ChildHandle = PropertyHandle->GetChildHandle(Index);
		if (!ChildHandle.IsValid())
		{
			continue;
		}

		if (bHideTargetWidgetName)
		{
			const FProperty* ChildProperty = ChildHandle->GetProperty();
			if (ChildProperty && ChildProperty->GetFName() == GTargetWidgetNameProperty)
			{
				continue; // dead field for this component — don't show it
			}
		}

		ChildBuilder.AddProperty(ChildHandle.ToSharedRef());
	}
}
