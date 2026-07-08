// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Interactable.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Interactable() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator_NoRegister();
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Interactable();
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Interactable_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAzr_Interactable Function DisablePointer ********************************
struct Z_Construct_UFunction_AAzr_Interactable_DisablePointer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Helper" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisablePointer constinit property declarations ************************
// ********** End Function DisablePointer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Interactable_DisablePointer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Interactable, nullptr, "DisablePointer", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_DisablePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Interactable_DisablePointer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAzr_Interactable_DisablePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Interactable_DisablePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAzr_Interactable::execDisablePointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePointer();
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function DisablePointer **********************************

// ********** Begin Class AAzr_Interactable Function EnablePointer *********************************
struct Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics
{
	struct Azr_Interactable_eventEnablePointer_Parms
	{
		USceneComponent* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventEnablePointer_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::PropPointers) < 2048);
// ********** End Function EnablePointer Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Interactable, nullptr, "EnablePointer", 	Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::Azr_Interactable_eventEnablePointer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::Azr_Interactable_eventEnablePointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_EnablePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Interactable_EnablePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics
{
	struct Azr_Interactable_eventGetGlobalHiveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventGetGlobalHiveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::PropPointers) < 2048);
// ********** End Function GetGlobalHiveSpeed Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Interactable, nullptr, "GetGlobalHiveSpeed", 	Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::Azr_Interactable_eventGetGlobalHiveSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::Azr_Interactable_eventGetGlobalHiveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAzr_Interactable::execGetGlobalHiveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=AAzr_Interactable::GetGlobalHiveSpeed();
	P_NATIVE_END;
}
// ********** End Class AAzr_Interactable Function GetGlobalHiveSpeed ******************************

