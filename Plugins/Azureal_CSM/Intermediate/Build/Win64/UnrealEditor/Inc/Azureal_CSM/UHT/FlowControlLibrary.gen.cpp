// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowControlLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeFlowControlLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EFlowMode(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EFlowResult(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UFlowControlLibrary(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UFlowControlLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EFlowMode *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EFlowMode_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EFlowMode>()
{
	return Z_Construct_UEnum_Azureal_CSM_EFlowMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1. Define the Input Mode\n" },
#endif
		{ "Explanation.DisplayName", "Explanation (Conditional)" },
		{ "Explanation.Name", "EFlowMode::Explanation" },
		{ "Interaction.DisplayName", "Interaction (Mandatory)" },
		{ "Interaction.Name", "EFlowMode::Interaction" },
		{ "ModuleRelativePath", "Public/FlowControlLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1. Define the Input Mode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlowMode::Interaction", (int64)EFlowMode::Interaction },
		{ "EFlowMode::Explanation", (int64)EFlowMode::Explanation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EFlowMode",
	"EFlowMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFlowMode;
UEnum* Z_Construct_UEnum_Azureal_CSM_EFlowMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFlowMode.OuterSingleton)
		{
			ZRIE_EFlowMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EFlowMode, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EFlowMode"));
		}
		return ZRIE_EFlowMode.OuterSingleton;
	}
	if (!ZRIE_EFlowMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFlowMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFlowMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFlowMode *******************************************************************

// ********** Begin Enum EFlowResult ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EFlowResult_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EFlowResult>()
{
	return Z_Construct_UEnum_Azureal_CSM_EFlowResult(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2. Define the Output Pins\n" },
#endif
		{ "ModuleRelativePath", "Public/FlowControlLibrary.h" },
		{ "RunStep.DisplayName", "Run Step" },
		{ "RunStep.Name", "EFlowResult::RunStep" },
		{ "Skip.DisplayName", "Skip / Continue" },
		{ "Skip.Name", "EFlowResult::Skip" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2. Define the Output Pins" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlowResult::RunStep", (int64)EFlowResult::RunStep },
		{ "EFlowResult::Skip", (int64)EFlowResult::Skip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EFlowResult",
	"EFlowResult",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EFlowResult;
UEnum* Z_Construct_UEnum_Azureal_CSM_EFlowResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EFlowResult.OuterSingleton)
		{
			ZRIE_EFlowResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EFlowResult, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EFlowResult"));
		}
		return ZRIE_EFlowResult.OuterSingleton;
	}
	if (!ZRIE_EFlowResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EFlowResult.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EFlowResult.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EFlowResult *****************************************************************

// ********** Begin Class UFlowControlLibrary Function FlowController ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UFlowControlLibrary_FlowController_Statics
struct UHT_STATICS
{
	struct FlowControlLibrary_eventFlowController_Parms
	{
		EFlowMode Mode;
		bool bExplanationCondition;
		EFlowResult OutBranch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Flow Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Controls flow based on Mode.\n     * @param Mode - Interaction triggers 'Run Step'. Explanation checks the boolean.\n     * @param bExplanationCondition - Only used if Mode is Explanation.\n     * @param OutBranch - The output execution path.\n     */" },
#endif
		{ "ExpandEnumAsExecs", "OutBranch" },
		{ "ModuleRelativePath", "Public/FlowControlLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls flow based on Mode.\n@param Mode - Interaction triggers 'Run Step'. Explanation checks the boolean.\n@param bExplanationCondition - Only used if Mode is Explanation.\n@param OutBranch - The output execution path." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FlowController constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_bExplanationCondition_SetBit(void* Obj)
	{
		((FlowControlLibrary_eventFlowController_Parms*)Obj)->bExplanationCondition = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplanationCondition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBranch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutBranch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FlowController constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FlowController Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FlowControlLibrary_eventFlowController_Parms, Mode), Z_Construct_UEnum_Azureal_CSM_EFlowMode, METADATA_PARAMS(0, nullptr) }; // 4d6208666121164b92e247d843502072ba552cb4
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bExplanationCondition = { "bExplanationCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FlowControlLibrary_eventFlowController_Parms), &UHT_STATICS::NewProp_bExplanationCondition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutBranch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutBranch = { "OutBranch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FlowControlLibrary_eventFlowController_Parms, OutBranch), Z_Construct_UEnum_Azureal_CSM_EFlowResult, METADATA_PARAMS(0, nullptr) }; // c24b97dc3a3f90c3d6f189e6fc4d89030eacb0ad
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bExplanationCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutBranch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutBranch,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FlowController Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UFlowControlLibrary, nullptr, "FlowController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::FlowControlLibrary_eventFlowController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::FlowControlLibrary_eventFlowController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowControlLibrary_FlowController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UFlowControlLibrary::execFlowController)
{
	P_GET_ENUM(EFlowMode,Z_Param_Mode);
	P_GET_UBOOL(Z_Param_bExplanationCondition);
	P_GET_ENUM_REF(EFlowResult,Z_Param_Out_OutBranch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlowControlLibrary::FlowController(EFlowMode(Z_Param_Mode),Z_Param_bExplanationCondition,(EFlowResult&)(Z_Param_Out_OutBranch));
	P_NATIVE_END;
}
// ********** End Class UFlowControlLibrary Function FlowController ********************************

// ********** Begin Class UFlowControlLibrary ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UFlowControlLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "FlowControlLibrary.h" },
		{ "ModuleRelativePath", "Public/FlowControlLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFlowControlLibrary constinit property declarations **********************
// ********** End Class UFlowControlLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FlowController"), .Pointer = &UFlowControlLibrary::execFlowController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowControlLibrary_FlowController, "FlowController" }, // 4e36ee6157f2794121916b28500c84a3694a55cb
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowControlLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UFlowControlLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UFlowControlLibrary_StaticRegisterNativesUFlowControlLibrary()
{
	UClass* Class = UFlowControlLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFlowControlLibrary;
UClass* Z_Construct_UClass_UFlowControlLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UFlowControlLibrary;
		if (!Z_Registration_Info_UClass_UFlowControlLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("FlowControlLibrary"),
				Z_Registration_Info_UClass_UFlowControlLibrary.InnerSingleton,
				UFlowControlLibrary_StaticRegisterNativesUFlowControlLibrary,
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
		return Z_Registration_Info_UClass_UFlowControlLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UFlowControlLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowControlLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowControlLibrary.OuterSingleton;
}
#undef UHT_STATICS
UFlowControlLibrary::UFlowControlLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFlowControlLibrary);
UFlowControlLibrary::~UFlowControlLibrary() {}
// ********** End Class UFlowControlLibrary ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_Azureal_CSM_EFlowMode, TEXT("EFlowMode"), &ZRIE_EFlowMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1298270310U) },
		{ Z_Construct_UEnum_Azureal_CSM_EFlowResult, TEXT("EFlowResult"), &ZRIE_EFlowResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3259733980U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowControlLibrary, TEXT("UFlowControlLibrary"), &Z_Registration_Info_UClass_UFlowControlLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowControlLibrary), 930345806U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_FlowControlLibrary_h__Script_Azureal_CSM_da50dcca235ef569be36d3653e82a55e4aedbfd3{
	TEXT("/Script/Azureal_CSM"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
