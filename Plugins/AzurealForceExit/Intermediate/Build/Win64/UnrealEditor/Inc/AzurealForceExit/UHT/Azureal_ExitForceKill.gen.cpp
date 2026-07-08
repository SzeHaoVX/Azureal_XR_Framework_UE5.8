// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azureal_ExitForceKill.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzureal_ExitForceKill() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealForceExit(ETypeConstructPhase);
AZUREALFORCEEXIT_API UClass* Z_Construct_UClass_UAzureal_ExitForceKill(ETypeConstructPhase);
AZUREALFORCEEXIT_API UClass* Z_Construct_UClass_UAzureal_ExitForceKill(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UAzureal_ExitForceKill Function ForceKillGame ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The \"Nuclear Option\" - Instantly kills the game process (Silent)\n" },
#endif
		{ "ModuleRelativePath", "Public/Azureal_ExitForceKill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The \"Nuclear Option\" - Instantly kills the game process (Silent)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ForceKillGame constinit property declarations *************************
// ********** End Function ForceKillGame constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzureal_ExitForceKill, nullptr, "ForceKillGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzureal_ExitForceKill::execForceKillGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAzureal_ExitForceKill::ForceKillGame();
	P_NATIVE_END;
}
// ********** End Class UAzureal_ExitForceKill Function ForceKillGame ******************************

// ********** Begin Class UAzureal_ExitForceKill ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzureal_ExitForceKill_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The API Macro matches your Plugin Name (Uppercase, No Spaces)\n" },
#endif
		{ "IncludePath", "Azureal_ExitForceKill.h" },
		{ "ModuleRelativePath", "Public/Azureal_ExitForceKill.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The API Macro matches your Plugin Name (Uppercase, No Spaces)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAzureal_ExitForceKill constinit property declarations *******************
// ********** End Class UAzureal_ExitForceKill constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ForceKillGame"), .Pointer = &UAzureal_ExitForceKill::execForceKillGame },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame, "ForceKillGame" }, // 37f3895d9eaed2196ab8ab610a7dc077fe524bc1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureal_ExitForceKill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealForceExit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzureal_ExitForceKill,
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
static void UAzureal_ExitForceKill_StaticRegisterNativesUAzureal_ExitForceKill()
{
	UClass* Class = UAzureal_ExitForceKill::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzureal_ExitForceKill;
UClass* Z_Construct_UClass_UAzureal_ExitForceKill(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzureal_ExitForceKill;
		if (!Z_Registration_Info_UClass_UAzureal_ExitForceKill.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azureal_ExitForceKill"),
				Z_Registration_Info_UClass_UAzureal_ExitForceKill.InnerSingleton,
				UAzureal_ExitForceKill_StaticRegisterNativesUAzureal_ExitForceKill,
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
		return Z_Registration_Info_UClass_UAzureal_ExitForceKill.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzureal_ExitForceKill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureal_ExitForceKill.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzureal_ExitForceKill.OuterSingleton;
}
#undef UHT_STATICS
UAzureal_ExitForceKill::UAzureal_ExitForceKill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzureal_ExitForceKill);
UAzureal_ExitForceKill::~UAzureal_ExitForceKill() {}
// ********** End Class UAzureal_ExitForceKill *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealForceExit_Source_AzurealForceExit_Public_Azureal_ExitForceKill_h__Script_AzurealForceExit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzureal_ExitForceKill, TEXT("UAzureal_ExitForceKill"), &Z_Registration_Info_UClass_UAzureal_ExitForceKill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureal_ExitForceKill), 3991982785U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealForceExit_Source_AzurealForceExit_Public_Azureal_ExitForceKill_h__Script_AzurealForceExit_ee5addc382746180d16aa3134eddbdd0982e6a57{
	TEXT("/Script/AzurealForceExit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
