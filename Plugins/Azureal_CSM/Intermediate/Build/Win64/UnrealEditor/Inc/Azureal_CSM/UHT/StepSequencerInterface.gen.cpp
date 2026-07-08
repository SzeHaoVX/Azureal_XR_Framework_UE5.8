// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StepSequencerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStepSequencerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UStepSequencerInterface(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_IStepSequencerInterface(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_UStepSequencerInterface(ETypeConstructPhase);
AZUREAL_CSM_API UClass* Z_Construct_UClass_IStepSequencerInterface(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Interface UStepSequencerInterface Function RunStepsOrder ***********************
void IStepSequencerInterface::RunStepsOrder()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RunStepsOrder instead.");
}
static FName NAME_UStepSequencerInterface_RunStepsOrder = FName(TEXT("RunStepsOrder"));
void IStepSequencerInterface::Execute_RunStepsOrder(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UStepSequencerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UStepSequencerInterface_RunStepsOrder);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IStepSequencerInterface*)(O->GetNativeInterfaceAddress(UStepSequencerInterface::StaticClass())))
	{
		I->RunStepsOrder_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStepSequencerInterface_RunStepsOrder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Sequencer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * Fires the step logic in your Game Manager.\n     * In Blueprint, implement \"Event Run Steps Order\".\n     */" },
#endif
		{ "ModuleRelativePath", "Public/StepSequencerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires the step logic in your Game Manager.\nIn Blueprint, implement \"Event Run Steps Order\"." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RunStepsOrder constinit property declarations *************************
// ********** End Function RunStepsOrder constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStepSequencerInterface, nullptr, "RunStepsOrder", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UStepSequencerInterface_RunStepsOrder(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IStepSequencerInterface::execRunStepsOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunStepsOrder_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UStepSequencerInterface Function RunStepsOrder *************************

// ********** Begin Interface UStepSequencerInterface **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStepSequencerInterface_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StepSequencerInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UStepSequencerInterface constinit property declarations **************
// ********** End Interface UStepSequencerInterface constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RunStepsOrder"), .Pointer = &IStepSequencerInterface::execRunStepsOrder },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStepSequencerInterface_RunStepsOrder, "RunStepsOrder" }, // 80d33fde58648a5cfc851f94631ed709619f9e6b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStepSequencerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Azureal_CSM,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStepSequencerInterface,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UStepSequencerInterface_StaticRegisterNativesUStepSequencerInterface()
{
	UClass* Class = UStepSequencerInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStepSequencerInterface;
UClass* Z_Construct_UClass_UStepSequencerInterface(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStepSequencerInterface;
		if (!Z_Registration_Info_UClass_UStepSequencerInterface.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StepSequencerInterface"),
				Z_Registration_Info_UClass_UStepSequencerInterface.InnerSingleton,
				UStepSequencerInterface_StaticRegisterNativesUStepSequencerInterface,
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
		return Z_Registration_Info_UClass_UStepSequencerInterface.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStepSequencerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStepSequencerInterface.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStepSequencerInterface.OuterSingleton;
}
#undef UHT_STATICS
UStepSequencerInterface::UStepSequencerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStepSequencerInterface);
// ********** End Interface UStepSequencerInterface ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h__Script_Azureal_CSM_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStepSequencerInterface, TEXT("UStepSequencerInterface"), &Z_Registration_Info_UClass_UStepSequencerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStepSequencerInterface), 1841097102U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_Azureal_CSM_Source_Azureal_CSM_Public_StepSequencerInterface_h__Script_Azureal_CSM_541ea1d7988e964a2b578b9aecb145f4cd2db711{
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
