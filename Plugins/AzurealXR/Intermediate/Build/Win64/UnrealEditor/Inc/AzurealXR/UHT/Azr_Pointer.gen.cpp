// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Pointer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Pointer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Pointer(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Pointer(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzr_Pointer Function DisablePointer *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Pointer_DisablePointer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_Pointer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisablePointer constinit property declarations ************************
// ********** End Function DisablePointer constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Pointer, nullptr, "DisablePointer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_Pointer_DisablePointer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_Pointer::execDisablePointer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePointer();
	P_NATIVE_END;
}
// ********** End Class UAzr_Pointer Function DisablePointer ***************************************

// ********** Begin Class UAzr_Pointer Function EnablePointer_TargetComponent **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent_Statics
struct UHT_STATICS
{
	struct Azr_Pointer_eventEnablePointer_TargetComponent_Parms
	{
		USceneComponent* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pointer_eventEnablePointer_TargetComponent_Parms, Target), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnablePointer_TargetComponent Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Pointer, nullptr, "EnablePointer_TargetComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Pointer_eventEnablePointer_TargetComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Pointer_eventEnablePointer_TargetComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation_Statics
struct UHT_STATICS
{
	struct Azr_Pointer_eventEnablePointer_TargetLocation_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_Pointer_eventEnablePointer_TargetLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnablePointer_TargetLocation Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_Pointer, nullptr, "EnablePointer_TargetLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_Pointer_eventEnablePointer_TargetLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_Pointer_eventEnablePointer_TargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_Pointer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static void NewProp_bFlattenZ_SetBit(void* Obj)
	{
		((UAzr_Pointer*)Obj)->bFlattenZ = 1;
	}
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
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_Pointer_DisablePointer, "DisablePointer" }, // 0494b8a4b599aa00070f411403409aa734b98390
		{ &Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetComponent, "EnablePointer_TargetComponent" }, // 9030f7cd200f205d6ae83cd4057155987f60b75e
		{ &Z_Construct_UFunction_UAzr_Pointer_EnablePointer_TargetLocation, "EnablePointer_TargetLocation" }, // c7e09615c54248009b54a9ec5e098fb2b44f9073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_Pointer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_Pointer Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Pointer, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlattenZ = { "bFlattenZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_Pointer), &UHT_STATICS::NewProp_bFlattenZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlattenZ_MetaData), NewProp_bFlattenZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PointerMesh = { "PointerMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Pointer, PointerMesh), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerMesh_MetaData), NewProp_PointerMesh_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_TrackedComponent = { "TrackedComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_Pointer, TrackedComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedComponent_MetaData), NewProp_TrackedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlattenZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrackedComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_Pointer Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_Pointer,
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
static void UAzr_Pointer_StaticRegisterNativesUAzr_Pointer()
{
	UClass* Class = UAzr_Pointer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_Pointer;
UClass* Z_Construct_UClass_UAzr_Pointer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_Pointer;
		if (!Z_Registration_Info_UClass_UAzr_Pointer.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Pointer"),
				Z_Registration_Info_UClass_UAzr_Pointer.InnerSingleton,
				UAzr_Pointer_StaticRegisterNativesUAzr_Pointer,
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
		return Z_Registration_Info_UClass_UAzr_Pointer.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_Pointer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_Pointer.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_Pointer.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_Pointer);
UAzr_Pointer::~UAzr_Pointer() {}
// ********** End Class UAzr_Pointer ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_Pointer, TEXT("UAzr_Pointer"), &Z_Registration_Info_UClass_UAzr_Pointer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_Pointer), 1034088204U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pointer_h__Script_AzurealXR_be6aca5291c48933b60246407a69db6057edced6{
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
