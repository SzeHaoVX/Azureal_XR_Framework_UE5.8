// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Interactable.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Interactable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APawn(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Interactable(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Interactable(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AAzr_Interactable Function DisablePointer ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Interactable_DisablePointer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Helper" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisablePointer constinit property declarations ************************
// ********** End Function DisablePointer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Interactable, nullptr, "DisablePointer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAzr_Interactable_DisablePointer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Interactable::execDisablePointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePointer();
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function DisablePointer **********************************

// ********** Begin Class AAzr_Interactable Function EnablePointer *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics
struct UHT_STATICS
{
	struct Azr_Interactable_eventEnablePointer_Parms
	{
		USceneComponent* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SHORTCUTS ---\n" },
#endif
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SHORTCUTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnablePointer constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnablePointer constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnablePointer Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventEnablePointer_Parms, Target), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnablePointer Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Interactable, nullptr, "EnablePointer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Interactable_eventEnablePointer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Interactable_eventEnablePointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_EnablePointer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Interactable::execEnablePointer)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePointer(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function EnablePointer ***********************************

// ********** Begin Class AAzr_Interactable Function GetGlobalHiveSpeed ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics
struct UHT_STATICS
{
	struct Azr_Interactable_eventGetGlobalHiveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|HiveMind" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalHiveSpeed constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalHiveSpeed constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalHiveSpeed Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventGetGlobalHiveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGlobalHiveSpeed Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Interactable, nullptr, "GetGlobalHiveSpeed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Interactable_eventGetGlobalHiveSpeed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Interactable_eventGetGlobalHiveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Interactable::execGetGlobalHiveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=AAzr_Interactable::GetGlobalHiveSpeed();
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function GetGlobalHiveSpeed ******************************

// ********** Begin Class AAzr_Interactable Function GetSnapPoint **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics
struct UHT_STATICS
{
	struct Azr_Interactable_eventGetSnapPoint_Parms
	{
		bool bIsRightHand;
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Interaction" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSnapPoint constinit property declarations **************************
	static void NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((Azr_Interactable_eventGetSnapPoint_Parms*)Obj)->bIsRightHand = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSnapPoint constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSnapPoint Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Interactable_eventGetSnapPoint_Parms), &UHT_STATICS::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventGetSnapPoint_Parms, ReturnValue), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSnapPoint Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Interactable, nullptr, "GetSnapPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Interactable_eventGetSnapPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Interactable_eventGetSnapPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Interactable::execGetSnapPoint)
{
	P_GET_UBOOL(Z_Param_bIsRightHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetSnapPoint(Z_Param_bIsRightHand);
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function GetSnapPoint ************************************

// ********** Begin Class AAzr_Interactable Function OnGrabZoneBeginOverlap ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics
struct UHT_STATICS
{
	struct Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnGrabZoneBeginOverlap constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGrabZoneBeginOverlap constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGrabZoneBeginOverlap Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms), &UHT_STATICS::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnGrabZoneBeginOverlap Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Interactable, nullptr, "OnGrabZoneBeginOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Interactable::execOnGrabZoneBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGrabZoneBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function OnGrabZoneBeginOverlap **************************

// ********** Begin Class AAzr_Interactable Function OnGrabZoneEndOverlap **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics
struct UHT_STATICS
{
	struct Azr_Interactable_eventOnGrabZoneEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnGrabZoneEndOverlap constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGrabZoneEndOverlap constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGrabZoneEndOverlap Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnGrabZoneEndOverlap Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Interactable, nullptr, "OnGrabZoneEndOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Interactable_eventOnGrabZoneEndOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Interactable_eventOnGrabZoneEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Interactable::execOnGrabZoneEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGrabZoneEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function OnGrabZoneEndOverlap ****************************

// ********** Begin Class AAzr_Interactable Function SetGlobalHiveSpeed ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics
struct UHT_STATICS
{
	struct Azr_Interactable_eventSetGlobalHiveSpeed_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|HiveMind" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGlobalHiveSpeed constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGlobalHiveSpeed constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGlobalHiveSpeed Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventSetGlobalHiveSpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGlobalHiveSpeed Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Interactable, nullptr, "SetGlobalHiveSpeed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Interactable_eventSetGlobalHiveSpeed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Interactable_eventSetGlobalHiveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AAzr_Interactable::execSetGlobalHiveSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	AAzr_Interactable::SetGlobalHiveSpeed(Z_Param_NewSpeed);
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function SetGlobalHiveSpeed ******************************

// ********** Begin Class AAzr_Interactable ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAzr_Interactable_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Azr_Interactable.h" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableShadows_MetaData[] = {
		{ "Category", "Azureal|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETTINGS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETTINGS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Azureal|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabZone_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSnap_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSnap_MetaData[] = {
		{ "Category", "Azureal|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndicatorClass_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- VISUALS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- VISUALS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAzr_Interactable constinit property declarations ************************
	static void NewProp_bForceDisableShadows_SetBit(void* Obj)
	{
		((AAzr_Interactable*)Obj)->bForceDisableShadows = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableShadows;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftSnap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightSnap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IndicatorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedIndicator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAzr_Interactable constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisablePointer"), .Pointer = &AAzr_Interactable::execDisablePointer },
		{ .NameUTF8 = UTF8TEXT("EnablePointer"), .Pointer = &AAzr_Interactable::execEnablePointer },
		{ .NameUTF8 = UTF8TEXT("GetGlobalHiveSpeed"), .Pointer = &AAzr_Interactable::execGetGlobalHiveSpeed },
		{ .NameUTF8 = UTF8TEXT("GetSnapPoint"), .Pointer = &AAzr_Interactable::execGetSnapPoint },
		{ .NameUTF8 = UTF8TEXT("OnGrabZoneBeginOverlap"), .Pointer = &AAzr_Interactable::execOnGrabZoneBeginOverlap },
		{ .NameUTF8 = UTF8TEXT("OnGrabZoneEndOverlap"), .Pointer = &AAzr_Interactable::execOnGrabZoneEndOverlap },
		{ .NameUTF8 = UTF8TEXT("SetGlobalHiveSpeed"), .Pointer = &AAzr_Interactable::execSetGlobalHiveSpeed },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAzr_Interactable_DisablePointer, "DisablePointer" }, // 6af1ab439167ccf6da78a0b815661a9169fc69ba
		{ &Z_Construct_UFunction_AAzr_Interactable_EnablePointer, "EnablePointer" }, // 7cd665e312c70ef4e3776836d4a597c75695067a
		{ &Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed, "GetGlobalHiveSpeed" }, // dad6874fa3b7406c6d21da9192b8fa911b7b8e8b
		{ &Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint, "GetSnapPoint" }, // 376d69605292f825ac6aff2a1ca226ace9a0167e
		{ &Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap, "OnGrabZoneBeginOverlap" }, // 356b7a4b8cc556728f926628bc9e63ca0a5cf1f2
		{ &Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap, "OnGrabZoneEndOverlap" }, // 02e46cbcc6c552b9f1d2a79c5457f499ee6f8bf4
		{ &Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed, "SetGlobalHiveSpeed" }, // da194965f6632b01efb4534b1e84a0f0359f9a32
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAzr_Interactable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AAzr_Interactable Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceDisableShadows = { "bForceDisableShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AAzr_Interactable), &UHT_STATICS::NewProp_bForceDisableShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDisableShadows_MetaData), NewProp_bForceDisableShadows_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, SceneRoot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GrabZone = { "GrabZone", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, GrabZone), Z_Construct_UClass_UBoxComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabZone_MetaData), NewProp_GrabZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftSnap = { "LeftSnap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, LeftSnap), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSnap_MetaData), NewProp_LeftSnap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightSnap = { "RightSnap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, RightSnap), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSnap_MetaData), NewProp_RightSnap_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_IndicatorClass = { "IndicatorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, IndicatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAzr_Indicator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicatorClass_MetaData), NewProp_IndicatorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedIndicator = { "SpawnedIndicator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, SpawnedIndicator), Z_Construct_UClass_AAzr_Indicator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedIndicator_MetaData), NewProp_SpawnedIndicator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedPlayerPawn = { "CachedPlayerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, CachedPlayerPawn), Z_Construct_UClass_APawn, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerPawn_MetaData), NewProp_CachedPlayerPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceDisableShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrabZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IndicatorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedIndicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedPlayerPawn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AAzr_Interactable Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAzr_Interactable,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AAzr_Interactable_StaticRegisterNativesAAzr_Interactable()
{
	UClass* Class = AAzr_Interactable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAzr_Interactable;
UClass* Z_Construct_UClass_AAzr_Interactable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAzr_Interactable;
		if (!Z_Registration_Info_UClass_AAzr_Interactable.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Interactable"),
				Z_Registration_Info_UClass_AAzr_Interactable.InnerSingleton,
				AAzr_Interactable_StaticRegisterNativesAAzr_Interactable,
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
		return Z_Registration_Info_UClass_AAzr_Interactable.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAzr_Interactable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAzr_Interactable.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAzr_Interactable.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAzr_Interactable);
AAzr_Interactable::~AAzr_Interactable() {}
// ********** End Class AAzr_Interactable **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAzr_Interactable, TEXT("AAzr_Interactable"), &Z_Registration_Info_UClass_AAzr_Interactable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAzr_Interactable), 3755880360U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h__Script_AzurealXR_163dfc065028705214ebc9ba38fd61c5498ca91e{
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
