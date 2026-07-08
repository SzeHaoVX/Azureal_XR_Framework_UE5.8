// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Touch.h"
#include "Azr_Types.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Touch() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APawn(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Touch(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnTouchStateEvent__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Touch(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_TouchZone(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnTouchStateEvent ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_OnTouchStateEvent__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTouchStateEvent constinit property declarations ********************
// ********** End Delegate FOnTouchStateEvent constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "OnTouchStateEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnTouchStateEvent__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTouchStateEvent ******************************************************

// ********** Begin Class UAzr_Touch Function DisableTouch *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Touch_DisableTouch_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableTouch constinit property declarations **************************
// ********** End Function DisableTouch constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Touch, nullptr, "DisableTouch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Touch_DisableTouch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Touch::execDisableTouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableTouch();
	P_NATIVE_END;
}
// ********** End Class UAzr_Touch Function DisableTouch *******************************************

// ********** Begin Class UAzr_Touch Function EnableTouch ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Touch_EnableTouch_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableTouch constinit property declarations ***************************
// ********** End Function EnableTouch constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Touch, nullptr, "EnableTouch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Touch_EnableTouch(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Touch::execEnableTouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableTouch();
	P_NATIVE_END;
}
// ********** End Class UAzr_Touch Function EnableTouch ********************************************