// ********** Begin Class AAzr_Interactable Function GetSnapPoint **********************************
struct Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics
{
	struct Azr_Interactable_eventGetSnapPoint_Parms
	{
		bool bIsRightHand;
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Interaction" },
		{ "ModuleRelativePath", "Public/Azr_Interactable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSnapPoint constinit property declarations **************************
	static void NewProp_bIsRightHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSnapPoint constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSnapPoint Property Definitions *************************************
void Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
{
	((Azr_Interactable_eventGetSnapPoint_Parms*)Obj)->bIsRightHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Interactable_eventGetSnapPoint_Parms), &Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventGetSnapPoint_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::NewProp_bIsRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::PropPointers) < 2048);
// ********** End Function GetSnapPoint Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Interactable, nullptr, "GetSnapPoint", 	Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::Azr_Interactable_eventGetSnapPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::Azr_Interactable_eventGetSnapPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnGrabZoneBeginOverlap constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnGrabZoneBeginOverlap Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms), &Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnGrabZoneBeginOverlap Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Interactable, nullptr, "OnGrabZoneBeginOverlap", 	Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::Azr_Interactable_eventOnGrabZoneBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics
{
	struct Azr_Interactable_eventOnGrabZoneEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventOnGrabZoneEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnGrabZoneEndOverlap Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Interactable, nullptr, "OnGrabZoneEndOverlap", 	Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::Azr_Interactable_eventOnGrabZoneEndOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::Azr_Interactable_eventOnGrabZoneEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics
{
	struct Azr_Interactable_eventSetGlobalHiveSpeed_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Interactable_eventSetGlobalHiveSpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::PropPointers) < 2048);
// ********** End Function SetGlobalHiveSpeed Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Interactable, nullptr, "SetGlobalHiveSpeed", 	Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::Azr_Interactable_eventSetGlobalHiveSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::Azr_Interactable_eventSetGlobalHiveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
FClassRegistrationInfo Z_Registration_Info_UClass_AAzr_Interactable;
UClass* AAzr_Interactable::GetPrivateStaticClass()
{
	using TClass = AAzr_Interactable;
	if (!Z_Registration_Info_UClass_AAzr_Interactable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Interactable"),
			Z_Registration_Info_UClass_AAzr_Interactable.InnerSingleton,
			StaticRegisterNativesAAzr_Interactable,
			sizeof(TClass),
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
UClass* Z_Construct_UClass_AAzr_Interactable_NoRegister()
{
	return AAzr_Interactable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAzr_Interactable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
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
	static void NewProp_bForceDisableShadows_SetBit(void* Obj);
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
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAzr_Interactable_DisablePointer, "DisablePointer" }, // 605617610
		{ &Z_Construct_UFunction_AAzr_Interactable_EnablePointer, "EnablePointer" }, // 1704834700
		{ &Z_Construct_UFunction_AAzr_Interactable_GetGlobalHiveSpeed, "GetGlobalHiveSpeed" }, // 4124268687
		{ &Z_Construct_UFunction_AAzr_Interactable_GetSnapPoint, "GetSnapPoint" }, // 1091265903
		{ &Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneBeginOverlap, "OnGrabZoneBeginOverlap" }, // 3086039666
		{ &Z_Construct_UFunction_AAzr_Interactable_OnGrabZoneEndOverlap, "OnGrabZoneEndOverlap" }, // 4291413624
		{ &Z_Construct_UFunction_AAzr_Interactable_SetGlobalHiveSpeed, "SetGlobalHiveSpeed" }, // 743736435
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAzr_Interactable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAzr_Interactable_Statics

// ********** Begin Class AAzr_Interactable Property Definitions ***********************************
void Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_bForceDisableShadows_SetBit(void* Obj)
{
	((AAzr_Interactable*)Obj)->bForceDisableShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_bForceDisableShadows = { "bForceDisableShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAzr_Interactable), &Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_bForceDisableShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDisableShadows_MetaData), NewProp_bForceDisableShadows_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_GrabZone = { "GrabZone", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, GrabZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabZone_MetaData), NewProp_GrabZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_LeftSnap = { "LeftSnap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, LeftSnap), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSnap_MetaData), NewProp_LeftSnap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_RightSnap = { "RightSnap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, RightSnap), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSnap_MetaData), NewProp_RightSnap_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_IndicatorClass = { "IndicatorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, IndicatorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AAzr_Indicator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicatorClass_MetaData), NewProp_IndicatorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_SpawnedIndicator = { "SpawnedIndicator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, SpawnedIndicator), Z_Construct_UClass_AAzr_Indicator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedIndicator_MetaData), NewProp_SpawnedIndicator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_CachedPlayerPawn = { "CachedPlayerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAzr_Interactable, CachedPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerPawn_MetaData), NewProp_CachedPlayerPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAzr_Interactable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_bForceDisableShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_GrabZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_LeftSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_RightSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_IndicatorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_SpawnedIndicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAzr_Interactable_Statics::NewProp_CachedPlayerPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Interactable_Statics::PropPointers) < 2048);
// ********** End Class AAzr_Interactable Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AAzr_Interactable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Interactable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAzr_Interactable_Statics::ClassParams = {
	&AAzr_Interactable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAzr_Interactable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Interactable_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Interactable_Statics::Class_MetaDataParams), Z_Construct_UClass_AAzr_Interactable_Statics::Class_MetaDataParams)
};
void AAzr_Interactable::StaticRegisterNativesAAzr_Interactable()
{
	UClass* Class = AAzr_Interactable::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AAzr_Interactable_Statics::Funcs));
}
UClass* Z_Construct_UClass_AAzr_Interactable()
{
	if (!Z_Registration_Info_UClass_AAzr_Interactable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAzr_Interactable.OuterSingleton, Z_Construct_UClass_AAzr_Interactable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAzr_Interactable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAzr_Interactable);
AAzr_Interactable::~AAzr_Interactable() {}
// ********** End Class AAzr_Interactable **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h__Script_AzurealXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAzr_Interactable, AAzr_Interactable::StaticClass, TEXT("AAzr_Interactable"), &Z_Registration_Info_UClass_AAzr_Interactable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAzr_Interactable), 1541053261U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h__Script_AzurealXR_3975005809{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Interactable_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
