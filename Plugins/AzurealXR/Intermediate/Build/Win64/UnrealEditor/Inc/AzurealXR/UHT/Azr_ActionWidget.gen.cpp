// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_ActionWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_ActionWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UButton(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UProgressBar(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UTextBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ActionWidget(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ActionMode(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ActionWidgetState(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnActionExecute__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ActionWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAzr_ActionMode ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_ActionMode_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ActionMode>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_ActionMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Animation.DisplayName", "Animation Sequence" },
		{ "Animation.Name", "EAzr_ActionMode::Animation" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines the behavior and text of the Action UI\n" },
#endif
		{ "Custom.DisplayName", "Custom Timer (Blueprint)" },
		{ "Custom.Name", "EAzr_ActionMode::Custom" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
		{ "Teleport.DisplayName", "Teleport" },
		{ "Teleport.Name", "EAzr_ActionMode::Teleport" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the behavior and text of the Action UI" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_ActionMode::Teleport", (int64)EAzr_ActionMode::Teleport },
		{ "EAzr_ActionMode::Animation", (int64)EAzr_ActionMode::Animation },
		{ "EAzr_ActionMode::Custom", (int64)EAzr_ActionMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_ActionMode",
	"EAzr_ActionMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_ActionMode;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ActionMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_ActionMode.OuterSingleton)
		{
			ZRIE_EAzr_ActionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_ActionMode, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_ActionMode"));
		}
		return ZRIE_EAzr_ActionMode.OuterSingleton;
	}
	if (!ZRIE_EAzr_ActionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_ActionMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_ActionMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_ActionMode *************************************************************

// ********** Begin Enum EAzr_ActionWidgetState ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_ActionWidgetState_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ActionWidgetState>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_ActionWidgetState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks the current visual state of the widget\n" },
#endif
		{ "Completed.Comment", "// Action is running, button is locked (\"ACTION ON GOING...\")\n" },
		{ "Completed.Name", "EAzr_ActionWidgetState::Completed" },
		{ "Completed.ToolTip", "Action is running, button is locked (\"ACTION ON GOING...\")" },
		{ "Idle.Name", "EAzr_ActionWidgetState::Idle" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
		{ "Processing.Comment", "// Ready to be clicked (\"START\" or \"TELEPORT\")\n" },
		{ "Processing.Name", "EAzr_ActionWidgetState::Processing" },
		{ "Processing.ToolTip", "Ready to be clicked (\"START\" or \"TELEPORT\")" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks the current visual state of the widget" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_ActionWidgetState::Idle", (int64)EAzr_ActionWidgetState::Idle },
		{ "EAzr_ActionWidgetState::Processing", (int64)EAzr_ActionWidgetState::Processing },
		{ "EAzr_ActionWidgetState::Completed", (int64)EAzr_ActionWidgetState::Completed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_ActionWidgetState",
	"EAzr_ActionWidgetState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_ActionWidgetState;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ActionWidgetState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_ActionWidgetState.OuterSingleton)
		{
			ZRIE_EAzr_ActionWidgetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_ActionWidgetState, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_ActionWidgetState"));
		}
		return ZRIE_EAzr_ActionWidgetState.OuterSingleton;
	}
	if (!ZRIE_EAzr_ActionWidgetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_ActionWidgetState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_ActionWidgetState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_ActionWidgetState ******************************************************

// ********** Begin Delegate FOnActionExecute ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnActionExecute__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnActionExecute constinit property declarations **********************
// ********** End Delegate FOnActionExecute constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnActionExecute__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnActionExecute__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnActionExecute ********************************************************

// ********** Begin Class UAzr_ActionWidget Function InitializeAction ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_InitializeAction_Statics
struct UHT_STATICS
{
	struct Azr_ActionWidget_eventInitializeAction_Parms
	{
		EAzr_ActionMode InMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Action API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- PUBLIC API FOR THE COMPONENT TO CALL ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- PUBLIC API FOR THE COMPONENT TO CALL ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeAction constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeAction constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeAction Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InMode = { "InMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_ActionWidget_eventInitializeAction_Parms, InMode), Z_Construct_UEnum_AzurealXR_EAzr_ActionMode, METADATA_PARAMS(0, nullptr) }; // d3c0e9e32a28adbe8b96868cc0437a431b423aef
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeAction Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "InitializeAction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ActionWidget_eventInitializeAction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ActionWidget_eventInitializeAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_InitializeAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execInitializeAction)
{
	P_GET_ENUM(EAzr_ActionMode,Z_Param_InMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAction(EAzr_ActionMode(Z_Param_InMode));
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function InitializeAction ********************************

// ********** Begin Class UAzr_ActionWidget Function OnActionButtonClicked *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnActionButtonClicked constinit property declarations *****************
// ********** End Function OnActionButtonClicked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "OnActionButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execOnActionButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActionButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function OnActionButtonClicked ***************************

// ********** Begin Class UAzr_ActionWidget Function OnActionButtonHovered *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonHovered_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnActionButtonHovered constinit property declarations *****************
// ********** End Function OnActionButtonHovered constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "OnActionButtonHovered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonHovered(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execOnActionButtonHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActionButtonHovered();
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function OnActionButtonHovered ***************************

// ********** Begin Class UAzr_ActionWidget Function OnActionButtonUnhovered ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonUnhovered_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnActionButtonUnhovered constinit property declarations ***************
// ********** End Function OnActionButtonUnhovered constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "OnActionButtonUnhovered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonUnhovered(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execOnActionButtonUnhovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActionButtonUnhovered();
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function OnActionButtonUnhovered *************************

// ********** Begin Class UAzr_ActionWidget Function SetActionCompleted ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_SetActionCompleted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Action API" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActionCompleted constinit property declarations ********************
// ********** End Function SetActionCompleted constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "SetActionCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_SetActionCompleted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execSetActionCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionCompleted();
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function SetActionCompleted ******************************

// ********** Begin Class UAzr_ActionWidget Function SetActionDescription **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_SetActionDescription_Statics
struct UHT_STATICS
{
	struct Azr_ActionWidget_eventSetActionDescription_Parms
	{
		FText NewText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Action API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Allows the logic component to inject the paragraph text\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Allows the logic component to inject the paragraph text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActionDescription constinit property declarations ******************
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActionDescription constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActionDescription Property Definitions *****************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_ActionWidget_eventSetActionDescription_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewText_MetaData), NewProp_NewText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetActionDescription Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "SetActionDescription", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ActionWidget_eventSetActionDescription_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ActionWidget_eventSetActionDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_SetActionDescription(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execSetActionDescription)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionDescription(Z_Param_Out_NewText);
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function SetActionDescription ****************************

// ********** Begin Class UAzr_ActionWidget Function SetActionProgress *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_SetActionProgress_Statics
struct UHT_STATICS
{
	struct Azr_ActionWidget_eventSetActionProgress_Parms
	{
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Action API" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActionProgress constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActionProgress constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActionProgress Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_ActionWidget_eventSetActionProgress_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetActionProgress Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "SetActionProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ActionWidget_eventSetActionProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ActionWidget_eventSetActionProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_SetActionProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execSetActionProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionProgress(Z_Param_Progress);
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function SetActionProgress *******************************

// ********** Begin Class UAzr_ActionWidget Function SetHoveredByLeftHand **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_SetHoveredByLeftHand_Statics
struct UHT_STATICS
{
	struct Azr_ActionWidget_eventSetHoveredByLeftHand_Parms
	{
		bool bIsHovering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Action API" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHoveredByLeftHand constinit property declarations ******************
	static void NewProp_bIsHovering_SetBit(void* Obj)
	{
		((Azr_ActionWidget_eventSetHoveredByLeftHand_Parms*)Obj)->bIsHovering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHoveredByLeftHand constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHoveredByLeftHand Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_ActionWidget_eventSetHoveredByLeftHand_Parms), &UHT_STATICS::NewProp_bIsHovering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsHovering,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHoveredByLeftHand Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "SetHoveredByLeftHand", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ActionWidget_eventSetHoveredByLeftHand_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ActionWidget_eventSetHoveredByLeftHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_SetHoveredByLeftHand(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execSetHoveredByLeftHand)
{
	P_GET_UBOOL(Z_Param_bIsHovering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoveredByLeftHand(Z_Param_bIsHovering);
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function SetHoveredByLeftHand ****************************

// ********** Begin Class UAzr_ActionWidget Function SetHoveredByRightHand *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ActionWidget_SetHoveredByRightHand_Statics
struct UHT_STATICS
{
	struct Azr_ActionWidget_eventSetHoveredByRightHand_Parms
	{
		bool bIsHovering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Action API" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHoveredByRightHand constinit property declarations *****************
	static void NewProp_bIsHovering_SetBit(void* Obj)
	{
		((Azr_ActionWidget_eventSetHoveredByRightHand_Parms*)Obj)->bIsHovering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHoveredByRightHand constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHoveredByRightHand Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_ActionWidget_eventSetHoveredByRightHand_Parms), &UHT_STATICS::NewProp_bIsHovering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsHovering,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHoveredByRightHand Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ActionWidget, nullptr, "SetHoveredByRightHand", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ActionWidget_eventSetHoveredByRightHand_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ActionWidget_eventSetHoveredByRightHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ActionWidget_SetHoveredByRightHand(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ActionWidget::execSetHoveredByRightHand)
{
	P_GET_UBOOL(Z_Param_bIsHovering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoveredByRightHand(Z_Param_bIsHovering);
	P_NATIVE_END;
}
// ********** End Class UAzr_ActionWidget Function SetHoveredByRightHand ***************************

// ********** Begin Class UAzr_ActionWidget ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_ActionWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_ActionWidget\n * The C++ base for the AzurealXR Action UI.\n * Manages the Idle/Processing/Completed states based on the Action Mode.\n */" },
#endif
		{ "IncludePath", "Azr_ActionWidget.h" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_ActionWidget\nThe C++ base for the AzurealXR Action UI.\nManages the Idle/Processing/Completed states based on the Action Mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExecuteClicked_MetaData[] = {
		{ "Category", "Azureal|Action Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS FOR THE COMPONENT TO LISTEN TO ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS FOR THE COMPONENT TO LISTEN TO ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletedClicked_MetaData[] = {
		{ "Category", "Azureal|Action Events" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EXACT UMG BINDINGS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EXACT UMG BINDINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionDescriptionBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: The text block where the actual action description paragraph will go\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: The text block where the actual action description paragraph will go" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_ActionWidget constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExecuteClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedClicked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionDescriptionBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_ActionWidget constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitializeAction"), .Pointer = &UAzr_ActionWidget::execInitializeAction },
		{ .NameUTF8 = UTF8TEXT("OnActionButtonClicked"), .Pointer = &UAzr_ActionWidget::execOnActionButtonClicked },
		{ .NameUTF8 = UTF8TEXT("OnActionButtonHovered"), .Pointer = &UAzr_ActionWidget::execOnActionButtonHovered },
		{ .NameUTF8 = UTF8TEXT("OnActionButtonUnhovered"), .Pointer = &UAzr_ActionWidget::execOnActionButtonUnhovered },
		{ .NameUTF8 = UTF8TEXT("SetActionCompleted"), .Pointer = &UAzr_ActionWidget::execSetActionCompleted },
		{ .NameUTF8 = UTF8TEXT("SetActionDescription"), .Pointer = &UAzr_ActionWidget::execSetActionDescription },
		{ .NameUTF8 = UTF8TEXT("SetActionProgress"), .Pointer = &UAzr_ActionWidget::execSetActionProgress },
		{ .NameUTF8 = UTF8TEXT("SetHoveredByLeftHand"), .Pointer = &UAzr_ActionWidget::execSetHoveredByLeftHand },
		{ .NameUTF8 = UTF8TEXT("SetHoveredByRightHand"), .Pointer = &UAzr_ActionWidget::execSetHoveredByRightHand },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_ActionWidget_InitializeAction, "InitializeAction" }, // a0575ee62bbee33d91a67dab18555b9b78e0d61b
		{ &Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonClicked, "OnActionButtonClicked" }, // 89dcb52d46985abcb2e6fea63c6001a7d3dea9b5
		{ &Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonHovered, "OnActionButtonHovered" }, // e6745d7ef3d720842bf20ce7f48e1c51adbe190a
		{ &Z_Construct_UFunction_UAzr_ActionWidget_OnActionButtonUnhovered, "OnActionButtonUnhovered" }, // 7c2ee5ef1ade2327ed1e22b1523e7e6cc4dfa242
		{ &Z_Construct_UFunction_UAzr_ActionWidget_SetActionCompleted, "SetActionCompleted" }, // 106604b6a1d585a3243bc0f9e0b01fbb3e8726fd
		{ &Z_Construct_UFunction_UAzr_ActionWidget_SetActionDescription, "SetActionDescription" }, // 8e28c06c1703ec107afa0b4474abcb6cb314beec
		{ &Z_Construct_UFunction_UAzr_ActionWidget_SetActionProgress, "SetActionProgress" }, // 573c49131949e17aba5e8b05411a7223ee14eb0e
		{ &Z_Construct_UFunction_UAzr_ActionWidget_SetHoveredByLeftHand, "SetHoveredByLeftHand" }, // b4b334c2d60d7c0afff17787c31027ce0835b963
		{ &Z_Construct_UFunction_UAzr_ActionWidget_SetHoveredByRightHand, "SetHoveredByRightHand" }, // 61c9135911c3476a0670eb487992e422b94e1791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_ActionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_ActionWidget Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnExecuteClicked = { "OnExecuteClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ActionWidget, OnExecuteClicked), Z_Construct_UDelegateFunction_AzurealXR_OnActionExecute__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExecuteClicked_MetaData), NewProp_OnExecuteClicked_MetaData) }; // 2e95661184404de3f2c88f4305c310dfe749c9d5
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnCompletedClicked = { "OnCompletedClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ActionWidget, OnCompletedClicked), Z_Construct_UDelegateFunction_AzurealXR_OnActionExecute__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompletedClicked_MetaData), NewProp_OnCompletedClicked_MetaData) }; // 2e95661184404de3f2c88f4305c310dfe749c9d5
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActionButton = { "ActionButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ActionWidget, ActionButton), Z_Construct_UClass_UButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionButton_MetaData), NewProp_ActionButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ActionWidget, ActionText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionText_MetaData), NewProp_ActionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActionProgressBar = { "ActionProgressBar", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ActionWidget, ActionProgressBar), Z_Construct_UClass_UProgressBar, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionProgressBar_MetaData), NewProp_ActionProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActionDescriptionBlock = { "ActionDescriptionBlock", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ActionWidget, ActionDescriptionBlock), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionDescriptionBlock_MetaData), NewProp_ActionDescriptionBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnExecuteClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnCompletedClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionDescriptionBlock,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_ActionWidget Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_ActionWidget,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_ActionWidget_StaticRegisterNativesUAzr_ActionWidget()
{
	UClass* Class = UAzr_ActionWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_ActionWidget;
UClass* Z_Construct_UClass_UAzr_ActionWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_ActionWidget;
		if (!Z_Registration_Info_UClass_UAzr_ActionWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_ActionWidget"),
				Z_Registration_Info_UClass_UAzr_ActionWidget.InnerSingleton,
				UAzr_ActionWidget_StaticRegisterNativesUAzr_ActionWidget,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UAzr_ActionWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_ActionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_ActionWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_ActionWidget.OuterSingleton;
}
#undef UHT_STATICS
UAzr_ActionWidget::UAzr_ActionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_ActionWidget);
UAzr_ActionWidget::~UAzr_ActionWidget() {}
// ********** End Class UAzr_ActionWidget **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_ActionMode, TEXT("EAzr_ActionMode"), &ZRIE_EAzr_ActionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3552635363U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_ActionWidgetState, TEXT("EAzr_ActionWidgetState"), &ZRIE_EAzr_ActionWidgetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1010485110U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_ActionWidget, TEXT("UAzr_ActionWidget"), &Z_Registration_Info_UClass_UAzr_ActionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_ActionWidget), 869950766U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ActionWidget_h__Script_AzurealXR_c419447b342291f09067b15399a47ca1a469728a{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
