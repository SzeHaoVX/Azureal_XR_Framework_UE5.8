// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_AttachTarget.h"
#include "Azr_Types.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_AttachTarget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USphereComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AttachTarget(ETypeConstructPhase);
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_TetherConfig(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_AttachTarget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzr_AttachTarget Function NotifyObjectDetached **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AttachTarget_NotifyObjectDetached_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Called by Azr_Grab when the object is pulled out (Silent Detach)\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Called by Azr_Grab when the object is pulled out (Silent Detach)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyObjectDetached constinit property declarations ******************
// ********** End Function NotifyObjectDetached constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AttachTarget, nullptr, "NotifyObjectDetached", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_AttachTarget_NotifyObjectDetached(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AttachTarget::execNotifyObjectDetached)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyObjectDetached();
	P_NATIVE_END;
}
// ********** End Class UAzr_AttachTarget Function NotifyObjectDetached ****************************

// ********** Begin Class UAzr_AttachTarget Function OnTriggerOverlap ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AttachTarget_OnTriggerOverlap_Statics
struct UHT_STATICS
{
	struct Azr_AttachTarget_eventOnTriggerOverlap_Parms
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
		{ "Comment", "// Overlap Event\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap Event" },
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

// ********** Begin Function OnTriggerOverlap constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Azr_AttachTarget_eventOnTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnTriggerOverlap constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnTriggerOverlap Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AttachTarget_eventOnTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AttachTarget_eventOnTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AttachTarget_eventOnTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AttachTarget_eventOnTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_AttachTarget_eventOnTriggerOverlap_Parms), &UHT_STATICS::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_AttachTarget_eventOnTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnTriggerOverlap Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AttachTarget, nullptr, "OnTriggerOverlap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AttachTarget_eventOnTriggerOverlap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AttachTarget_eventOnTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AttachTarget_OnTriggerOverlap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AttachTarget::execOnTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UAzr_AttachTarget Function OnTriggerOverlap ********************************

// ********** Begin Class UAzr_AttachTarget Function SetGhostVisibility ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AttachTarget_SetGhostVisibility_Statics
struct UHT_STATICS
{
	struct Azr_AttachTarget_eventSetGhostVisibility_Parms
	{
		bool bShouldBeVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGhostVisibility constinit property declarations ********************
	static void NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((Azr_AttachTarget_eventSetGhostVisibility_Parms*)Obj)->bShouldBeVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGhostVisibility constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGhostVisibility Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_AttachTarget_eventSetGhostVisibility_Parms), &UHT_STATICS::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShouldBeVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetGhostVisibility Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AttachTarget, nullptr, "SetGhostVisibility", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AttachTarget_eventSetGhostVisibility_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AttachTarget_eventSetGhostVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AttachTarget_SetGhostVisibility(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AttachTarget::execSetGhostVisibility)
{
	P_GET_UBOOL(Z_Param_bShouldBeVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGhostVisibility(Z_Param_bShouldBeVisible);
	P_NATIVE_END;
}
// ********** End Class UAzr_AttachTarget Function SetGhostVisibility ******************************

// ********** Begin Class UAzr_AttachTarget Function SetSlotFilled *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_AttachTarget_SetSlotFilled_Statics
struct UHT_STATICS
{
	struct Azr_AttachTarget_eventSetSlotFilled_Parms
	{
		bool bFilled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSlotFilled constinit property declarations *************************
	static void NewProp_bFilled_SetBit(void* Obj)
	{
		((Azr_AttachTarget_eventSetSlotFilled_Parms*)Obj)->bFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSlotFilled constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSlotFilled Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilled = { "bFilled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_AttachTarget_eventSetSlotFilled_Parms), &UHT_STATICS::NewProp_bFilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSlotFilled Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_AttachTarget, nullptr, "SetSlotFilled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_AttachTarget_eventSetSlotFilled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_AttachTarget_eventSetSlotFilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_AttachTarget_SetSlotFilled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_AttachTarget::execSetSlotFilled)
{
	P_GET_UBOOL(Z_Param_bFilled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSlotFilled(Z_Param_bFilled);
	P_NATIVE_END;
}
// ********** End Class UAzr_AttachTarget Function SetSlotFilled ***********************************

// ********** Begin Class UAzr_AttachTarget ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_AttachTarget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Azr_AttachTarget.h" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleClass_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REQUIRED: Defines which Actor class (logic) is allowed in this socket.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REQUIRED: Defines which Actor class (logic) is allowed in this socket." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomGhostMesh_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OPTIONAL: If set, uses this specific mesh for the ghost. If empty, it copies the mesh from CompatibleClass.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OPTIONAL: If set, uses this specific mesh for the ghost. If empty, it copies the mesh from CompatibleClass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSequenceID_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapRadius_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnetSpeed_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherSettings_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachDescription_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostMaterial_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFilled_MetaData[] = {
		{ "Category", "Azureal|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STATE ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STATE ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerSphere_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GhostMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherCable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCameraManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OPTIMIZATION: Cache camera to avoid finding it every Tick\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_AttachTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OPTIMIZATION: Cache camera to avoid finding it every Tick" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_AttachTarget constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_CompatibleClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomGhostMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttachSequenceID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MagnetSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TetherSettings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AttachDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostMaterial;
	static void NewProp_bIsFilled_SetBit(void* Obj)
	{
		((UAzr_AttachTarget*)Obj)->bIsFilled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFilled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GhostMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndAnchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TetherCable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCameraManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_AttachTarget constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("NotifyObjectDetached"), .Pointer = &UAzr_AttachTarget::execNotifyObjectDetached },
		{ .NameUTF8 = UTF8TEXT("OnTriggerOverlap"), .Pointer = &UAzr_AttachTarget::execOnTriggerOverlap },
		{ .NameUTF8 = UTF8TEXT("SetGhostVisibility"), .Pointer = &UAzr_AttachTarget::execSetGhostVisibility },
		{ .NameUTF8 = UTF8TEXT("SetSlotFilled"), .Pointer = &UAzr_AttachTarget::execSetSlotFilled },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_AttachTarget_NotifyObjectDetached, "NotifyObjectDetached" }, // a630187a37eb0c185b5178c724a6d8a89b02c5f8
		{ &Z_Construct_UFunction_UAzr_AttachTarget_OnTriggerOverlap, "OnTriggerOverlap" }, // 31732416881f73e0334e71c492ba4b5dfe60e2aa
		{ &Z_Construct_UFunction_UAzr_AttachTarget_SetGhostVisibility, "SetGhostVisibility" }, // fdb98a2b15d03a279e37201e7b98bcce45b21e03
		{ &Z_Construct_UFunction_UAzr_AttachTarget_SetSlotFilled, "SetSlotFilled" }, // 934f777b8c88c2dbc3c6150602e40d68e043a5ce
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_AttachTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_AttachTarget Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CompatibleClass = { "CompatibleClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, CompatibleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleClass_MetaData), NewProp_CompatibleClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomGhostMesh = { "CustomGhostMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, CustomGhostMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomGhostMesh_MetaData), NewProp_CustomGhostMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AttachSequenceID = { "AttachSequenceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, AttachSequenceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSequenceID_MetaData), NewProp_AttachSequenceID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SnapRadius = { "SnapRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, SnapRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapRadius_MetaData), NewProp_SnapRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MagnetSpeed = { "MagnetSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, MagnetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnetSpeed_MetaData), NewProp_MagnetSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TetherSettings = { "TetherSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, TetherSettings), Z_Construct_UScriptStruct_FAzr_TetherConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherSettings_MetaData), NewProp_TetherSettings_MetaData) }; // fb5a713d666a24a11bdd9b60341f31d15bb45b94
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_AttachDescription = { "AttachDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, AttachDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachDescription_MetaData), NewProp_AttachDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GhostMaterial = { "GhostMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, GhostMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostMaterial_MetaData), NewProp_GhostMaterial_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsFilled = { "bIsFilled", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_AttachTarget), &UHT_STATICS::NewProp_bIsFilled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFilled_MetaData), NewProp_bIsFilled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TriggerSphere = { "TriggerSphere", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, TriggerSphere), Z_Construct_UClass_USphereComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerSphere_MetaData), NewProp_TriggerSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GhostMeshes_Inner = { "GhostMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GhostMeshes = { "GhostMeshes", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, GhostMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GhostMeshes_MetaData), NewProp_GhostMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartAnchor = { "StartAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, StartAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAnchor_MetaData), NewProp_StartAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndAnchor = { "EndAnchor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, EndAnchor), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAnchor_MetaData), NewProp_EndAnchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TetherCable = { "TetherCable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, TetherCable), Z_Construct_UClass_UCableComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherCable_MetaData), NewProp_TetherCable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, CurrentWidget), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWidget_MetaData), NewProp_CurrentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedCameraManager = { "CachedCameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_AttachTarget, CachedCameraManager), Z_Construct_UClass_APlayerCameraManager, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCameraManager_MetaData), NewProp_CachedCameraManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CompatibleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomGhostMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachSequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MagnetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AttachDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GhostMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggerSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GhostMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GhostMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TetherCable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCameraManager,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_AttachTarget Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_AttachTarget,
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
static void UAzr_AttachTarget_StaticRegisterNativesUAzr_AttachTarget()
{
	UClass* Class = UAzr_AttachTarget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_AttachTarget;
UClass* Z_Construct_UClass_UAzr_AttachTarget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_AttachTarget;
		if (!Z_Registration_Info_UClass_UAzr_AttachTarget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_AttachTarget"),
				Z_Registration_Info_UClass_UAzr_AttachTarget.InnerSingleton,
				UAzr_AttachTarget_StaticRegisterNativesUAzr_AttachTarget,
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
		return Z_Registration_Info_UClass_UAzr_AttachTarget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_AttachTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_AttachTarget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_AttachTarget.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_AttachTarget);
UAzr_AttachTarget::~UAzr_AttachTarget() {}
// ********** End Class UAzr_AttachTarget **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_AttachTarget, TEXT("UAzr_AttachTarget"), &Z_Registration_Info_UClass_UAzr_AttachTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_AttachTarget), 1010104088U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_AttachTarget_h__Script_AzurealXR_d53df56dd7f57717f23bb2360667208b8bffa093{
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
