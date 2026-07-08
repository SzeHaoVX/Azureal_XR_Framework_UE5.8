// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChapterBundle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeChapterBundle() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UWorld(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterBundle(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FChapterDef(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UChapterBundle(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingCurriculum(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FChapterDef *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FChapterDef_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FChapterDef>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FChapterDef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChapterBundle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterTitle_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/ChapterBundle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterLevel_MetaData[] = {
		{ "Category", "Content" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map Picker\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterBundle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map Picker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepData_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/ChapterBundle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChapterGameManagerClass_MetaData[] = {
		{ "Category", "Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NEW: The Manager Class for this specific chapter ---\n// You must place an Actor of this class in the actual Level file!\n" },
#endif
		{ "ModuleRelativePath", "Public/ChapterBundle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NEW: The Manager Class for this specific chapter ---\nYou must place an Actor of this class in the actual Level file!" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FChapterDef constinit property declarations ***********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ChapterTitle;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ChapterLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StepData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChapterGameManagerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FChapterDef constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChapterDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FChapterDef Property Definitions **********************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ChapterTitle = { "ChapterTitle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FChapterDef, ChapterTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterTitle_MetaData), NewProp_ChapterTitle_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_ChapterLevel = { "ChapterLevel", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FChapterDef, ChapterLevel), Z_Construct_UClass_UWorld, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterLevel_MetaData), NewProp_ChapterLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StepData = { "StepData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FChapterDef, StepData), Z_Construct_UClass_UTrainingCurriculum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepData_MetaData), NewProp_StepData_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ChapterGameManagerClass = { "ChapterGameManagerClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FChapterDef, ChapterGameManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChapterGameManagerClass_MetaData), NewProp_ChapterGameManagerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StepData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChapterGameManagerClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FChapterDef Property Definitions ************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	&NewStructOps,
	"ChapterDef",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FChapterDef>(),
	alignof(FChapterDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChapterDef;
UScriptStruct* Z_Construct_UScriptStruct_FChapterDef(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FChapterDef.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FChapterDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChapterDef, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("ChapterDef"));
		}
		return Z_Registration_Info_UScriptStruct_FChapterDef.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FChapterDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChapterDef.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FChapterDef.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FChapterDef *********************************************************

// ********** Begin Class UChapterBundle ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UChapterBundle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChapterBundle.h" },
		{ "ModuleRelativePath", "Public/ChapterBundle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllChapters_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/ChapterBundle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UChapterBundle constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllChapters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllChapters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UChapterBundle constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChapterBundle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UChapterBundle Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AllChapters_Inner = { "AllChapters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChapterDef, METADATA_PARAMS(0, nullptr) }; // 74e0d5f98192df1eb6c58c36c1f06a028a4c0e17
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AllChapters = { "AllChapters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UChapterBundle, AllChapters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllChapters_MetaData), NewProp_AllChapters_MetaData) }; // 74e0d5f98192df1eb6c58c36c1f06a028a4c0e17
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllChapters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllChapters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UChapterBundle Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDataAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UChapterBundle,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UChapterBundle;
UClass* Z_Construct_UClass_UChapterBundle(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UChapterBundle;
		if (!Z_Registration_Info_UClass_UChapterBundle.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ChapterBundle"),
				Z_Registration_Info_UClass_UChapterBundle.InnerSingleton,
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
		return Z_Registration_Info_UClass_UChapterBundle.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UChapterBundle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChapterBundle.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UChapterBundle.OuterSingleton;
}
#undef UHT_STATICS
UChapterBundle::UChapterBundle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UChapterBundle);
UChapterBundle::~UChapterBundle() {}
// ********** End Class UChapterBundle *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FChapterDef, Z_Construct_UScriptStruct_FChapterDef_Statics::NewStructOps, TEXT("ChapterDef"),&Z_Registration_Info_UScriptStruct_FChapterDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChapterDef), 1960891897U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChapterBundle, TEXT("UChapterBundle"), &Z_Registration_Info_UClass_UChapterBundle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChapterBundle), 238180411U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ChapterBundle_h__Script_Azureal_CSM_ac38daaf57f61103fda55112d0f19a2b0e9c3894{
	TEXT("/Script/Azureal_CSM"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
