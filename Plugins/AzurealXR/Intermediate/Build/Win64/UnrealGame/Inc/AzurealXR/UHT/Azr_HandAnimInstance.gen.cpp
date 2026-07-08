// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_HandAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_HandAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandAnimInstance();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAzr_HandAnimInstance ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_HandAnimInstance;
UClass* UAzr_HandAnimInstance::GetPrivateStaticClass()
{
	using TClass = UAzr_HandAnimInstance;
	if (!Z_Registration_Info_UClass_UAzr_HandAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_HandAnimInstance"),
			Z_Registration_Info_UClass_UAzr_HandAnimInstance.InnerSingleton,
			StaticRegisterNativesUAzr_HandAnimInstance,
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
	return Z_Registration_Info_UClass_UAzr_HandAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UAzr_HandAnimInstance_NoRegister()
{
	return UAzr_HandAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzr_HandAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * C++ Base for Hand Animations.\n * Direct communication line from Pawn to AnimGraph.\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Azr_HandAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Azr_HandAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ Base for Hand Animations.\nDirect communication line from Pawn to AnimGraph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripAlpha_MetaData[] = {
		{ "Category", "Azureal|Hands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The variable the AnimGraph will read (0.0 = Open, 1.0 = Closed)\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_HandAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The variable the AnimGraph will read (0.0 = Open, 1.0 = Closed)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_HandAnimInstance constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GripAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_HandAnimInstance constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_HandAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzr_HandAnimInstance_Statics

// ********** Begin Class UAzr_HandAnimInstance Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzr_HandAnimInstance_Statics::NewProp_GripAlpha = { "GripAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandAnimInstance, GripAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripAlpha_MetaData), NewProp_GripAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzr_HandAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandAnimInstance_Statics::NewProp_GripAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UAzr_HandAnimInstance Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UAzr_HandAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzr_HandAnimInstance_Statics::ClassParams = {
	&UAzr_HandAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAzr_HandAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzr_HandAnimInstance_Statics::Class_MetaDataParams)
};
void UAzr_HandAnimInstance::StaticRegisterNativesUAzr_HandAnimInstance()
{
}
UClass* Z_Construct_UClass_UAzr_HandAnimInstance()
{
	if (!Z_Registration_Info_UClass_UAzr_HandAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_HandAnimInstance.OuterSingleton, Z_Construct_UClass_UAzr_HandAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_HandAnimInstance.OuterSingleton;
}
UAzr_HandAnimInstance::UAzr_HandAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_HandAnimInstance);
UAzr_HandAnimInstance::~UAzr_HandAnimInstance() {}
// ********** End Class UAzr_HandAnimInstance ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandAnimInstance_h__Script_AzurealXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_HandAnimInstance, UAzr_HandAnimInstance::StaticClass, TEXT("UAzr_HandAnimInstance"), &Z_Registration_Info_UClass_UAzr_HandAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_HandAnimInstance), 2297151335U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandAnimInstance_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandAnimInstance_h__Script_AzurealXR_3780475021{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandAnimInstance_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandAnimInstance_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
