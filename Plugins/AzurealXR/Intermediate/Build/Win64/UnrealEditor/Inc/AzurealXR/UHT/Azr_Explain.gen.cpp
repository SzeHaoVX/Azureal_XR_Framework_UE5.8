// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Explain.h"
#include "Azr_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Explain() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UWidgetComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Explain(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_ExplainStep(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainFinished__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusFinished__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusStarted__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainStarted__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Explain(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_ExplainWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnExplainFinished ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnExplainFinished__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExplainFinished constinit property declarations ********************
// ********** End Delegate FOnExplainFinished constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnExplainFinished__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainFinished__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnExplainFinished ******************************************************

// ********** Begin Delegate FOnExplainPlusFinished ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusFinished__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnExplainPlusFinished_Parms
	{
		int32 StepIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExplainPlusFinished constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnExplainPlusFinished constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnExplainPlusFinished Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StepIndex = { "StepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnExplainPlusFinished_Parms, StepIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnExplainPlusFinished Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnExplainPlusFinished__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnExplainPlusFinished_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnExplainPlusFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusFinished__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnExplainPlusFinished **************************************************

// ********** Begin Delegate FOnExplainStarted *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnExplainStarted__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fires when player press start button\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires when player press start button" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExplainStarted constinit property declarations *********************
// ********** End Delegate FOnExplainStarted constinit property declarations ***********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnExplainStarted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainStarted__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnExplainStarted *******************************************************

// ********** Begin Delegate FOnExplainPlusStarted *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusStarted__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnExplainPlusStarted_Parms
	{
		int32 StepIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExplainPlusStarted constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnExplainPlusStarted constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnExplainPlusStarted Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StepIndex = { "StepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnExplainPlusStarted_Parms, StepIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnExplainPlusStarted Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnExplainPlusStarted__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnExplainPlusStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnExplainPlusStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusStarted__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnExplainPlusStarted ***************************************************

// ********** Begin Class UAzr_Explain Function DisableExplain *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Explain_DisableExplain_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableExplain constinit property declarations ************************
// ********** End Function DisableExplain constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Explain, nullptr, "DisableExplain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Explain_DisableExplain(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Explain::execDisableExplain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableExplain();
	P_NATIVE_END;
}
// ********** End Class UAzr_Explain Function DisableExplain ***************************************

// ********** Begin Class UAzr_Explain Function EnableExplain **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Explain_EnableExplain_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableExplain constinit property declarations *************************
// ********** End Function EnableExplain constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Explain, nullptr, "EnableExplain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Explain_EnableExplain(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Explain::execEnableExplain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableExplain();
	P_NATIVE_END;
}
// ********** End Class UAzr_Explain Function EnableExplain ****************************************

// ********** Begin Class UAzr_Explain Function EnableExplainPlus **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Explain_EnableExplainPlus_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableExplainPlus constinit property declarations *********************
// ********** End Function EnableExplainPlus constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Explain, nullptr, "EnableExplainPlus", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Explain_EnableExplainPlus(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Explain::execEnableExplainPlus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableExplainPlus();
	P_NATIVE_END;
}
// ********** End Class UAzr_Explain Function EnableExplainPlus ************************************

// ********** Begin Class UAzr_Explain Function HandlePlayAudioClicked *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Explain_HandlePlayAudioClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePlayAudioClicked constinit property declarations ****************
// ********** End Function HandlePlayAudioClicked constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Explain, nullptr, "HandlePlayAudioClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Explain_HandlePlayAudioClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Explain::execHandlePlayAudioClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayAudioClicked();
	P_NATIVE_END;
}
// ********** End Class UAzr_Explain Function HandlePlayAudioClicked *******************************

// ********** Begin Class UAzr_Explain Function HandleProceedClicked *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Explain_HandleProceedClicked_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleProceedClicked constinit property declarations ******************
// ********** End Function HandleProceedClicked constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Explain, nullptr, "HandleProceedClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Explain_HandleProceedClicked(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Explain::execHandleProceedClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleProceedClicked();
	P_NATIVE_END;
}
// ********** End Class UAzr_Explain Function HandleProceedClicked *********************************

