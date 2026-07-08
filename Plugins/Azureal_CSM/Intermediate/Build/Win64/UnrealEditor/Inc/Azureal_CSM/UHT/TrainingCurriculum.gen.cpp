// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainingCurriculum.h"
#include "TrainingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainingCurriculum() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeStep(ETypeConstructPhase);
AZUREAL_CSM_API UScriptStruct* Z_Construct_UScriptStruct_FStepData(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingCurriculum(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingCurriculum(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTrainingCurriculum Function CountFilteredSteps **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingCurriculum_CountFilteredSteps_Statics
struct UHT_STATICS
{
	struct TrainingCurriculum_eventCountFilteredSteps_Parms
	{
		bool bShowExplanations;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Light: Just returns the number (Use for statistics/UI)\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingCurriculum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Light: Just returns the number (Use for statistics/UI)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CountFilteredSteps constinit property declarations ********************
	static void NewProp_bShowExplanations_SetBit(void* Obj)
	{
		((TrainingCurriculum_eventCountFilteredSteps_Parms*)Obj)->bShowExplanations = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowExplanations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CountFilteredSteps constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CountFilteredSteps Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowExplanations = { "bShowExplanations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingCurriculum_eventCountFilteredSteps_Parms), &UHT_STATICS::NewProp_bShowExplanations_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingCurriculum_eventCountFilteredSteps_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowExplanations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CountFilteredSteps Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingCurriculum, nullptr, "CountFilteredSteps", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingCurriculum_eventCountFilteredSteps_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingCurriculum_eventCountFilteredSteps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingCurriculum_CountFilteredSteps(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingCurriculum::execCountFilteredSteps)
{
	P_GET_UBOOL(Z_Param_bShowExplanations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountFilteredSteps(Z_Param_bShowExplanations);
	P_NATIVE_END;
}
// ********** End Class UTrainingCurriculum Function CountFilteredSteps ****************************

// ********** Begin Class UTrainingCurriculum Function GetFilteredSteps ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingCurriculum_GetFilteredSteps_Statics
struct UHT_STATICS
{
	struct TrainingCurriculum_eventGetFilteredSteps_Parms
	{
		bool bShowExplanations;
		TArray<FRuntimeStep> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training Logic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Heavy: Creates a new array (Use for actually running the steps)\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingCurriculum.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heavy: Creates a new array (Use for actually running the steps)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFilteredSteps constinit property declarations **********************
	static void NewProp_bShowExplanations_SetBit(void* Obj)
	{
		((TrainingCurriculum_eventGetFilteredSteps_Parms*)Obj)->bShowExplanations = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowExplanations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFilteredSteps constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFilteredSteps Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowExplanations = { "bShowExplanations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TrainingCurriculum_eventGetFilteredSteps_Parms), &UHT_STATICS::NewProp_bShowExplanations_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimeStep, METADATA_PARAMS(0, nullptr) }; // daeacb9403da96a4069905c24efb72c969cb5c71
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingCurriculum_eventGetFilteredSteps_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // daeacb9403da96a4069905c24efb72c969cb5c71
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowExplanations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFilteredSteps Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingCurriculum, nullptr, "GetFilteredSteps", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingCurriculum_eventGetFilteredSteps_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingCurriculum_eventGetFilteredSteps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingCurriculum_GetFilteredSteps(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingCurriculum::execGetFilteredSteps)
{
	P_GET_UBOOL(Z_Param_bShowExplanations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRuntimeStep>*)Z_Param__Result=P_THIS->GetFilteredSteps(Z_Param_bShowExplanations);
	P_NATIVE_END;
}
// ********** End Class UTrainingCurriculum Function GetFilteredSteps ******************************

// ********** Begin Class UTrainingCurriculum ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTrainingCurriculum_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TrainingCurriculum.h" },
		{ "ModuleRelativePath", "Public/TrainingCurriculum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterSteps_MetaData[] = {
		{ "Category", "Training Content" },
		{ "ModuleRelativePath", "Public/TrainingCurriculum.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTrainingCurriculum constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MasterSteps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MasterSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTrainingCurriculum constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CountFilteredSteps"), .Pointer = &UTrainingCurriculum::execCountFilteredSteps },
		{ .NameUTF8 = UTF8TEXT("GetFilteredSteps"), .Pointer = &UTrainingCurriculum::execGetFilteredSteps },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainingCurriculum_CountFilteredSteps, "CountFilteredSteps" }, // 36d1bd9b4f9f8e6d4cf6a0525c8126dd7f4335fb
		{ &Z_Construct_UFunction_UTrainingCurriculum_GetFilteredSteps, "GetFilteredSteps" }, // 3d80796174850d1a8778535c838202567c616a87
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainingCurriculum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTrainingCurriculum Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MasterSteps_Inner = { "MasterSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStepData, METADATA_PARAMS(0, nullptr) }; // 1a2741a870da610849a07c372cd1eda5d45d7d1c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MasterSteps = { "MasterSteps", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTrainingCurriculum, MasterSteps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterSteps_MetaData), NewProp_MasterSteps_MetaData) }; // 1a2741a870da610849a07c372cd1eda5d45d7d1c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterSteps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MasterSteps,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTrainingCurriculum Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDataAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTrainingCurriculum,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTrainingCurriculum_StaticRegisterNativesUTrainingCurriculum()
{
	UClass* Class = UTrainingCurriculum::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainingCurriculum;
UClass* Z_Construct_UClass_UTrainingCurriculum(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTrainingCurriculum;
		if (!Z_Registration_Info_UClass_UTrainingCurriculum.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TrainingCurriculum"),
				Z_Registration_Info_UClass_UTrainingCurriculum.InnerSingleton,
				UTrainingCurriculum_StaticRegisterNativesUTrainingCurriculum,
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
		return Z_Registration_Info_UClass_UTrainingCurriculum.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTrainingCurriculum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainingCurriculum.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainingCurriculum.OuterSingleton;
}
#undef UHT_STATICS
UTrainingCurriculum::UTrainingCurriculum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrainingCurriculum);
UTrainingCurriculum::~UTrainingCurriculum() {}
// ********** End Class UTrainingCurriculum ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingCurriculum_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainingCurriculum, TEXT("UTrainingCurriculum"), &Z_Registration_Info_UClass_UTrainingCurriculum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainingCurriculum), 2319837851U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingCurriculum_h__Script_Azureal_CSM_f48a8cff2291a67e8477bac1cda0ce9fc4a6c999{
	TEXT("/Script/Azureal_CSM"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
