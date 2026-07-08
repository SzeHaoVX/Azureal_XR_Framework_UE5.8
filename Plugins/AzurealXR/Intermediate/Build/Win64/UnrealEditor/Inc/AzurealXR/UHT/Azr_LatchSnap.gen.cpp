// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_LatchSnap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_LatchSnap() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_LatchSnap(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_LatchSnap(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzr_LatchSnap ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_LatchSnap_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Azr_LatchSnap.h" },
		{ "ModuleRelativePath", "Public/Azr_LatchSnap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Latch Snap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- THE MODULAR ID ---\n// Matches the InteractID on the Azr_Latch and Azr_LatchZone to establish a link.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_LatchSnap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- THE MODULAR ID ---\nMatches the InteractID on the Azr_Latch and Azr_LatchZone to establish a link." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightHand_MetaData[] = {
		{ "Category", "Latch Snap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check this box in the editor to make it a Right Hand. Uncheck for Left Hand.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_LatchSnap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check this box in the editor to make it a Right Hand. Uncheck for Left Hand." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandMeshAsset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// We cache the meshes here so we can swap them instantly\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_LatchSnap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We cache the meshes here so we can swap them instantly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandMeshAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_LatchSnap.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_LatchSnap constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static void NewProp_bIsRightHand_SetBit(void* Obj)
	{
		((UAzr_LatchSnap*)Obj)->bIsRightHand = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandMeshAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_LatchSnap constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_LatchSnap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_LatchSnap Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_LatchSnap, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_LatchSnap), &UHT_STATICS::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRightHand_MetaData), NewProp_bIsRightHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightHandMeshAsset = { "RightHandMeshAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_LatchSnap, RightHandMeshAsset), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandMeshAsset_MetaData), NewProp_RightHandMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftHandMeshAsset = { "LeftHandMeshAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_LatchSnap, LeftHandMeshAsset), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandMeshAsset_MetaData), NewProp_LeftHandMeshAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightHandMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftHandMeshAsset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_LatchSnap Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UStaticMeshComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_LatchSnap,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_LatchSnap;
UClass* Z_Construct_UClass_UAzr_LatchSnap(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_LatchSnap;
		if (!Z_Registration_Info_UClass_UAzr_LatchSnap.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_LatchSnap"),
				Z_Registration_Info_UClass_UAzr_LatchSnap.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UAzr_LatchSnap.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_LatchSnap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_LatchSnap.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_LatchSnap.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_LatchSnap);
UAzr_LatchSnap::~UAzr_LatchSnap() {}
// ********** End Class UAzr_LatchSnap *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchSnap_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_LatchSnap, TEXT("UAzr_LatchSnap"), &Z_Registration_Info_UClass_UAzr_LatchSnap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_LatchSnap), 2978043893U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_LatchSnap_h__Script_AzurealXR_1c3dc6e9d9ed1bc4b1a7fb481f888c7d12fc9e3c{
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