// ********** Begin Class UAzr_Touch Function OnTouchZoneBeginOverlap ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Touch_OnTouchZoneBeginOverlap_Statics
struct UHT_STATICS
{
	struct Azr_Touch_eventOnTouchZoneBeginOverlap_Parms
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- OVERLAP HANDLERS ---\n// Bound to the LinkedTouchZone's delegates in BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- OVERLAP HANDLERS ---\nBound to the LinkedTouchZone's delegates in BeginPlay" },
#endif
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

// ********** Begin Function OnTouchZoneBeginOverlap constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Azr_Touch_eventOnTouchZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnTouchZoneBeginOverlap constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnTouchZoneBeginOverlap Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Touch_eventOnTouchZoneBeginOverlap_Parms), &UHT_STATICS::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnTouchZoneBeginOverlap Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Touch, nullptr, "OnTouchZoneBeginOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Touch_eventOnTouchZoneBeginOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Touch_eventOnTouchZoneBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Touch_OnTouchZoneBeginOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Touch::execOnTouchZoneBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTouchZoneBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UAzr_Touch Function OnTouchZoneBeginOverlap ********************************

// ********** Begin Class UAzr_Touch Function OnTouchZoneEndOverlap ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Touch_OnTouchZoneEndOverlap_Statics
struct UHT_STATICS
{
	struct Azr_Touch_eventOnTouchZoneEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnTouchZoneEndOverlap constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnTouchZoneEndOverlap constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnTouchZoneEndOverlap Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Touch_eventOnTouchZoneEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnTouchZoneEndOverlap Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Touch, nullptr, "OnTouchZoneEndOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Touch_eventOnTouchZoneEndOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Touch_eventOnTouchZoneEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Touch_OnTouchZoneEndOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Touch::execOnTouchZoneEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTouchZoneEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class UAzr_Touch Function OnTouchZoneEndOverlap **********************************

// ********** Begin Class UAzr_Touch ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Touch_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_Touch\n * The \"Logic Brain\" for touch interactions.\n * Searches for a physical Azr_TouchZone via InteractID and manages visuals/events.\n */" },
#endif
		{ "DisplayName", "Azr Touch Logic" },
		{ "IncludePath", "Azr_Touch.h" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_Touch\nThe \"Logic Brain\" for touch interactions.\nSearches for a physical Azr_TouchZone via InteractID and manages visuals/events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Touch Configuration|Linking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- LINKING ---\n// Matches the InteractID on the Azr_TouchZone to establish a connection.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- LINKING ---\nMatches the InteractID on the Azr_TouchZone to establish a connection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshName_MetaData[] = {
		{ "Category", "Touch Configuration|Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETUP ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETUP ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[] = {
		{ "Category", "Touch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightSpeed_MetaData[] = {
		{ "Category", "Touch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherSettings_MetaData[] = {
		{ "Category", "Touch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchDescription_MetaData[] = {
		{ "Category", "Touch Configuration|Setup" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticOnTouch_MetaData[] = {
		{ "Category", "Touch Configuration|Haptics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HAPTICS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HAPTICS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightStart_MetaData[] = {
		{ "Category", "Touch Configuration|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- AUDIO ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- AUDIO ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundHighlightEnd_MetaData[] = {
		{ "Category", "Touch Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnTouch_MetaData[] = {
		{ "Category", "Touch Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundOnUntouch_MetaData[] = {
		{ "Category", "Touch Configuration|Audio" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTouched_MetaData[] = {
		{ "Category", "Azureal|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUntouched_MetaData[] = {
		{ "Category", "Azureal|Events" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnchor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INTERNAL VISUALS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INTERNAL VISUALS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherCable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMPC_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HIGHLIGHT ENGINE ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HIGHLIGHT ENGINE ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveHands_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHandleMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoDetectedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTouchZone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_Touch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Touch constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetMeshName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TouchDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticOnTouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundHighlightEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnTouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundOnUntouch;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUntouched;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TetherCable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveHands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveHands;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHandleMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoDetectedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedTouchZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Touch constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableTouch"), .Pointer = &UAzr_Touch::execDisableTouch },
		{ .NameUTF8 = UTF8TEXT("EnableTouch"), .Pointer = &UAzr_Touch::execEnableTouch },
		{ .NameUTF8 = UTF8TEXT("OnTouchZoneBeginOverlap"), .Pointer = &UAzr_Touch::execOnTouchZoneBeginOverlap },
		{ .NameUTF8 = UTF8TEXT("OnTouchZoneEndOverlap"), .Pointer = &UAzr_Touch::execOnTouchZoneEndOverlap },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Touch_DisableTouch, "DisableTouch" }, // d2a53aee70b095cf343e37d43d8c65a878b4e164
		{ &Z_Construct_UFunction_UAzr_Touch_EnableTouch, "EnableTouch" }, // 2df11235e8f08e11459563c62d3cf2918ff17f85
		{ &Z_Construct_UFunction_UAzr_Touch_OnTouchZoneBeginOverlap, "OnTouchZoneBeginOverlap" }, // 1495f42ef68ccdfc810fda902308508508c79274
		{ &Z_Construct_UFunction_UAzr_Touch_OnTouchZoneEndOverlap, "OnTouchZoneEndOverlap" }, // b86a7393035b023b64b057b1222fb6e57e4eec12
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Touch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Touch Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetMeshName = { "TargetMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, TargetMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshName_MetaData), NewProp_TargetMeshName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, HighlightMode), Z_Construct_UEnum_AzurealXR_EAzr_HighlightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMode_MetaData), NewProp_HighlightMode_MetaData) }; // b89e1d1bf6c66a6d04c6838e8255ec9637161cd7
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HighlightSpeed = { "HighlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, HighlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightSpeed_MetaData), NewProp_HighlightSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // fb5a713d666a24a11bdd9b60341f31d15bb45b94
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_TouchDescription = { "TouchDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, TouchDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchDescription_MetaData), NewProp_TouchDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HapticOnTouch = { "HapticOnTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, HapticOnTouch), Z_Construct_UClass_UHapticFeedbackEffect_Base, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticOnTouch_MetaData), NewProp_HapticOnTouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightStart = { "SoundHighlightStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, SoundHighlightStart), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightStart_MetaData), NewProp_SoundHighlightStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundHighlightEnd = { "SoundHighlightEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, SoundHighlightEnd), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundHighlightEnd_MetaData), NewProp_SoundHighlightEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnTouch = { "SoundOnTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, SoundOnTouch), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnTouch_MetaData), NewProp_SoundOnTouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SoundOnUntouch = { "SoundOnUntouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, SoundOnUntouch), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundOnUntouch_MetaData), NewProp_SoundOnUntouch_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTouched = { "OnTouched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, OnTouched), Z_Construct_UDelegateFunction_AzurealXR_OnTouchStateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTouched_MetaData), NewProp_OnTouched_MetaData) }; // 4f3aa79f3981cdec08f5ae152409d3c537899dfb
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnUntouched = { "OnUntouched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, OnUntouched), Z_Construct_UDelegateFunction_AzurealXR_OnTouchStateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUntouched_MetaData), NewProp_OnUntouched_MetaData) }; // 4f3aa79f3981cdec08f5ae152409d3c537899dfb
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, StartAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, EndAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, TetherCable), Z_Construct_UClass_UCableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HighlightMPC = { "HighlightMPC", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, HighlightMPC), Z_Construct_UClass_UMaterialParameterCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMPC_MetaData), NewProp_HighlightMPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveHands_Inner = { "ActiveHands", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveHands = { "ActiveHands", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, ActiveHands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveHands_MetaData), NewProp_ActiveHands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetHandleMesh = { "TargetHandleMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, TargetHandleMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHandleMesh_MetaData), NewProp_TargetHandleMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AutoDetectedMesh = { "AutoDetectedMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, AutoDetectedMesh), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDetectedMesh_MetaData), NewProp_AutoDetectedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentTargetWidget = { "CurrentTargetWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, CurrentTargetWidget), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetWidget_MetaData), NewProp_CurrentTargetWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LinkedTouchZone = { "LinkedTouchZone", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, LinkedTouchZone), Z_Construct_UClass_UAzr_TouchZone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedTouchZone_MetaData), NewProp_LinkedTouchZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedPlayerPawn = { "CachedPlayerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Touch, CachedPlayerPawn), Z_Construct_UClass_APawn, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerPawn_MetaData), NewProp_CachedPlayerPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TouchDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HapticOnTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundHighlightEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SoundOnUntouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnUntouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighlightMPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveHands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetHandleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutoDetectedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTargetWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinkedTouchZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedPlayerPawn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Touch Property Definitions ********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Touch,
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
static void UAzr_Touch_StaticRegisterNativesUAzr_Touch()
{
	UClass* Class = UAzr_Touch::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Touch;
UClass* Z_Construct_UClass_UAzr_Touch(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Touch;
		if (!Z_Registration_Info_UClass_UAzr_Touch.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Touch"),
				Z_Registration_Info_UClass_UAzr_Touch.InnerSingleton,
				UAzr_Touch_StaticRegisterNativesUAzr_Touch,
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
		return Z_Registration_Info_UClass_UAzr_Touch.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Touch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Touch.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Touch.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Touch);
UAzr_Touch::~UAzr_Touch() {}
// ********** End Class UAzr_Touch *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Touch, TEXT("UAzr_Touch"), &Z_Registration_Info_UClass_UAzr_Touch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Touch), 2450987069U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Touch_h__Script_AzurealXR_aab6f89e2c1162fd7fb9ddd764fdd2e719c289bf{
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
