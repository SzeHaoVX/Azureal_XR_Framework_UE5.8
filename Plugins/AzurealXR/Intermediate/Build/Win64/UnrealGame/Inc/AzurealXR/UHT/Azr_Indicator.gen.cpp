// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Indicator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Indicator() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator();
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAzr_Indicator Function OnExpand *****************************************
static FName NAME_AAzr_Indicator_OnExpand = FName(TEXT("OnExpand"));
void AAzr_Indicator::OnExpand()
{
	UFunction* Func = FindFunctionChecked(NAME_AAzr_Indicator_OnExpand);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AAzr_Indicator_OnExpand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when player touches the zone. Scale UP here.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Indicator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when player touches the zone. Scale UP here." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnExpand constinit property declarations ******************************
// ********** End Function OnExpand constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Indicator_OnExpand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Indicator, nullptr, "OnExpand", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Indicator_OnExpand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Indicator_OnExpand_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAzr_Indicator_OnExpand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Indicator_OnExpand_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AAzr_Indicator Function OnExpand *******************************************

// ********** Begin Class AAzr_Indicator Function OnShrink *****************************************
static FName NAME_AAzr_Indicator_OnShrink = FName(TEXT("OnShrink"));
void AAzr_Indicator::OnShrink()
{
	UFunction* Func = FindFunctionChecked(NAME_AAzr_Indicator_OnShrink);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AAzr_Indicator_OnShrink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when player leaves the zone. Scale DOWN (back to idle) here.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Indicator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when player leaves the zone. Scale DOWN (back to idle) here." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnShrink constinit property declarations ******************************
// ********** End Function OnShrink constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Indicator_OnShrink_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Indicator, nullptr, "OnShrink", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Indicator_OnShrink_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Indicator_OnShrink_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAzr_Indicator_OnShrink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Indicator_OnShrink_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AAzr_Indicator Function OnShrink *******************************************

// ********** Begin Class AAzr_Indicator Function OnStartIdle **************************************
static FName NAME_AAzr_Indicator_OnStartIdle = FName(TEXT("OnStartIdle"));
void AAzr_Indicator::OnStartIdle()
{
	UFunction* Func = FindFunctionChecked(NAME_AAzr_Indicator_OnStartIdle);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AAzr_Indicator_OnStartIdle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Indicator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called automatically on spawn. Start your \"Bouncing\" timeline here.\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_Indicator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called automatically on spawn. Start your \"Bouncing\" timeline here." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnStartIdle constinit property declarations ***************************
// ********** End Function OnStartIdle constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAzr_Indicator_OnStartIdle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAzr_Indicator, nullptr, "OnStartIdle", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAzr_Indicator_OnStartIdle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAzr_Indicator_OnStartIdle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAzr_Indicator_OnStartIdle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAzr_Indicator_OnStartIdle_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AAzr_Indicator Function OnStartIdle ****************************************

// ********** Begin Class AAzr_Indicator ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAzr_Indicator;
UClass* AAzr_Indicator::GetPrivateStaticClass()
{
	using TClass = AAzr_Indicator;
	if (!Z_Registration_Info_UClass_AAzr_Indicator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_Indicator"),
			Z_Registration_Info_UClass_AAzr_Indicator.InnerSingleton,
			StaticRegisterNativesAAzr_Indicator,
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
	return Z_Registration_Info_UClass_AAzr_Indicator.InnerSingleton;
}
UClass* Z_Construct_UClass_AAzr_Indicator_NoRegister()
{
	return AAzr_Indicator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAzr_Indicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Azr_Indicator.h" },
		{ "ModuleRelativePath", "Public/Azr_Indicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAzr_Indicator constinit property declarations ***************************
// ********** End Class AAzr_Indicator constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAzr_Indicator_OnExpand, "OnExpand" }, // 1398872756
		{ &Z_Construct_UFunction_AAzr_Indicator_OnShrink, "OnShrink" }, // 3396051800
		{ &Z_Construct_UFunction_AAzr_Indicator_OnStartIdle, "OnStartIdle" }, // 2233996064
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAzr_Indicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAzr_Indicator_Statics
UObject* (*const Z_Construct_UClass_AAzr_Indicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Indicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAzr_Indicator_Statics::ClassParams = {
	&AAzr_Indicator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAzr_Indicator_Statics::Class_MetaDataParams), Z_Construct_UClass_AAzr_Indicator_Statics::Class_MetaDataParams)
};
void AAzr_Indicator::StaticRegisterNativesAAzr_Indicator()
{
}
UClass* Z_Construct_UClass_AAzr_Indicator()
{
	if (!Z_Registration_Info_UClass_AAzr_Indicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAzr_Indicator.OuterSingleton, Z_Construct_UClass_AAzr_Indicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAzr_Indicator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAzr_Indicator);
AAzr_Indicator::~AAzr_Indicator() {}
// ********** End Class AAzr_Indicator *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Indicator_h__Script_AzurealXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAzr_Indicator, AAzr_Indicator::StaticClass, TEXT("AAzr_Indicator"), &Z_Registration_Info_UClass_AAzr_Indicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAzr_Indicator), 1296067152U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Indicator_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Indicator_h__Script_AzurealXR_3045880532{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Indicator_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Indicator_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
