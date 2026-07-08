// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_GazeWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_GazeWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UImage(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_GazeWidget(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_GazeWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzr_GazeWidget Function SetProgress *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_GazeWidget_SetProgress_Statics
struct UHT_STATICS
{
	struct Azr_GazeWidget_eventSetProgress_Parms
	{
		float InProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|UI" },
		{ "ModuleRelativePath", "Public/Azr_GazeWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetProgress constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetProgress constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetProgress Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_GazeWidget_eventSetProgress_Parms, InProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InProgress,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetProgress Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_GazeWidget, nullptr, "SetProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_GazeWidget_eventSetProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_GazeWidget_eventSetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_GazeWidget_SetProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_GazeWidget::execSetProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProgress(Z_Param_InProgress);
	P_NATIVE_END;
}
// ********** End Class UAzr_GazeWidget Function SetProgress ***************************************

// ********** Begin Class UAzr_GazeWidget **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_GazeWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Azr_GazeWidget.h" },
		{ "ModuleRelativePath", "Public/Azr_GazeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_GazeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GazeReticleIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Azureal|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_GazeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressMID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached reference to the material so we don't recreate it every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_GazeWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached reference to the material so we don't recreate it every frame" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_GazeWidget constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GazeReticleIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_GazeWidget constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetProgress"), .Pointer = &UAzr_GazeWidget::execSetProgress },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_GazeWidget_SetProgress, "SetProgress" }, // 0dea3e896e050768d6129ba01a0774d8a3ab2bef
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_GazeWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_GazeWidget Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProgressImage = { "ProgressImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_GazeWidget, ProgressImage), Z_Construct_UClass_UImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressImage_MetaData), NewProp_ProgressImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GazeReticleIcon = { "GazeReticleIcon", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_GazeWidget, GazeReticleIcon), Z_Construct_UClass_UImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GazeReticleIcon_MetaData), NewProp_GazeReticleIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProgressMID = { "ProgressMID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_GazeWidget, ProgressMID), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressMID_MetaData), NewProp_ProgressMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProgressImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeReticleIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProgressMID,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_GazeWidget Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_GazeWidget,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_GazeWidget_StaticRegisterNativesUAzr_GazeWidget()
{
	UClass* Class = UAzr_GazeWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_GazeWidget;
UClass* Z_Construct_UClass_UAzr_GazeWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_GazeWidget;
		if (!Z_Registration_Info_UClass_UAzr_GazeWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_GazeWidget"),
				Z_Registration_Info_UClass_UAzr_GazeWidget.InnerSingleton,
				UAzr_GazeWidget_StaticRegisterNativesUAzr_GazeWidget,
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
		return Z_Registration_Info_UClass_UAzr_GazeWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_GazeWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_GazeWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_GazeWidget.OuterSingleton;
}
#undef UHT_STATICS
UAzr_GazeWidget::UAzr_GazeWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_GazeWidget);
UAzr_GazeWidget::~UAzr_GazeWidget() {}
// ********** End Class UAzr_GazeWidget ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeWidget_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_GazeWidget, TEXT("UAzr_GazeWidget"), &Z_Registration_Info_UClass_UAzr_GazeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_GazeWidget), 1731515116U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeWidget_h__Script_AzurealXR_52b1476c4f1013ef870016b78b2668ea7e5a0cc5{
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
