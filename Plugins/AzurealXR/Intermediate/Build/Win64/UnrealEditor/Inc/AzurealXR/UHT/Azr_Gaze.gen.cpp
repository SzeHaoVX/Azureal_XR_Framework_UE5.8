// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Gaze.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Gaze() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Gaze(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGazeEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGazeProgressEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Gaze(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnGazeEvent **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnGazeEvent__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnGazeEvent_Parms
	{
		UAzr_Gaze* TriggeredZone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// We added the UAzr_Gaze* parameter so the Manager knows WHICH zone triggered\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We added the UAzr_Gaze* parameter so the Manager knows WHICH zone triggered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggeredZone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGazeEvent constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggeredZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGazeEvent constinit property declarations ****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGazeEvent Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TriggeredZone = { "TriggeredZone", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGazeEvent_Parms, TriggeredZone), Z_Construct_UClass_UAzr_Gaze, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggeredZone_MetaData), NewProp_TriggeredZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggeredZone,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnGazeEvent Property Definitions ***************************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGazeEvent__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnGazeEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnGazeEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGazeEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGazeEvent ************************************************************

// ********** Begin Delegate FOnGazeProgressEvent **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnGazeProgressEvent__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventOnGazeProgressEvent_Parms
	{
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGazeProgressEvent constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGazeProgressEvent constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGazeProgressEvent Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventOnGazeProgressEvent_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnGazeProgressEvent Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnGazeProgressEvent__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventOnGazeProgressEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventOnGazeProgressEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGazeProgressEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGazeProgressEvent ****************************************************

// ********** Begin Class UAzr_Gaze Function DisableGaze *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Gaze_DisableGaze_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableGaze constinit property declarations ***************************
// ********** End Function DisableGaze constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Gaze, nullptr, "DisableGaze", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Gaze_DisableGaze(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Gaze::execDisableGaze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGaze();
	P_NATIVE_END;
}
// ********** End Class UAzr_Gaze Function DisableGaze *********************************************

// ********** Begin Class UAzr_Gaze Function EnableGaze ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Gaze_EnableGaze_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableGaze constinit property declarations ****************************
// ********** End Function EnableGaze constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Gaze, nullptr, "EnableGaze", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Gaze_EnableGaze(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Gaze::execEnableGaze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGaze();
	P_NATIVE_END;
}
// ********** End Class UAzr_Gaze Function EnableGaze **********************************************

