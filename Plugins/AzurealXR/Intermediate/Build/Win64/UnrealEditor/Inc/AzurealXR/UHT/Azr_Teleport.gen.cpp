// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Teleport.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Teleport() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Teleport(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Teleport(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzr_Teleport Function DisableTeleport ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Teleport_DisableTeleport_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Teleport" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableTeleport constinit property declarations ***********************
// ********** End Function DisableTeleport constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Teleport, nullptr, "DisableTeleport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Teleport_DisableTeleport(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Teleport::execDisableTeleport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableTeleport();
	P_NATIVE_END;
}
// ********** End Class UAzr_Teleport Function DisableTeleport *************************************

// ********** Begin Class UAzr_Teleport Function EnableTeleport ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Teleport_EnableTeleport_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Teleport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- STATE API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- STATE API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableTeleport constinit property declarations ************************
// ********** End Function EnableTeleport constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Teleport, nullptr, "EnableTeleport", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Teleport_EnableTeleport(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Teleport::execEnableTeleport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableTeleport();
	P_NATIVE_END;
}
// ********** End Class UAzr_Teleport Function EnableTeleport **************************************

// ********** Begin Class UAzr_Teleport Function HandleTeleportInput *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics
struct UHT_STATICS
{
	struct Azr_Teleport_eventHandleTeleportInput_Parms
	{
		float InputValue;
		USceneComponent* ControllerSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Teleport" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTeleportInput constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleTeleportInput constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleTeleportInput Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Teleport_eventHandleTeleportInput_Parms, InputValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ControllerSource = { "ControllerSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Teleport_eventHandleTeleportInput_Parms, ControllerSource), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerSource_MetaData), NewProp_ControllerSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerSource,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleTeleportInput Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Teleport, nullptr, "HandleTeleportInput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Teleport_eventHandleTeleportInput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Teleport_eventHandleTeleportInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Teleport::execHandleTeleportInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InputValue);
	P_GET_OBJECT(USceneComponent,Z_Param_ControllerSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTeleportInput(Z_Param_InputValue,Z_Param_ControllerSource);
	P_NATIVE_END;
}
// ********** End Class UAzr_Teleport Function HandleTeleportInput *********************************

// ********** Begin Class UAzr_Teleport Function TeleportToLocation ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics
struct UHT_STATICS
{
	struct Azr_Teleport_eventTeleportToLocation_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Teleport" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TeleportToLocation constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TeleportToLocation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TeleportToLocation Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Teleport_eventTeleportToLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TeleportToLocation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Teleport, nullptr, "TeleportToLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Teleport_eventTeleportToLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Teleport_eventTeleportToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Teleport::execTeleportToLocation)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeleportToLocation(Z_Param_TargetLocation);
	P_NATIVE_END;
}
// ********** End Class UAzr_Teleport Function TeleportToLocation **********************************

