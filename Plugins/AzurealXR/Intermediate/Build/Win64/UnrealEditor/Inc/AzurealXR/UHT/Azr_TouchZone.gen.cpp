// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_TouchZone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_TouchZone() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_TouchZone(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_TouchZone(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzr_TouchZone ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_TouchZone_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_TouchZone\n * A smart collision box that automatically renders a perfect 1:1 editor preview\n * of the assigned Touch Indicator, and acts as the interaction anchor for UAzr_Touch.\n */" },
#endif
		{ "DisplayName", "Azr Touch Zone" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Azr_TouchZone.h" },
		{ "ModuleRelativePath", "Public/Azr_TouchZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_TouchZone\nA smart collision box that automatically renders a perfect 1:1 editor preview\nof the assigned Touch Indicator, and acts as the interaction anchor for UAzr_Touch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchIndicatorClass_MetaData[] = {
		{ "Category", "Touch Zone Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- TOUCH INDICATOR ---\n// The designer assigns the UI/Indicator Blueprint here.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_TouchZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- TOUCH INDICATOR ---\nThe designer assigns the UI/Indicator Blueprint here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractID_MetaData[] = {
		{ "Category", "Touch Zone Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Matches the InteractID on the Azr_Touch actor component to establish a link\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_TouchZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Matches the InteractID on the Azr_Touch actor component to establish a link" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedIndicator_MetaData[] = {
		{ "Category", "Touch Zone Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime pointer to the spawned indicator instance\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_TouchZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime pointer to the spawned indicator instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewIndicatorMeshes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EDITOR PREVIEW SYSTEM ---\n// Marked Transient and TextExportTransient to stabilize visuals in the viewport\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_TouchZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EDITOR PREVIEW SYSTEM ---\nMarked Transient and TextExportTransient to stabilize visuals in the viewport" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_TouchZone constinit property declarations ***************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_TouchIndicatorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedIndicator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewIndicatorMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewIndicatorMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_TouchZone constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_TouchZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_TouchZone Property Definitions **************************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_TouchIndicatorClass = { "TouchIndicatorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_TouchZone, TouchIndicatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAzr_Indicator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchIndicatorClass_MetaData), NewProp_TouchIndicatorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InteractID = { "InteractID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_TouchZone, InteractID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractID_MetaData), NewProp_InteractID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedIndicator = { "SpawnedIndicator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_TouchZone, SpawnedIndicator), Z_Construct_UClass_AAzr_Indicator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedIndicator_MetaData), NewProp_SpawnedIndicator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewIndicatorMeshes_Inner = { "PreviewIndicatorMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PreviewIndicatorMeshes = { "PreviewIndicatorMeshes", nullptr, (EPropertyFlags)0x0040408000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_TouchZone, PreviewIndicatorMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewIndicatorMeshes_MetaData), NewProp_PreviewIndicatorMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TouchIndicatorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedIndicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewIndicatorMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewIndicatorMeshes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_TouchZone Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBoxComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_TouchZone,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_TouchZone;
UClass* Z_Construct_UClass_UAzr_TouchZone(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_TouchZone;
		if (!Z_Registration_Info_UClass_UAzr_TouchZone.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_TouchZone"),
				Z_Registration_Info_UClass_UAzr_TouchZone.InnerSingleton,
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
		return Z_Registration_Info_UClass_UAzr_TouchZone.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_TouchZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_TouchZone.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_TouchZone.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_TouchZone);
UAzr_TouchZone::~UAzr_TouchZone() {}
// ********** End Class UAzr_TouchZone *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_TouchZone_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_TouchZone, TEXT("UAzr_TouchZone"), &Z_Registration_Info_UClass_UAzr_TouchZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_TouchZone), 863436955U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_TouchZone_h__Script_AzurealXR_086b0d3d446d54c4c3d9468916d1797dc725f49b{
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
