// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrainingSubStepRow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTrainingSubStepRow() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UEnum* Z_Construct_UEnum_Azureal_CSM_ESubStepState(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingSubStepRow(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UTrainingSubStepRow(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTrainingSubStepRow Function OnStateChanged ******************************
struct TrainingSubStepRow_eventOnStateChanged_Parms
{
	ESubStepState NewState;
};
static FName NAME_UTrainingSubStepRow_OnStateChanged = FName(TEXT("OnStateChanged"));
void UTrainingSubStepRow::OnStateChanged(ESubStepState NewState)
{
	TrainingSubStepRow_eventOnStateChanged_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UTrainingSubStepRow_OnStateChanged);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingSubStepRow_OnStateChanged_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint implements this to update colors/icons\n" },
#endif
		{ "ModuleRelativePath", "Public/TrainingSubStepRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint implements this to update colors/icons" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnStateChanged constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnStateChanged constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnStateChanged Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingSubStepRow_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_Azureal_CSM_ESubStepState, METADATA_PARAMS(0, nullptr) }; // 71581776dfa12d4626f46ca9637bfe6464f57772
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnStateChanged Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingSubStepRow, nullptr, "OnStateChanged", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<TrainingSubStepRow_eventOnStateChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(TrainingSubStepRow_eventOnStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingSubStepRow_OnStateChanged(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTrainingSubStepRow Function OnStateChanged ********************************

// ********** Begin Class UTrainingSubStepRow Function SetState ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTrainingSubStepRow_SetState_Statics
struct UHT_STATICS
{
	struct TrainingSubStepRow_eventSetState_Parms
	{
		ESubStepState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Training UI" },
		{ "ModuleRelativePath", "Public/TrainingSubStepRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetState constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetState constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetState Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingSubStepRow_eventSetState_Parms, NewState), Z_Construct_UEnum_Azureal_CSM_ESubStepState, METADATA_PARAMS(0, nullptr) }; // 71581776dfa12d4626f46ca9637bfe6464f57772
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetState Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTrainingSubStepRow, nullptr, "SetState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TrainingSubStepRow_eventSetState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TrainingSubStepRow_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrainingSubStepRow_SetState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTrainingSubStepRow::execSetState)
{
	P_GET_ENUM(ESubStepState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetState(ESubStepState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class UTrainingSubStepRow Function SetState **************************************

// ********** Begin Class UTrainingSubStepRow ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTrainingSubStepRow_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TrainingSubStepRow.h" },
		{ "ModuleRelativePath", "Public/TrainingSubStepRow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTrainingSubStepRow constinit property declarations **********************
// ********** End Class UTrainingSubStepRow constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetState"), .Pointer = &UTrainingSubStepRow::execSetState },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrainingSubStepRow_OnStateChanged, "OnStateChanged" }, // 1547821e666c15ab5ea675c9e101db57666a404a
		{ &Z_Construct_UFunction_UTrainingSubStepRow_SetState, "SetState" }, // 42c89678d72dfa36bef51acd491972c61c7de8a2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrainingSubStepRow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTrainingSubStepRow,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTrainingSubStepRow_StaticRegisterNativesUTrainingSubStepRow()
{
	UClass* Class = UTrainingSubStepRow::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTrainingSubStepRow;
UClass* Z_Construct_UClass_UTrainingSubStepRow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTrainingSubStepRow;
		if (!Z_Registration_Info_UClass_UTrainingSubStepRow.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TrainingSubStepRow"),
				Z_Registration_Info_UClass_UTrainingSubStepRow.InnerSingleton,
				UTrainingSubStepRow_StaticRegisterNativesUTrainingSubStepRow,
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
		return Z_Registration_Info_UClass_UTrainingSubStepRow.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTrainingSubStepRow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrainingSubStepRow.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrainingSubStepRow.OuterSingleton;
}
#undef UHT_STATICS
UTrainingSubStepRow::UTrainingSubStepRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTrainingSubStepRow);
UTrainingSubStepRow::~UTrainingSubStepRow() {}
// ********** End Class UTrainingSubStepRow ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingSubStepRow_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrainingSubStepRow, TEXT("UTrainingSubStepRow"), &Z_Registration_Info_UClass_UTrainingSubStepRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrainingSubStepRow), 3658608598U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_TrainingSubStepRow_h__Script_Azureal_CSM_03479605969bebf0287ec8416418fec7c8355f82{
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