// ********** Begin Class UAzr_Explain *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Explain_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_Explain\n * The logic manager for AzurealXR Explanation UI flows.\n * Handles single-shot explains or multi-step (Start -> Middle -> End) sequences.\n */" },
#endif
		{ "DisplayName", "Azr Explain Logic" },
		{ "IncludePath", "Azr_Explain.h" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_Explain\nThe logic manager for AzurealXR Explanation UI flows.\nHandles single-shot explains or multi-step (Start -> Middle -> End) sequences." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Explain Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CORE SETTINGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CORE SETTINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleExplainStep_MetaData[] = {
		{ "Category", "Explain Settings|Normal Explain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 1. NORMAL EXPLAIN ---\n// Used when EnableExplain() is called\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 1. NORMAL EXPLAIN ---\nUsed when EnableExplain() is called" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartStep_MetaData[] = {
		{ "Category", "Explain Settings|Explain Plus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- 2. EXPLAIN+ (THE CHAIN) ---\n// Used when EnableExplainPlus() is called\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- 2. EXPLAIN+ (THE CHAIN) ---\nUsed when EnableExplainPlus() is called" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiddleSteps_MetaData[] = {
		{ "Category", "Explain Settings|Explain Plus" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStep_MetaData[] = {
		{ "Category", "Explain Settings|Explain Plus" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightStart_MetaData[] = {
		{ "Category", "Explain Settings|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- AUDIO ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- AUDIO ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightEnd_MetaData[] = {
		{ "Category", "Explain Settings|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExplainCompleted_MetaData[] = {
		{ "Category", "Azureal|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExplainPlusCompleted_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExplainStarted_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExplainPlusStarted_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAudioComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INTERNAL COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INTERNAL COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherCable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveExplainUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Explain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Explain constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleExplainStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MiddleSteps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MiddleSteps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndStep;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExplainCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExplainPlusCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExplainStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExplainPlusStarted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAudioComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TetherCable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidgetComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveExplainUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Explain constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableExplain"), .Pointer = &UAzr_Explain::execDisableExplain },
		{ .NameUTF8 = UTF8TEXT("EnableExplain"), .Pointer = &UAzr_Explain::execEnableExplain },
		{ .NameUTF8 = UTF8TEXT("EnableExplainPlus"), .Pointer = &UAzr_Explain::execEnableExplainPlus },
		{ .NameUTF8 = UTF8TEXT("HandlePlayAudioClicked"), .Pointer = &UAzr_Explain::execHandlePlayAudioClicked },
		{ .NameUTF8 = UTF8TEXT("HandleProceedClicked"), .Pointer = &UAzr_Explain::execHandleProceedClicked },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Explain_DisableExplain, "DisableExplain" }, // 65e4dad55e5a5ff3bc15b470a1e0f241d11d6d30
		{ &Z_Construct_UFunction_UAzr_Explain_EnableExplain, "EnableExplain" }, // 72db0d5487e7241ac615fdb296162cd26514b892
		{ &Z_Construct_UFunction_UAzr_Explain_EnableExplainPlus, "EnableExplainPlus" }, // 128d17897810873a56664c52935d69ac81db5fed
		{ &Z_Construct_UFunction_UAzr_Explain_HandlePlayAudioClicked, "HandlePlayAudioClicked" }, // a696977fa2f169e85510d413fa92cb44331c98d6
		{ &Z_Construct_UFunction_UAzr_Explain_HandleProceedClicked, "HandleProceedClicked" }, // b3ec5496af5abee49c98359626284057fae0a569
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Explain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Explain Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SingleExplainStep = { "SingleExplainStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, SingleExplainStep), Z_Construct_UScriptStruct_FAzr_ExplainStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleExplainStep_MetaData), NewProp_SingleExplainStep_MetaData) }; // 3ca3ffe5a9da58347e9f766c1ebb9a74fe997b2a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartStep = { "StartStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, StartStep), Z_Construct_UScriptStruct_FAzr_ExplainStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartStep_MetaData), NewProp_StartStep_MetaData) }; // 3ca3ffe5a9da58347e9f766c1ebb9a74fe997b2a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MiddleSteps_Inner = { "MiddleSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAzr_ExplainStep, METADATA_PARAMS(0, nullptr) }; // 3ca3ffe5a9da58347e9f766c1ebb9a74fe997b2a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MiddleSteps = { "MiddleSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, MiddleSteps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiddleSteps_MetaData), NewProp_MiddleSteps_MetaData) }; // 3ca3ffe5a9da58347e9f766c1ebb9a74fe997b2a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EndStep = { "EndStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, EndStep), Z_Construct_UScriptStruct_FAzr_ExplainStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStep_MetaData), NewProp_EndStep_MetaData) }; // 3ca3ffe5a9da58347e9f766c1ebb9a74fe997b2a
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, SoundHighlightStart), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, SoundHighlightEnd), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnExplainCompleted = { "OnExplainCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, OnExplainCompleted), Z_Construct_UDelegateFunction_AzurealXR_OnExplainFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExplainCompleted_MetaData), NewProp_OnExplainCompleted_MetaData) }; // cd113ba10a01ad7a79da5e3231e23ae0daa32ca7
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnExplainPlusCompleted = { "OnExplainPlusCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, OnExplainPlusCompleted), Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExplainPlusCompleted_MetaData), NewProp_OnExplainPlusCompleted_MetaData) }; // f63ea08336fa5b8c01c09d5bfd626a23d9fd52bd
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnExplainStarted = { "OnExplainStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, OnExplainStarted), Z_Construct_UDelegateFunction_AzurealXR_OnExplainStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExplainStarted_MetaData), NewProp_OnExplainStarted_MetaData) }; // 9484ebe5dddbb828029fa9590105502f7e8c1d40
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnExplainPlusStarted = { "OnExplainPlusStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, OnExplainPlusStarted), Z_Construct_UDelegateFunction_AzurealXR_OnExplainPlusStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExplainPlusStarted_MetaData), NewProp_OnExplainPlusStarted_MetaData) }; // 2927b91d4475331fda4d2f4394f20f0b745fd58b
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveAudioComp = { "ActiveAudioComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, ActiveAudioComp), Z_Construct_UClass_UAudioComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAudioComp_MetaData), NewProp_ActiveAudioComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, StartAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, EndAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, TetherCable), Z_Construct_UClass_UCableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, TargetMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveWidgetComp = { "ActiveWidgetComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, ActiveWidgetComp), Z_Construct_UClass_UWidgetComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidgetComp_MetaData), NewProp_ActiveWidgetComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveExplainUI = { "ActiveExplainUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Explain, ActiveExplainUI), Z_Construct_UClass_UAzr_ExplainWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveExplainUI_MetaData), NewProp_ActiveExplainUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SingleExplainStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MiddleSteps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MiddleSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnExplainCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnExplainPlusCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnExplainStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnExplainPlusStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveAudioComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveWidgetComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveExplainUI,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Explain Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Explain,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_Explain_StaticRegisterNativesUAzr_Explain()
{
	UClass* Class = UAzr_Explain::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Explain;
UClass* Z_Construct_UClass_UAzr_Explain(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Explain;
		if (!Z_Registration_Info_UClass_UAzr_Explain.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Explain"),
				Z_Registration_Info_UClass_UAzr_Explain.InnerSingleton,
				UAzr_Explain_StaticRegisterNativesUAzr_Explain,
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
		return Z_Registration_Info_UClass_UAzr_Explain.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Explain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Explain.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Explain.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Explain);
UAzr_Explain::~UAzr_Explain() {}
// ********** End Class UAzr_Explain ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Explain_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Explain, TEXT("UAzr_Explain"), &Z_Registration_Info_UClass_UAzr_Explain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Explain), 2822879186U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Explain_h__Script_AzurealXR_c568c0fb7a9a520b8b96a428b3c2b9b27a450fa7{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
