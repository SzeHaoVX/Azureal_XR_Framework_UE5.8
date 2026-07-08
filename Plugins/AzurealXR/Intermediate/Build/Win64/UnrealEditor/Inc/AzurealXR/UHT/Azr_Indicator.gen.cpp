// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_Indicator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_Indicator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Indicator(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AAzr_Indicator Function OnExpand *****************************************
static FName NAME_AAzr_Indicator_OnExpand = FName(TEXT("OnExpand"));
void AAzr_Indicator::OnExpand()
{
	UFunction* Func = FindFunctionChecked(NAME_AAzr_Indicator_OnExpand);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Indicator_OnExpand_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Indicator, nullptr, "OnExpand", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAzr_Indicator_OnExpand(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class AAzr_Indicator Function OnExpand *******************************************

// ********** Begin Class AAzr_Indicator Function OnShrink *****************************************
static FName NAME_AAzr_Indicator_OnShrink = FName(TEXT("OnShrink"));
void AAzr_Indicator::OnShrink()
{
	UFunction* Func = FindFunctionChecked(NAME_AAzr_Indicator_OnShrink);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Indicator_OnShrink_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Indicator, nullptr, "OnShrink", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAzr_Indicator_OnShrink(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class AAzr_Indicator Function OnShrink *******************************************

// ********** Begin Class AAzr_Indicator Function OnStartIdle **************************************
static FName NAME_AAzr_Indicator_OnStartIdle = FName(TEXT("OnStartIdle"));
void AAzr_Indicator::OnStartIdle()
{
	UFunction* Func = FindFunctionChecked(NAME_AAzr_Indicator_OnStartIdle);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AAzr_Indicator_OnStartIdle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AAzr_Indicator, nullptr, "OnStartIdle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AAzr_Indicator_OnStartIdle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class AAzr_Indicator Function OnStartIdle ****************************************

// ********** Begin Class AAzr_Indicator ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AAzr_Indicator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Azr_Indicator.h" },
		{ "ModuleRelativePath", "Public/Azr_Indicator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAzr_Indicator constinit property declarations ***************************
// ********** End Class AAzr_Indicator constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAzr_Indicator_OnExpand, "OnExpand" }, // b5636a880ee6c36130aacf934b70fc2c6d9b8e1d
		{ &Z_Construct_UFunction_AAzr_Indicator_OnShrink, "OnShrink" }, // c7cc6d5aeb047c4bba61d32a2a2df7602bb10115
		{ &Z_Construct_UFunction_AAzr_Indicator_OnStartIdle, "OnStartIdle" }, // 61ad2c581c9683fe58955c21fdffbe7c7508a464
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAzr_Indicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AAzr_Indicator,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AAzr_Indicator;
UClass* Z_Construct_UClass_AAzr_Indicator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AAzr_Indicator;
		if (!Z_Registration_Info_UClass_AAzr_Indicator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_Indicator"),
				Z_Registration_Info_UClass_AAzr_Indicator.InnerSingleton,
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
		return Z_Registration_Info_UClass_AAzr_Indicator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AAzr_Indicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAzr_Indicator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AAzr_Indicator.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAzr_Indicator);
AAzr_Indicator::~AAzr_Indicator() {}
// ********** End Class AAzr_Indicator *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Indicator_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAzr_Indicator, TEXT("AAzr_Indicator"), &Z_Registration_Info_UClass_AAzr_Indicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAzr_Indicator), 1311774149U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Indicator_h__Script_AzurealXR_5d102c20a945f2fd0d7427139e99e169cb74c8b9{
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
