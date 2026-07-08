// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Teleport.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Teleport() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Teleport();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Teleport_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAzr_Teleport Function HandleTeleportInput *******************************
struct Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics
{
	struct Azr_Teleport_eventHandleTeleportInput_Parms
	{
		float InputValue;
		USceneComponent* ControllerSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Teleport_eventHandleTeleportInput_Parms, InputValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::NewProp_ControllerSource = { "ControllerSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Teleport_eventHandleTeleportInput_Parms, ControllerSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerSource_MetaData), NewProp_ControllerSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::NewProp_InputValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::NewProp_ControllerSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::PropPointers) < 2048);
// ********** End Function HandleTeleportInput Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Teleport, nullptr, "HandleTeleportInput", 	Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::Azr_Teleport_eventHandleTeleportInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::Azr_Teleport_eventHandleTeleportInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
struct Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics
{
	struct Azr_Teleport_eventTeleportToLocation_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Teleport_eventTeleportToLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::PropPointers) < 2048);
// ********** End Function TeleportToLocation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Teleport, nullptr, "TeleportToLocation", 	Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::Azr_Teleport_eventTeleportToLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::Azr_Teleport_eventTeleportToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Teleport;
UClass* UAzr_Teleport::GetPrivateStaticClass()
{
	using TClass = UAzr_Teleport;
	if (!Z_Registration_Info_UClass_UAzr_Teleport.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Teleport"),
			Z_Registration_Info_UClass_UAzr_Teleport.InnerSingleton,
			StaticRegisterNativesUAzr_Teleport,
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
	return Z_Registration_Info_UClass_UAzr_Teleport.InnerSingleton;
}
UClass* Z_Construct_UClass_UAzr_Teleport_NoRegister()
{
	return UAzr_Teleport::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzr_Teleport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
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
		{ .NameUTF8 = UTF8TEXT("HandleTeleportInput"), .Pointer = &UAzr_Teleport::execHandleTeleportInput },
		{ .NameUTF8 = UTF8TEXT("TeleportToLocation"), .Pointer = &UAzr_Teleport::execTeleportToLocation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Teleport_HandleTeleportInput, "HandleTeleportInput" }, // 1874550953
		{ &Z_Construct_UFunction_UAzr_Teleport_TeleportToLocation, "TeleportToLocation" }, // 1729992971
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Teleport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzr_Teleport_Statics

// ********** Begin Class UAzr_Teleport Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_MaxTeleportDistance = { "MaxTeleportDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, MaxTeleportDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTeleportDistance_MetaData), NewProp_MaxTeleportDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, FadeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDuration_MetaData), NewProp_FadeDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ReticleMeshAsset = { "ReticleMeshAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ReticleMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleMeshAsset_MetaData), NewProp_ReticleMeshAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ReticleScale = { "ReticleScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ReticleScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleScale_MetaData), NewProp_ReticleScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ValidReticleMaterial = { "ValidReticleMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ValidReticleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidReticleMaterial_MetaData), NewProp_ValidReticleMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_InvalidReticleMaterial = { "InvalidReticleMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, InvalidReticleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidReticleMaterial_MetaData), NewProp_InvalidReticleMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_BeamMeshAsset = { "BeamMeshAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, BeamMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamMeshAsset_MetaData), NewProp_BeamMeshAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_BeamScale = { "BeamScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, BeamScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamScale_MetaData), NewProp_BeamScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ValidBeamMaterial = { "ValidBeamMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ValidBeamMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidBeamMaterial_MetaData), NewProp_ValidBeamMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_InvalidBeamMaterial = { "InvalidBeamMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, InvalidBeamMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidBeamMaterial_MetaData), NewProp_InvalidBeamMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ReticleComponent = { "ReticleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ReticleComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleComponent_MetaData), NewProp_ReticleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_CurrentController = { "CurrentController", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, CurrentController), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentController_MetaData), NewProp_CurrentController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ArcSpline = { "ArcSpline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, ArcSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcSpline_MetaData), NewProp_ArcSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_SplineMeshPool_Inner = { "SplineMeshPool", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_SplineMeshPool = { "SplineMeshPool", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Teleport, SplineMeshPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshPool_MetaData), NewProp_SplineMeshPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzr_Teleport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_MaxTeleportDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_FadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ReticleMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ReticleScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ValidReticleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_InvalidReticleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_BeamMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_BeamScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ValidBeamMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_InvalidBeamMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ReticleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_CurrentController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_ArcSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_SplineMeshPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Teleport_Statics::NewProp_SplineMeshPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Teleport_Statics::PropPointers) < 2048);
// ********** End Class UAzr_Teleport Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UAzr_Teleport_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Teleport_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzr_Teleport_Statics::ClassParams = {
	&UAzr_Teleport::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAzr_Teleport_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Teleport_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Teleport_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzr_Teleport_Statics::Class_MetaDataParams)
};
void UAzr_Teleport::StaticRegisterNativesUAzr_Teleport()
{
	UClass* Class = UAzr_Teleport::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAzr_Teleport_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAzr_Teleport()
{
	if (!Z_Registration_Info_UClass_UAzr_Teleport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Teleport.OuterSingleton, Z_Construct_UClass_UAzr_Teleport_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Teleport.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Teleport);
UAzr_Teleport::~UAzr_Teleport() {}
// ********** End Class UAzr_Teleport **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Teleport_h__Script_AzurealXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Teleport, UAzr_Teleport::StaticClass, TEXT("UAzr_Teleport"), &Z_Registration_Info_UClass_UAzr_Teleport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Teleport), 2357291065U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Teleport_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Teleport_h__Script_AzurealXR_989670241{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Teleport_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Teleport_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