// ********** Begin Class UAzr_Teleport ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Teleport_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "IncludePath", "Azr_Teleport.h" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTeleportDistance_MetaData[] = {
		{ "Category", "Azureal|Settings" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDuration_MetaData[] = {
		{ "Category", "Azureal|Settings" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleMeshAsset_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- VISUALS (RETICLE) --\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- VISUALS (RETICLE) --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleScale_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidReticleMaterial_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidReticleMaterial_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamMeshAsset_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- VISUALS (BEAM) --\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- VISUALS (BEAM) --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamScale_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidBeamMaterial_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidBeamMaterial_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcSpline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Teleport.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Teleport constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTeleportDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReticleMeshAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReticleScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidReticleMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvalidReticleMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamMeshAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeamScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidBeamMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvalidBeamMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReticleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArcSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMeshPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Teleport constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableTeleport"), .Pointer = &UAzr_Teleport::execDisableTeleport },
		{ .NameUTF8 = UTF8TEXT("EnableTeleport"), .Pointer = &UAzr_Teleport::execEnableTeleport },
		{ .NameUTF8 = UTF8TEXT("HandleTeleportInput"), .Pointer = &UAzr_Teleport::execHandleTeleportInput },
		{ .NameUTF8 = UTF8TEXT("TeleportToLocation"), .Pointer = &UAzr_Teleport::execTeleportToLocation },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Teleport_DisableTeleport, "DisableTeleport" }, // d608d8525f471353812356fe04da9cd8e6430d3d
		{ &Z_Construct_UFunction_UAzr_Teleport_EnableTeleport, "EnableTeleport" }, // e9c83378e5c0240f31b8d7bfd8d54a3b4f4966dc
		{ &Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput, "HandleTeleportInput" }, // ba58cac61bb4fd5c417040141a5e640f22859890
		{ &Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation, "TeleportToLocation" }, // d5a93b70a7776601a3934bbd976ff038aeecb3e1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Teleport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Teleport Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxTeleportDistance = { "MaxTeleportDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, MaxTeleportDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTeleportDistance_MetaData), NewProp_MaxTeleportDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, FadeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDuration_MetaData), NewProp_FadeDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReticleMeshAsset = { "ReticleMeshAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ReticleMeshAsset), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleMeshAsset_MetaData), NewProp_ReticleMeshAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReticleScale = { "ReticleScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ReticleScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleScale_MetaData), NewProp_ReticleScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ValidReticleMaterial = { "ValidReticleMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ValidReticleMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidReticleMaterial_MetaData), NewProp_ValidReticleMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InvalidReticleMaterial = { "InvalidReticleMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, InvalidReticleMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidReticleMaterial_MetaData), NewProp_InvalidReticleMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BeamMeshAsset = { "BeamMeshAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, BeamMeshAsset), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamMeshAsset_MetaData), NewProp_BeamMeshAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BeamScale = { "BeamScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, BeamScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamScale_MetaData), NewProp_BeamScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ValidBeamMaterial = { "ValidBeamMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ValidBeamMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidBeamMaterial_MetaData), NewProp_ValidBeamMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InvalidBeamMaterial = { "InvalidBeamMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, InvalidBeamMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidBeamMaterial_MetaData), NewProp_InvalidBeamMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReticleComponent = { "ReticleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ReticleComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleComponent_MetaData), NewProp_ReticleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurrentController = { "CurrentController", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, CurrentController), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentController_MetaData), NewProp_CurrentController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ArcSpline = { "ArcSpline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ArcSpline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcSpline_MetaData), NewProp_ArcSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplineMeshPool_Inner = { "SplineMeshPool", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SplineMeshPool = { "SplineMeshPool", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, SplineMeshPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshPool_MetaData), NewProp_SplineMeshPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxTeleportDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReticleMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReticleScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValidReticleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InvalidReticleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BeamMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BeamScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValidBeamMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InvalidBeamMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReticleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentController,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArcSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineMeshPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineMeshPool,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Teleport Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Teleport,
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
static void UAzr_Teleport_StaticRegisterNativesUAzr_Teleport()
{
	UClass* Class = UAzr_Teleport::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Teleport;
UClass* Z_Construct_UClass_UAzr_Teleport(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Teleport;
		if (!Z_Registration_Info_UClass_UAzr_Teleport.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Teleport"),
				Z_Registration_Info_UClass_UAzr_Teleport.InnerSingleton,
				UAzr_Teleport_StaticRegisterNativesUAzr_Teleport,
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
		return Z_Registration_Info_UClass_UAzr_Teleport.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Teleport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Teleport.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Teleport.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Teleport);
UAzr_Teleport::~UAzr_Teleport() {}
// ********** End Class UAzr_Teleport **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Teleport_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Teleport, TEXT("UAzr_Teleport"), &Z_Registration_Info_UClass_UAzr_Teleport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Teleport), 2879731131U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Teleport_h__Script_AzurealXR_80b3fab5b5659423675ea0eeb60b2f7c31d8c2e8{
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
