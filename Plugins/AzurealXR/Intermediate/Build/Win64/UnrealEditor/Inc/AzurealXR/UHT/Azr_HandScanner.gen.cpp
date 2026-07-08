// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_HandScanner.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_HandScanner() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandScanner(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandScanner(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Latch(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzr_HandScanner Function OnCapsuleEndOverlap ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics
struct UHT_STATICS
{
	struct Azr_HandScanner_eventOnCapsuleEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCapsuleEndOverlap constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCapsuleEndOverlap constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCapsuleEndOverlap Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnCapsuleEndOverlap Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_HandScanner, nullptr, "OnCapsuleEndOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_HandScanner_eventOnCapsuleEndOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_HandScanner_eventOnCapsuleEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_HandScanner::execOnCapsuleEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCapsuleEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function OnCapsuleEndOverlap ******************************

// ********** Begin Class UAzr_HandScanner Function OnCapsuleOverlap *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics
struct UHT_STATICS
{
	struct Azr_HandScanner_eventOnCapsuleOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
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

// ********** Begin Function OnCapsuleOverlap constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Azr_HandScanner_eventOnCapsuleOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCapsuleOverlap constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCapsuleOverlap Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_HandScanner_eventOnCapsuleOverlap_Parms), &UHT_STATICS::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnCapsuleOverlap Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_HandScanner, nullptr, "OnCapsuleOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_HandScanner_eventOnCapsuleOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_HandScanner_eventOnCapsuleOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_HandScanner::execOnCapsuleOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCapsuleOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function OnCapsuleOverlap *********************************

// ********** Begin Class UAzr_HandScanner Function OnDistanceCapsuleEndOverlap ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_HandScanner_OnDistanceCapsuleEndOverlap_Statics
struct UHT_STATICS
{
	struct Azr_HandScanner_eventOnDistanceCapsuleEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDistanceCapsuleEndOverlap constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDistanceCapsuleEndOverlap constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDistanceCapsuleEndOverlap Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnDistanceCapsuleEndOverlap Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_HandScanner, nullptr, "OnDistanceCapsuleEndOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_HandScanner_eventOnDistanceCapsuleEndOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_HandScanner_eventOnDistanceCapsuleEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_OnDistanceCapsuleEndOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_HandScanner::execOnDistanceCapsuleEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDistanceCapsuleEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function OnDistanceCapsuleEndOverlap **********************

// ********** Begin Class UAzr_HandScanner Function OnDistanceCapsuleOverlap ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_HandScanner_OnDistanceCapsuleOverlap_Statics
struct UHT_STATICS
{
	struct Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
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

// ********** Begin Function OnDistanceCapsuleOverlap constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDistanceCapsuleOverlap constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDistanceCapsuleOverlap Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms), &UHT_STATICS::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnDistanceCapsuleOverlap Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_HandScanner, nullptr, "OnDistanceCapsuleOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_HandScanner_eventOnDistanceCapsuleOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_OnDistanceCapsuleOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_HandScanner::execOnDistanceCapsuleOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDistanceCapsuleOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function OnDistanceCapsuleOverlap *************************

// ********** Begin Class UAzr_HandScanner Function ProcessGrabInput *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics
struct UHT_STATICS
{
	struct Azr_HandScanner_eventProcessGrabInput_Parms
	{
		bool bIsPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INPUT API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INPUT API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessGrabInput constinit property declarations **********************
	static void NewProp_bIsPressed_SetBit(void* Obj)
	{
		((Azr_HandScanner_eventProcessGrabInput_Parms*)Obj)->bIsPressed = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessGrabInput constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessGrabInput Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_HandScanner_eventProcessGrabInput_Parms), &UHT_STATICS::NewProp_bIsPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsPressed,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ProcessGrabInput Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_HandScanner, nullptr, "ProcessGrabInput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_HandScanner_eventProcessGrabInput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_HandScanner_eventProcessGrabInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_HandScanner::execProcessGrabInput)
{
	P_GET_UBOOL(Z_Param_bIsPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessGrabInput(Z_Param_bIsPressed);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function ProcessGrabInput *********************************

// ********** Begin Class UAzr_HandScanner *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_HandScanner_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Azr_HandScanner.h" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractProfile_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightHand_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractCapsuleRadius_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Close-range interact capsule: Radius = width, Half Height = length.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Close-range interact capsule: Radius = width, Half Height = length." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractCapsuleHalfHeight_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceCapsuleRadius_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward-facing distance-grab capsule: Radius = width, Length = half height (how far it reaches).\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward-facing distance-grab capsule: Radius = width, Length = half height (how far it reaches)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceCapsuleLength_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugVisuals_MetaData[] = {
		{ "Category", "Azureal|Debug" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractCapsule_MetaData[] = {
		{ "Category", "Azureal|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- COMPONENTS ---\n// IMPORTANT: these are NOT default subobjects. They are created at runtime in BeginPlay\n// (NewObject + RegisterComponent). Creating them as default subobjects in the constructor\n// caused a UE 5.8 \"Template Mismatch during attachment\" ensure on Blueprint subclasses\n// (e.g. BP_Azr_Pawn): the scanner is itself a subobject, and a nested subobject's AttachParent\n// fails to remap from the CDO scanner to the per-instance scanner. Runtime creation avoids that.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- COMPONENTS ---\nIMPORTANT: these are NOT default subobjects. They are created at runtime in BeginPlay\n(NewObject + RegisterComponent). Creating them as default subobjects in the constructor\ncaused a UE 5.8 \"Template Mismatch during attachment\" ensure on Blueprint subclasses\n(e.g. BP_Azr_Pawn): the scanner is itself a subobject, and a nested subobject's AttachParent\nfails to remap from the CDO scanner to the per-instance scanner. Runtime creation avoids that." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceGrabCapsule_MetaData[] = {
		{ "Category", "Azureal|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward-facing capsule used only for Distance Grab detection.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward-facing capsule used only for Distance Grab detection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHoveredComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeldComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHoveredLatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeldLatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_HandScanner constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InteractProfile;
	static void NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((UAzr_HandScanner*)Obj)->bIsRightHand = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractCapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractCapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceCapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceCapsuleLength;
	static void NewProp_bShowDebugVisuals_SetBit(void* Obj)
	{
		((UAzr_HandScanner*)Obj)->bShowDebugVisuals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugVisuals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceGrabCapsule;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHoveredComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHeldComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHoveredLatch;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHeldLatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_HandScanner constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnCapsuleEndOverlap"), .Pointer = &UAzr_HandScanner::execOnCapsuleEndOverlap },
		{ .NameUTF8 = UTF8TEXT("OnCapsuleOverlap"), .Pointer = &UAzr_HandScanner::execOnCapsuleOverlap },
		{ .NameUTF8 = UTF8TEXT("OnDistanceCapsuleEndOverlap"), .Pointer = &UAzr_HandScanner::execOnDistanceCapsuleEndOverlap },
		{ .NameUTF8 = UTF8TEXT("OnDistanceCapsuleOverlap"), .Pointer = &UAzr_HandScanner::execOnDistanceCapsuleOverlap },
		{ .NameUTF8 = UTF8TEXT("ProcessGrabInput"), .Pointer = &UAzr_HandScanner::execProcessGrabInput },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap, "OnCapsuleEndOverlap" }, // 1faf09f44ccf5efc7d46081a224d0f3120d7382a
		{ &Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap, "OnCapsuleOverlap" }, // 58d81a1f3d391d32428688282c219d0fbf7cae79
		{ &Z_Construct_UFunction_UAzr_HandScanner_OnDistanceCapsuleEndOverlap, "OnDistanceCapsuleEndOverlap" }, // 41053c39320de4d1da6de32f7c1d8f453b2aba96
		{ &Z_Construct_UFunction_UAzr_HandScanner_OnDistanceCapsuleOverlap, "OnDistanceCapsuleOverlap" }, // 2e0c60ef28f95894eeed9f16079ff1b39b8ba1e3
		{ &Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput, "ProcessGrabInput" }, // 4bc61e45f7e22ab2191d62c0effd1a2f3894aee4
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_HandScanner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_HandScanner Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_InteractProfile = { "InteractProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, InteractProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractProfile_MetaData), NewProp_InteractProfile_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_HandScanner), &UHT_STATICS::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRightHand_MetaData), NewProp_bIsRightHand_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InteractCapsuleRadius = { "InteractCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, InteractCapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractCapsuleRadius_MetaData), NewProp_InteractCapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InteractCapsuleHalfHeight = { "InteractCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, InteractCapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractCapsuleHalfHeight_MetaData), NewProp_InteractCapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DistanceCapsuleRadius = { "DistanceCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, DistanceCapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceCapsuleRadius_MetaData), NewProp_DistanceCapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DistanceCapsuleLength = { "DistanceCapsuleLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, DistanceCapsuleLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceCapsuleLength_MetaData), NewProp_DistanceCapsuleLength_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowDebugVisuals = { "bShowDebugVisuals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_HandScanner), &UHT_STATICS::NewProp_bShowDebugVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugVisuals_MetaData), NewProp_bShowDebugVisuals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InteractCapsule = { "InteractCapsule", nullptr, (EPropertyFlags)0x001000000008201c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, InteractCapsule), Z_Construct_UClass_UCapsuleComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractCapsule_MetaData), NewProp_InteractCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DistanceGrabCapsule = { "DistanceGrabCapsule", nullptr, (EPropertyFlags)0x001000000008201c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, DistanceGrabCapsule), Z_Construct_UClass_UCapsuleComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceGrabCapsule_MetaData), NewProp_DistanceGrabCapsule_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_CurrentHoveredComponent = { "CurrentHoveredComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHoveredComponent), Z_Construct_UClass_UAzr_Grab, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHoveredComponent_MetaData), NewProp_CurrentHoveredComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_CurrentHeldComponent = { "CurrentHeldComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHeldComponent), Z_Construct_UClass_UAzr_Grab, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeldComponent_MetaData), NewProp_CurrentHeldComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_CurrentHoveredLatch = { "CurrentHoveredLatch", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHoveredLatch), Z_Construct_UClass_UAzr_Latch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHoveredLatch_MetaData), NewProp_CurrentHoveredLatch_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_CurrentHeldLatch = { "CurrentHeldLatch", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHeldLatch), Z_Construct_UClass_UAzr_Latch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeldLatch_MetaData), NewProp_CurrentHeldLatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractCapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractCapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceCapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceCapsuleLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowDebugVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceGrabCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHoveredComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHeldComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHoveredLatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentHeldLatch,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_HandScanner Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_HandScanner,
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
static void UAzr_HandScanner_StaticRegisterNativesUAzr_HandScanner()
{
	UClass* Class = UAzr_HandScanner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_HandScanner;
UClass* Z_Construct_UClass_UAzr_HandScanner(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_HandScanner;
		if (!Z_Registration_Info_UClass_UAzr_HandScanner.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_HandScanner"),
				Z_Registration_Info_UClass_UAzr_HandScanner.InnerSingleton,
				UAzr_HandScanner_StaticRegisterNativesUAzr_HandScanner,
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
		return Z_Registration_Info_UClass_UAzr_HandScanner.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_HandScanner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_HandScanner.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_HandScanner.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_HandScanner);
UAzr_HandScanner::~UAzr_HandScanner() {}
// ********** End Class UAzr_HandScanner ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_HandScanner, TEXT("UAzr_HandScanner"), &Z_Registration_Info_UClass_UAzr_HandScanner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_HandScanner), 3601771103U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h__Script_AzurealXR_01af6ce683b7059c4e233b7e358589efeb7a6a65{
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
