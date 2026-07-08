// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Pointer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Pointer() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Pointer();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Pointer_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAzr_Pointer Function DisablePointer *************************************
struct Z_Construct_UFunction_UAzr_Pointer_DisablePointer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisablePointer constinit property declarations ************************
// ********** End Function DisablePointer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Pointer_DisablePointer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Pointer, nullptr, "DisablePointer", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Pointer_DisablePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Pointer_DisablePointer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzr_Pointer_DisablePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Pointer_DisablePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Pointer::execDisablePointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePointer();
	P_NATIVE_END;
}
// ********** End Class UAzr_Pointer Function DisablePointer ***************************************

// ********** Begin Class UAzr_Pointer Function EnablePointer_TargetComponent **********************
struct Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics
{
	struct Azr_Pointer_eventEnablePointer_TargetComponent_Parms
	{
		USceneComponent* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "DisplayName", "Enable Pointer (Target Component)" },
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnablePointer_TargetComponent constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnablePointer_TargetComponent constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnablePointer_TargetComponent Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pointer_eventEnablePointer_TargetComponent_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::PropPointers) < 2048);
// ********** End Function EnablePointer_TargetComponent Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Pointer, nullptr, "EnablePointer_TargetComponent", 	Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::Azr_Pointer_eventEnablePointer_TargetComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::Azr_Pointer_eventEnablePointer_TargetComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Pointer::execEnablePointer_TargetComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePointer_TargetComponent(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UAzr_Pointer Function EnablePointer_TargetComponent ************************

// ********** Begin Class UAzr_Pointer Function EnablePointer_TargetLocation ***********************
struct Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics
{
	struct Azr_Pointer_eventEnablePointer_TargetLocation_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Logic" },
		{ "DisplayName", "Enable Pointer (Target Location)" },
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnablePointer_TargetLocation constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnablePointer_TargetLocation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnablePointer_TargetLocation Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pointer_eventEnablePointer_TargetLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::PropPointers) < 2048);
// ********** End Function EnablePointer_TargetLocation Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_Pointer, nullptr, "EnablePointer_TargetLocation", 	Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::Azr_Pointer_eventEnablePointer_TargetLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::Azr_Pointer_eventEnablePointer_TargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_Pointer::execEnablePointer_TargetLocation)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePointer_TargetLocation(Z_Param_TargetLocation);
	P_NATIVE_END;
}
// ********** End Class UAzr_Pointer Function EnablePointer_TargetLocation *************************

// ********** Begin Class UAzr_Pointer *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Pointer;
UClass* UAzr_Pointer::GetPrivateStaticClass()
{
	using TClass = UAzr_Pointer;
	if (!Z_Registration_Info_UClass_UAzr_Pointer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Pointer"),
			Z_Registration_Info_UClass_UAzr_Pointer.InnerSingleton,
			StaticRegisterNativesUAzr_Pointer,
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
	return Z_Registration_Info_UClass_UAzr_Pointer.InnerSingleton;
}
UClass* Z_Construct_UClass_UAzr_Pointer_NoRegister()
{
	return UAzr_Pointer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzr_Pointer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Azr_Pointer.h" },
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenZ_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerMesh_MetaData[] = {
		{ "Category", "Azureal|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointer Visuals (Arrow/Cone)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer Visuals (Arrow/Cone)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SAFETY FIX: Use Weak Pointer to prevent crashes on destroyed objects.\n// UPROPERTY() ensures the GC and Debugger can track this reference.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SAFETY FIX: Use Weak Pointer to prevent crashes on destroyed objects.\nUPROPERTY() ensures the GC and Debugger can track this reference." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_Pointer constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static void NewProp_bFlattenZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointerMesh;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_Pointer constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisablePointer"), .Pointer = &UAzr_Pointer::execDisablePointer },
		{ .NameUTF8 = UTF8TEXT("EnablePointer_TargetComponent"), .Pointer = &UAzr_Pointer::execEnablePointer_TargetComponent },
		{ .NameUTF8 = UTF8TEXT("EnablePointer_TargetLocation"), .Pointer = &UAzr_Pointer::execEnablePointer_TargetLocation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Pointer_DisablePointer, "DisablePointer" }, // 1805692085
		{ &Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent, "EnablePointer_TargetComponent" }, // 1880351995
		{ &Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation, "EnablePointer_TargetLocation" }, // 3459632905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Pointer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzr_Pointer_Statics

// ********** Begin Class UAzr_Pointer Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Pointer, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
void Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_bFlattenZ_SetBit(void* Obj)
{
	((UAzr_Pointer*)Obj)->bFlattenZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_bFlattenZ = { "bFlattenZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Pointer), &Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_bFlattenZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlattenZ_MetaData), NewProp_bFlattenZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_PointerMesh = { "PointerMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Pointer, PointerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerMesh_MetaData), NewProp_PointerMesh_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_TrackedComponent = { "TrackedComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Pointer, TrackedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedComponent_MetaData), NewProp_TrackedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzr_Pointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_bFlattenZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_PointerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_Pointer_Statics::NewProp_TrackedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Pointer_Statics::PropPointers) < 2048);
// ********** End Class UAzr_Pointer Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UAzr_Pointer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Pointer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzr_Pointer_Statics::ClassParams = {
	&UAzr_Pointer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAzr_Pointer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Pointer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_Pointer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzr_Pointer_Statics::Class_MetaDataParams)
};
void UAzr_Pointer::StaticRegisterNativesUAzr_Pointer()
{
	UClass* Class = UAzr_Pointer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAzr_Pointer_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAzr_Pointer()
{
	if (!Z_Registration_Info_UClass_UAzr_Pointer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Pointer.OuterSingleton, Z_Construct_UClass_UAzr_Pointer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Pointer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Pointer);
UAzr_Pointer::~UAzr_Pointer() {}
// ********** End Class UAzr_Pointer ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h__Script_AzurealXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Pointer, UAzr_Pointer::StaticClass, TEXT("UAzr_Pointer"), &Z_Registration_Info_UClass_UAzr_Pointer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Pointer), 2100942130U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h__Script_AzurealXR_310851246{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
