// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExplanationFlowLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeExplanationFlowLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_EExplanationResult(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UExplanationFlowLibrary(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UExplanationFlowLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EExplanationResult ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Azureal_CSM_EExplanationResult_Statics
template<> AZUREAL_CSM_NON_ATTRIBUTED_API UEnum* StaticEnum<EExplanationResult>()
{
	return Z_Construct_UEnum_Azureal_CSM_EExplanationResult(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define the Output Pins for the Controller\n" },
#endif
		{ "ModuleRelativePath", "Public/ExplanationFlowLibrary.h" },
		{ "RunStep.DisplayName", "Run Step" },
		{ "RunStep.Name", "EExplanationResult::RunStep" },
		{ "Skip.DisplayName", "Skip" },
		{ "Skip.Name", "EExplanationResult::Skip" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define the Output Pins for the Controller" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EExplanationResult::RunStep", (int64)EExplanationResult::RunStep },
		{ "EExplanationResult::Skip", (int64)EExplanationResult::Skip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
	nullptr,
	"EExplanationResult",
	"EExplanationResult",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EExplanationResult;
UEnum* Z_Construct_UEnum_Azureal_CSM_EExplanationResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EExplanationResult.OuterSingleton)
		{
			ZRIE_EExplanationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Azureal_CSM_EExplanationResult, (UObject*)Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase::Outer), TEXT("EExplanationResult"));
		}
		return ZRIE_EExplanationResult.OuterSingleton;
	}
	if (!ZRIE_EExplanationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EExplanationResult.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EExplanationResult.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EExplanationResult **********************************************************

// ********** Begin Class UExplanationFlowLibrary Function ExplanationFlowController ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UExplanationFlowLibrary_ExplanationFlowController_Statics
struct UHT_STATICS
{
	struct ExplanationFlowLibrary_eventExplanationFlowController_Parms
	{
		EExplanationResult OutBranch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Explanation System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Checks the global boolean.\n     * If True -> Fires 'Run Step'.\n     * If False -> Fires 'Skip'.\n     */" },
#endif
		{ "ExpandEnumAsExecs", "OutBranch" },
		{ "ModuleRelativePath", "Public/ExplanationFlowLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks the global boolean.\nIf True -> Fires 'Run Step'.\nIf False -> Fires 'Skip'." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ExplanationFlowController constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBranch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutBranch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExplanationFlowController constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExplanationFlowController Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutBranch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutBranch = { "OutBranch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ExplanationFlowLibrary_eventExplanationFlowController_Parms, OutBranch), Z_Construct_UEnum_Azureal_CSM_EExplanationResult, METADATA_PARAMS(0, nullptr) }; // 11efaba557e702203f61d6f8a8f6338a8419fbfe
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutBranch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutBranch,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ExplanationFlowController Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UExplanationFlowLibrary, nullptr, "ExplanationFlowController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ExplanationFlowLibrary_eventExplanationFlowController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ExplanationFlowLibrary_eventExplanationFlowController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExplanationFlowLibrary_ExplanationFlowController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UExplanationFlowLibrary::execExplanationFlowController)
{
	P_GET_ENUM_REF(EExplanationResult,Z_Param_Out_OutBranch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UExplanationFlowLibrary::ExplanationFlowController((EExplanationResult&)(Z_Param_Out_OutBranch));
	P_NATIVE_END;
}
// ********** End Class UExplanationFlowLibrary Function ExplanationFlowController *****************

// ********** Begin Class UExplanationFlowLibrary Function IsExplanationEnabled ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UExplanationFlowLibrary_IsExplanationEnabled_Statics
struct UHT_STATICS
{
	struct ExplanationFlowLibrary_eventIsExplanationEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Explanation System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * NEW: Returns the current state of the global boolean.\n     * Used by ChapterSubsystem to calculate total steps correctly.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ExplanationFlowLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Returns the current state of the global boolean.\nUsed by ChapterSubsystem to calculate total steps correctly." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsExplanationEnabled constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExplanationFlowLibrary_eventIsExplanationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsExplanationEnabled constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsExplanationEnabled Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ExplanationFlowLibrary_eventIsExplanationEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsExplanationEnabled Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UExplanationFlowLibrary, nullptr, "IsExplanationEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ExplanationFlowLibrary_eventIsExplanationEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ExplanationFlowLibrary_eventIsExplanationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExplanationFlowLibrary_IsExplanationEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UExplanationFlowLibrary::execIsExplanationEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExplanationFlowLibrary::IsExplanationEnabled();
	P_NATIVE_END;
}
// ********** End Class UExplanationFlowLibrary Function IsExplanationEnabled **********************

// ********** Begin Class UExplanationFlowLibrary Function SetExplanationBoolean *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UExplanationFlowLibrary_SetExplanationBoolean_Statics
struct UHT_STATICS
{
	struct ExplanationFlowLibrary_eventSetExplanationBoolean_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Explanation System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Set this once (e.g., in GameInstance or BeginPlay) to toggle\n     * all Explanation Flow Controller nodes globally.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ExplanationFlowLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this once (e.g., in GameInstance or BeginPlay) to toggle\nall Explanation Flow Controller nodes globally." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetExplanationBoolean constinit property declarations *****************
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((ExplanationFlowLibrary_eventSetExplanationBoolean_Parms*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExplanationBoolean constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExplanationBoolean Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ExplanationFlowLibrary_eventSetExplanationBoolean_Parms), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetExplanationBoolean Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UExplanationFlowLibrary, nullptr, "SetExplanationBoolean", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ExplanationFlowLibrary_eventSetExplanationBoolean_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ExplanationFlowLibrary_eventSetExplanationBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExplanationFlowLibrary_SetExplanationBoolean(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UExplanationFlowLibrary::execSetExplanationBoolean)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UExplanationFlowLibrary::SetExplanationBoolean(Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class UExplanationFlowLibrary Function SetExplanationBoolean *********************

// ********** Begin Class UExplanationFlowLibrary **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UExplanationFlowLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ExplanationFlowLibrary.h" },
		{ "ModuleRelativePath", "Public/ExplanationFlowLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplanationFlowLibrary constinit property declarations ******************
// ********** End Class UExplanationFlowLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ExplanationFlowController"), .Pointer = &UExplanationFlowLibrary::execExplanationFlowController },
		{ .NameUTF8 = UTF8TEXT("IsExplanationEnabled"), .Pointer = &UExplanationFlowLibrary::execIsExplanationEnabled },
		{ .NameUTF8 = UTF8TEXT("SetExplanationBoolean"), .Pointer = &UExplanationFlowLibrary::execSetExplanationBoolean },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExplanationFlowLibrary_ExplanationFlowController, "ExplanationFlowController" }, // c3ea1430317f8d0299d97f7f553b89df90e94723
		{ &Z_Construct_UFunction_UExplanationFlowLibrary_IsExplanationEnabled, "IsExplanationEnabled" }, // 2f21cc8593b881b5d59d670de94265bc50fa8601
		{ &Z_Construct_UFunction_UExplanationFlowLibrary_SetExplanationBoolean, "SetExplanationBoolean" }, // c7c4435d2a9f43f3f236356665dbd7695d1cc223
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplanationFlowLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UExplanationFlowLibrary,
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
static void UExplanationFlowLibrary_StaticRegisterNativesUExplanationFlowLibrary()
{
	UClass* Class = UExplanationFlowLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExplanationFlowLibrary;
UClass* Z_Construct_UClass_UExplanationFlowLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UExplanationFlowLibrary;
		if (!Z_Registration_Info_UClass_UExplanationFlowLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ExplanationFlowLibrary"),
				Z_Registration_Info_UClass_UExplanationFlowLibrary.InnerSingleton,
				UExplanationFlowLibrary_StaticRegisterNativesUExplanationFlowLibrary,
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
		return Z_Registration_Info_UClass_UExplanationFlowLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UExplanationFlowLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplanationFlowLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplanationFlowLibrary.OuterSingleton;
}
#undef UHT_STATICS
UExplanationFlowLibrary::UExplanationFlowLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplanationFlowLibrary);
UExplanationFlowLibrary::~UExplanationFlowLibrary() {}
// ********** End Class UExplanationFlowLibrary ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_Azureal_CSM_EExplanationResult, TEXT("EExplanationResult"), &ZRIE_EExplanationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 300919717U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExplanationFlowLibrary, TEXT("UExplanationFlowLibrary"), &Z_Registration_Info_UClass_UExplanationFlowLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplanationFlowLibrary), 371011976U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_ExplanationFlowLibrary_h__Script_Azureal_CSM_ec758e576a5e5181a3cb32f3881dbc5e2d63034b{
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
