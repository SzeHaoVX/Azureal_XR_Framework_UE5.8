// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_ExplainWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_ExplainWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UButton(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UProgressBar(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UTextBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ExplainWidget(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ExplainStepType(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ExplainWidgetState(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlayAudio__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainProceed__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ExplainWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAzr_ExplainStepType ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_ExplainStepType_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ExplainStepType>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_ExplainStepType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines what text the button shows when audio is done\n" },
#endif
		{ "End.Comment", "// Explain+ (Completes with \"CONTINUE\")\n" },
		{ "End.Name", "EAzr_ExplainStepType::End" },
		{ "End.ToolTip", "Explain+ (Completes with \"CONTINUE\")" },
		{ "Middle.Comment", "// Explain+ (Completes with \"CONTINUE\")\n" },
		{ "Middle.Name", "EAzr_ExplainStepType::Middle" },
		{ "Middle.ToolTip", "Explain+ (Completes with \"CONTINUE\")" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
		{ "Single.Name", "EAzr_ExplainStepType::Single" },
		{ "Start.Comment", "// Normal Explain (Completes with \"CONFIRM\")\n" },
		{ "Start.Name", "EAzr_ExplainStepType::Start" },
		{ "Start.ToolTip", "Normal Explain (Completes with \"CONFIRM\")" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines what text the button shows when audio is done" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_ExplainStepType::Single", (int64)EAzr_ExplainStepType::Single },
		{ "EAzr_ExplainStepType::Start", (int64)EAzr_ExplainStepType::Start },
		{ "EAzr_ExplainStepType::Middle", (int64)EAzr_ExplainStepType::Middle },
		{ "EAzr_ExplainStepType::End", (int64)EAzr_ExplainStepType::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_ExplainStepType",
	"EAzr_ExplainStepType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_ExplainStepType;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ExplainStepType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_ExplainStepType.OuterSingleton)
		{
			ZRIE_EAzr_ExplainStepType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_ExplainStepType, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_ExplainStepType"));
		}
		return ZRIE_EAzr_ExplainStepType.OuterSingleton;
	}
	if (!ZRIE_EAzr_ExplainStepType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_ExplainStepType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_ExplainStepType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_ExplainStepType ********************************************************

// ********** Begin Enum EAzr_ExplainWidgetState ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_ExplainWidgetState_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ExplainWidgetState>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_ExplainWidgetState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks the current visual state of the widget\n" },
#endif
		{ "Completed.Comment", "// Audio is running, button is locked\n" },
		{ "Completed.Name", "EAzr_ExplainWidgetState::Completed" },
		{ "Completed.ToolTip", "Audio is running, button is locked" },
		{ "Idle.Name", "EAzr_ExplainWidgetState::Idle" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
		{ "Playing.Comment", "// Waiting for player to click Play\n" },
		{ "Playing.Name", "EAzr_ExplainWidgetState::Playing" },
		{ "Playing.ToolTip", "Waiting for player to click Play" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks the current visual state of the widget" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_ExplainWidgetState::Idle", (int64)EAzr_ExplainWidgetState::Idle },
		{ "EAzr_ExplainWidgetState::Playing", (int64)EAzr_ExplainWidgetState::Playing },
		{ "EAzr_ExplainWidgetState::Completed", (int64)EAzr_ExplainWidgetState::Completed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_ExplainWidgetState",
	"EAzr_ExplainWidgetState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_ExplainWidgetState;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ExplainWidgetState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_ExplainWidgetState.OuterSingleton)
		{
			ZRIE_EAzr_ExplainWidgetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_ExplainWidgetState, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_ExplainWidgetState"));
		}
		return ZRIE_EAzr_ExplainWidgetState.OuterSingleton;
	}
	if (!ZRIE_EAzr_ExplainWidgetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_ExplainWidgetState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_ExplainWidgetState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_ExplainWidgetState *****************************************************

// ********** Begin Delegate FOnExplainPlayAudio ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlayAudio__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExplainPlayAudio constinit property declarations *******************
// ********** End Delegate FOnExplainPlayAudio constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnExplainPlayAudio__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlayAudio__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnExplainPlayAudio *****************************************************

// ********** Begin Delegate FOnExplainProceed *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnExplainProceed__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExplainProceed constinit property declarations *********************
// ********** End Delegate FOnExplainProceed constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnExplainProceed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainProceed__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnExplainProceed *******************************************************

// ********** Begin Class UAzr_ExplainWidget Function InitializeStep *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_InitializeStep_Statics
struct UHT_STATICS
{
	struct Azr_ExplainWidget_eventInitializeStep_Parms
	{
		EAzr_ExplainStepType InStepType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Explain API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- PUBLIC API FOR THE COMPONENT TO CALL ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- PUBLIC API FOR THE COMPONENT TO CALL ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeStep constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InStepType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InStepType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeStep constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeStep Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InStepType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InStepType = { "InStepType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_ExplainWidget_eventInitializeStep_Parms, InStepType), Z_Construct_UEnum_AzurealXR_EAzr_ExplainStepType, METADATA_PARAMS(0, nullptr) }; // 2ce414b9f8c42f9cc60049241438d29999dea918
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStepType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStepType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeStep Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "InitializeStep", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ExplainWidget_eventInitializeStep_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ExplainWidget_eventInitializeStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_InitializeStep(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execInitializeStep)
{
	P_GET_ENUM(EAzr_ExplainStepType,Z_Param_InStepType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeStep(EAzr_ExplainStepType(Z_Param_InStepType));
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function InitializeStep *********************************

// ********** Begin Class UAzr_ExplainWidget Function OnInteractionButtonClicked *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnInteractionButtonClicked constinit property declarations ************
// ********** End Function OnInteractionButtonClicked constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "OnInteractionButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execOnInteractionButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function OnInteractionButtonClicked *********************

// ********** Begin Class UAzr_ExplainWidget Function OnInteractionButtonHovered *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonHovered_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnInteractionButtonHovered constinit property declarations ************
// ********** End Function OnInteractionButtonHovered constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "OnInteractionButtonHovered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonHovered(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execOnInteractionButtonHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionButtonHovered();
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function OnInteractionButtonHovered *********************

// ********** Begin Class UAzr_ExplainWidget Function OnInteractionButtonUnhovered *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonUnhovered_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnInteractionButtonUnhovered constinit property declarations **********
// ********** End Function OnInteractionButtonUnhovered constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "OnInteractionButtonUnhovered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonUnhovered(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execOnInteractionButtonUnhovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteractionButtonUnhovered();
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function OnInteractionButtonUnhovered *******************

// ********** Begin Class UAzr_ExplainWidget Function SetAudioProgress *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_SetAudioProgress_Statics
struct UHT_STATICS
{
	struct Azr_ExplainWidget_eventSetAudioProgress_Parms
	{
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Explain API" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAudioProgress constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAudioProgress constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAudioProgress Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_ExplainWidget_eventSetAudioProgress_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAudioProgress Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "SetAudioProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ExplainWidget_eventSetAudioProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ExplainWidget_eventSetAudioProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_SetAudioProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execSetAudioProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioProgress(Z_Param_Progress);
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function SetAudioProgress *******************************

// ********** Begin Class UAzr_ExplainWidget Function SetExplainText *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_SetExplainText_Statics
struct UHT_STATICS
{
	struct Azr_ExplainWidget_eventSetExplainText_Parms
	{
		FText NewText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Explain API" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Allows the logic component to inject the paragraph text\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Allows the logic component to inject the paragraph text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExplainText constinit property declarations ************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExplainText constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExplainText Property Definitions ***********************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_ExplainWidget_eventSetExplainText_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewText_MetaData), NewProp_NewText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetExplainText Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "SetExplainText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ExplainWidget_eventSetExplainText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ExplainWidget_eventSetExplainText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_SetExplainText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execSetExplainText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplainText(Z_Param_Out_NewText);
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function SetExplainText *********************************

// ********** Begin Class UAzr_ExplainWidget Function SetHoveredByLeftHand *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_SetHoveredByLeftHand_Statics
struct UHT_STATICS
{
	struct Azr_ExplainWidget_eventSetHoveredByLeftHand_Parms
	{
		bool bIsHovering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Explain API" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHoveredByLeftHand constinit property declarations ******************
	static void NewProp_bIsHovering_SetBit(void* Obj)
	{
		((Azr_ExplainWidget_eventSetHoveredByLeftHand_Parms*)Obj)->bIsHovering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHoveredByLeftHand constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHoveredByLeftHand Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_ExplainWidget_eventSetHoveredByLeftHand_Parms), &UHT_STATICS::NewProp_bIsHovering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsHovering,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHoveredByLeftHand Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "SetHoveredByLeftHand", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ExplainWidget_eventSetHoveredByLeftHand_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ExplainWidget_eventSetHoveredByLeftHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_SetHoveredByLeftHand(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execSetHoveredByLeftHand)
{
	P_GET_UBOOL(Z_Param_bIsHovering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoveredByLeftHand(Z_Param_bIsHovering);
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function SetHoveredByLeftHand ***************************

// ********** Begin Class UAzr_ExplainWidget Function SetHoveredByRightHand ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_SetHoveredByRightHand_Statics
struct UHT_STATICS
{
	struct Azr_ExplainWidget_eventSetHoveredByRightHand_Parms
	{
		bool bIsHovering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Explain API" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHoveredByRightHand constinit property declarations *****************
	static void NewProp_bIsHovering_SetBit(void* Obj)
	{
		((Azr_ExplainWidget_eventSetHoveredByRightHand_Parms*)Obj)->bIsHovering = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHoveredByRightHand constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHoveredByRightHand Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_ExplainWidget_eventSetHoveredByRightHand_Parms), &UHT_STATICS::NewProp_bIsHovering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsHovering,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetHoveredByRightHand Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "SetHoveredByRightHand", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_ExplainWidget_eventSetHoveredByRightHand_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_ExplainWidget_eventSetHoveredByRightHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_SetHoveredByRightHand(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execSetHoveredByRightHand)
{
	P_GET_UBOOL(Z_Param_bIsHovering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoveredByRightHand(Z_Param_bIsHovering);
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function SetHoveredByRightHand **************************

// ********** Begin Class UAzr_ExplainWidget Function SetPlaybackCompleted *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_ExplainWidget_SetPlaybackCompleted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Explain API" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlaybackCompleted constinit property declarations ******************
// ********** End Function SetPlaybackCompleted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_ExplainWidget, nullptr, "SetPlaybackCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_ExplainWidget_SetPlaybackCompleted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_ExplainWidget::execSetPlaybackCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackCompleted();
	P_NATIVE_END;
}
// ********** End Class UAzr_ExplainWidget Function SetPlaybackCompleted ***************************

// ********** Begin Class UAzr_ExplainWidget *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_ExplainWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_ExplainWidget\n * The C++ base for the AzurealXR Explanation UI.\n * Manages the Play/Progress/Continue state machine.\n */" },
#endif
		{ "IncludePath", "Azr_ExplainWidget.h" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_ExplainWidget\nThe C++ base for the AzurealXR Explanation UI.\nManages the Play/Progress/Continue state machine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayAudioClicked_MetaData[] = {
		{ "Category", "Azureal|Explain Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS FOR THE COMPONENT TO LISTEN TO ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS FOR THE COMPONENT TO LISTEN TO ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProceedClicked_MetaData[] = {
		{ "Category", "Azureal|Explain Events" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EXACT UMG BINDINGS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EXACT UMG BINDINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplainTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_ExplainWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_ExplainWidget constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayAudioClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProceedClicked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplainTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_ExplainWidget constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitializeStep"), .Pointer = &UAzr_ExplainWidget::execInitializeStep },
		{ .NameUTF8 = UTF8TEXT("OnInteractionButtonClicked"), .Pointer = &UAzr_ExplainWidget::execOnInteractionButtonClicked },
		{ .NameUTF8 = UTF8TEXT("OnInteractionButtonHovered"), .Pointer = &UAzr_ExplainWidget::execOnInteractionButtonHovered },
		{ .NameUTF8 = UTF8TEXT("OnInteractionButtonUnhovered"), .Pointer = &UAzr_ExplainWidget::execOnInteractionButtonUnhovered },
		{ .NameUTF8 = UTF8TEXT("SetAudioProgress"), .Pointer = &UAzr_ExplainWidget::execSetAudioProgress },
		{ .NameUTF8 = UTF8TEXT("SetExplainText"), .Pointer = &UAzr_ExplainWidget::execSetExplainText },
		{ .NameUTF8 = UTF8TEXT("SetHoveredByLeftHand"), .Pointer = &UAzr_ExplainWidget::execSetHoveredByLeftHand },
		{ .NameUTF8 = UTF8TEXT("SetHoveredByRightHand"), .Pointer = &UAzr_ExplainWidget::execSetHoveredByRightHand },
		{ .NameUTF8 = UTF8TEXT("SetPlaybackCompleted"), .Pointer = &UAzr_ExplainWidget::execSetPlaybackCompleted },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_InitializeStep, "InitializeStep" }, // a0294cd3df6493acc7452bcc2eb9d50994e0a0da
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonClicked, "OnInteractionButtonClicked" }, // 76619a78b4400d443ab62f2679ab7e73e929b3ba
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonHovered, "OnInteractionButtonHovered" }, // 7566a6014550c7874d26108616af9a06494e24be
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_OnInteractionButtonUnhovered, "OnInteractionButtonUnhovered" }, // 0c44a7882c1afa6bb4cd5441f902fb79ca534c62
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_SetAudioProgress, "SetAudioProgress" }, // 98d32a8749c719722f137e74bf9a03e9a614f634
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_SetExplainText, "SetExplainText" }, // 35e68838b0f0f674a1848c3af4d34ca0ae1ca4bf
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_SetHoveredByLeftHand, "SetHoveredByLeftHand" }, // 11c64f5d98bdd6dea7dad1f256bb9b701a477672
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_SetHoveredByRightHand, "SetHoveredByRightHand" }, // 7281d5f5a1a7dede29ba32ee606e35d515677dc0
		{ &Z_Construct_UFunction_UAzr_ExplainWidget_SetPlaybackCompleted, "SetPlaybackCompleted" }, // 354226a89f89c98163bb1940d4a61ec358c45517
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_ExplainWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_ExplainWidget Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPlayAudioClicked = { "OnPlayAudioClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ExplainWidget, OnPlayAudioClicked), Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlayAudio__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayAudioClicked_MetaData), NewProp_OnPlayAudioClicked_MetaData) }; // 7d514a4792d90e0fa5754286dea3f912bc3d44b8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnProceedClicked = { "OnProceedClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ExplainWidget, OnProceedClicked), Z_Construct_UDelegateFunction_AzurealXR_OnExplainProceed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProceedClicked_MetaData), NewProp_OnProceedClicked_MetaData) }; // 234fa65fe56045eb3e4da877358196e116e44142
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InteractionButton = { "InteractionButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ExplainWidget, InteractionButton), Z_Construct_UClass_UButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionButton_MetaData), NewProp_InteractionButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActionText = { "ActionText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ExplainWidget, ActionText), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionText_MetaData), NewProp_ActionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ExplainTextBlock = { "ExplainTextBlock", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ExplainWidget, ExplainTextBlock), Z_Construct_UClass_UTextBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplainTextBlock_MetaData), NewProp_ExplainTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AudioProgressBar = { "AudioProgressBar", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_ExplainWidget, AudioProgressBar), Z_Construct_UClass_UProgressBar, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioProgressBar_MetaData), NewProp_AudioProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPlayAudioClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnProceedClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExplainTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AudioProgressBar,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_ExplainWidget Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_ExplainWidget,
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
static void UAzr_ExplainWidget_StaticRegisterNativesUAzr_ExplainWidget()
{
	UClass* Class = UAzr_ExplainWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_ExplainWidget;
UClass* Z_Construct_UClass_UAzr_ExplainWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_ExplainWidget;
		if (!Z_Registration_Info_UClass_UAzr_ExplainWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_ExplainWidget"),
				Z_Registration_Info_UClass_UAzr_ExplainWidget.InnerSingleton,
				UAzr_ExplainWidget_StaticRegisterNativesUAzr_ExplainWidget,
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
		return Z_Registration_Info_UClass_UAzr_ExplainWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_ExplainWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_ExplainWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_ExplainWidget.OuterSingleton;
}
#undef UHT_STATICS
UAzr_ExplainWidget::UAzr_ExplainWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_ExplainWidget);
UAzr_ExplainWidget::~UAzr_ExplainWidget() {}
// ********** End Class UAzr_ExplainWidget *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_ExplainStepType, TEXT("EAzr_ExplainStepType"), &ZRIE_EAzr_ExplainStepType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 753145017U) },
		{ Z_Construct_UEnum_AzurealXR_EAzr_ExplainWidgetState, TEXT("EAzr_ExplainWidgetState"), &ZRIE_EAzr_ExplainWidgetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 185627169U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_ExplainWidget, TEXT("UAzr_ExplainWidget"), &Z_Registration_Info_UClass_UAzr_ExplainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_ExplainWidget), 4258350619U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_ExplainWidget_h__Script_AzurealXR_3e464d4aa888c29dadbb62f0f02eb6d55430f7a3{
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