// ********** Begin Class UAzr_Gaze ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Gaze_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "DisplayName", "Azr Gaze Zone" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Azr_Gaze.h" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Gaze Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GazeIndicatorClass_MetaData[] = {
		{ "Category", "Gaze Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedIndicator_MetaData[] = {
		{ "Category", "Gaze Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
		{ "Category", "Gaze Configuration|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- VISUAL CONFIG ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VISUAL CONFIG ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshName_MetaData[] = {
		{ "Category", "Gaze Configuration|Visuals" },
		{ "EditCondition", "HighlightMode == EAzr_HighlightMode::TargetMeshOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GazeDuration_MetaData[] = {
		{ "Category", "Gaze Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrainRate_MetaData[] = {
		{ "Category", "Gaze Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnTrigger_MetaData[] = {
		{ "Category", "Gaze Configuration" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightSpeed_MetaData[] = {
		{ "Category", "Gaze Configuration|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightStart_MetaData[] = {
		{ "Category", "Gaze Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightEnd_MetaData[] = {
		{ "Category", "Gaze Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundGazeStart_MetaData[] = {
		{ "Category", "Gaze Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundGazeCompleted_MetaData[] = {
		{ "Category", "Gaze Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGazeTriggered_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGazeProgressUpdated_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewIndicatorMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updated to UMeshComponent to bypass invisible collision boxes\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Gaze.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updated to UMeshComponent to bypass invisible collision boxes" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Gaze constinit property declarations ********************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GazeIndicatorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedIndicator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GazeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrainRate;
	static void NewProp_bResetOnTrigger_SetBit(void* Obj)
	{
		((UAzr_Gaze*)Obj)->bResetOnTrigger = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundGazeStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundGazeCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGazeTriggered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGazeProgressUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewIndicatorMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewIndicatorMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Gaze constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableGaze"), .Pointer = &UAzr_Gaze::execDisableGaze },
		{ .NameUTF8 = UTF8TEXT("EnableGaze"), .Pointer = &UAzr_Gaze::execEnableGaze },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Gaze_DisableGaze, "DisableGaze" }, // 81c92cfd07dd90f5b90849238adc395a5291a4e8
		{ &Z_Construct_UFunction_UAzr_Gaze_EnableGaze, "EnableGaze" }, // 4115025a4d6b1bf1a6a5f534902bec17e7a73f7e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Gaze>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Gaze Property Definitions *******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GazeIndicatorClass = { "GazeIndicatorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, GazeIndicatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAzr_Indicator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GazeIndicatorClass_MetaData), NewProp_GazeIndicatorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedIndicator = { "SpawnedIndicator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, SpawnedIndicator), Z_Construct_UClass_AAzr_Indicator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedIndicator_MetaData), NewProp_SpawnedIndicator_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // b89e1d1bf6c66a6d04c6838e8255ec9637161cd7
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetMeshName = { "TargetMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, TargetMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshName_MetaData), NewProp_TargetMeshName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GazeDuration = { "GazeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, GazeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GazeDuration_MetaData), NewProp_GazeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DrainRate = { "DrainRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, DrainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrainRate_MetaData), NewProp_DrainRate_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResetOnTrigger = { "bResetOnTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Gaze), &UHT_STATICS::NewProp_bResetOnTrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetOnTrigger_MetaData), NewProp_bResetOnTrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, SoundHighlightStart), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, SoundHighlightEnd), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundGazeStart = { "SoundGazeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, SoundGazeStart), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundGazeStart_MetaData), NewProp_SoundGazeStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundGazeCompleted = { "SoundGazeCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, SoundGazeCompleted), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundGazeCompleted_MetaData), NewProp_SoundGazeCompleted_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGazeTriggered = { "OnGazeTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, OnGazeTriggered), Z_Construct_UDelegateFunction_AzurealXR_OnGazeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGazeTriggered_MetaData), NewProp_OnGazeTriggered_MetaData) }; // 90bbd09c55c77a89e20d7d3ffcbbf4a2074031ee
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGazeProgressUpdated = { "OnGazeProgressUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, OnGazeProgressUpdated), Z_Construct_UDelegateFunction_AzurealXR_OnGazeProgressEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGazeProgressUpdated_MetaData), NewProp_OnGazeProgressUpdated_MetaData) }; // 0255306ae58752ba8c3e5ac7df1225afb586b000
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewIndicatorMeshes_Inner = { "PreviewIndicatorMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PreviewIndicatorMeshes = { "PreviewIndicatorMeshes", nullptr, (EPropertyFlags)0x0040408000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, PreviewIndicatorMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewIndicatorMeshes_MetaData), NewProp_PreviewIndicatorMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Gaze, TargetMesh), Z_Construct_UClass_UMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeIndicatorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedIndicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResetOnTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundGazeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundGazeCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGazeTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGazeProgressUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewIndicatorMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewIndicatorMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Gaze Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBoxComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Gaze,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_Gaze_StaticRegisterNativesUAzr_Gaze()
{
	UClass* Class = UAzr_Gaze::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Gaze;
UClass* Z_Construct_UClass_UAzr_Gaze(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Gaze;
		if (!Z_Registration_Info_UClass_UAzr_Gaze.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Gaze"),
				Z_Registration_Info_UClass_UAzr_Gaze.InnerSingleton,
				UAzr_Gaze_StaticRegisterNativesUAzr_Gaze,
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
		return Z_Registration_Info_UClass_UAzr_Gaze.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Gaze.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Gaze.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Gaze.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Gaze);
UAzr_Gaze::~UAzr_Gaze() {}
// ********** End Class UAzr_Gaze ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Gaze_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Gaze, TEXT("UAzr_Gaze"), &Z_Registration_Info_UClass_UAzr_Gaze, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Gaze), 2491428184U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Gaze_h__Script_AzurealXR_ee0f014df77e7884a4089e738bda6ebe130df5c7{
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
