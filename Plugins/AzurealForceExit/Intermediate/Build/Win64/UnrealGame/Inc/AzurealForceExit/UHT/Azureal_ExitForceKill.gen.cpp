// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azureal_ExitForceKill.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzureal_ExitForceKill() {}

// ********** Begin Cross Module References ********************************************************
AZUREALFORCEEXIT_API UClass* Z_Construct_UClass_UAzureal_ExitForceKill();
AZUREALFORCEEXIT_API UClass* Z_Construct_UClass_UAzureal_ExitForceKill_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AzurealForceExit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAzureal_ExitForceKill Function ForceKillGame ****************************
struct Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzureal_ExitForceKill, nullptr, "ForceKillGame", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzureal_ExitForceKill::execForceKillGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UAzureal_ExitForceKill::ForceKillGame();
	P_NATIVE_END;
}
// ********** End Class UAzureal_ExitForceKill Function ForceKillGame ******************************

// ********** Begin Class UAzureal_ExitForceKill ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAzureal_ExitForceKill;
UClass* UAzureal_ExitForceKill::GetPrivateStaticClass()
{
	using TClass = UAzureal_ExitForceKill;
	if (!Z_Registration_Info_UClass_UAzureal_ExitForceKill.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azureal_ExitForceKill"),
			Z_Registration_Info_UClass_UAzureal_ExitForceKill.InnerSingleton,
			StaticRegisterNativesUAzureal_ExitForceKill,
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
	return Z_Registration_Info_UClass_UAzureal_ExitForceKill.InnerSingleton;
}
UClass* Z_Construct_UClass_UAzureal_ExitForceKill_NoRegister()
{
	return UAzureal_ExitForceKill::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzureal_ExitForceKill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
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
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzureal_ExitForceKill_ForceKillGame, "ForceKillGame" }, // 517315138
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureal_ExitForceKill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzureal_ExitForceKill_Statics
UObject* (*const Z_Construct_UClass_UAzureal_ExitForceKill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealForceExit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzureal_ExitForceKill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzureal_ExitForceKill_Statics::ClassParams = {
	&UAzureal_ExitForceKill::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzureal_ExitForceKill_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzureal_ExitForceKill_Statics::Class_MetaDataParams)
};
void UAzureal_ExitForceKill::StaticRegisterNativesUAzureal_ExitForceKill()
{
	UClass* Class = UAzureal_ExitForceKill::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAzureal_ExitForceKill_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAzureal_ExitForceKill()
{
	if (!Z_Registration_Info_UClass_UAzureal_ExitForceKill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureal_ExitForceKill.OuterSingleton, Z_Construct_UClass_UAzureal_ExitForceKill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzureal_ExitForceKill.OuterSingleton;
}
UAzureal_ExitForceKill::UAzureal_ExitForceKill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzureal_ExitForceKill);
UAzureal_ExitForceKill::~UAzureal_ExitForceKill() {}
// ********** End Class UAzureal_ExitForceKill *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealForceExit_Source_AzurealForceExit_Public_Azureal_ExitForceKill_h__Script_AzurealForceExit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzureal_ExitForceKill, UAzureal_ExitForceKill::StaticClass, TEXT("UAzureal_ExitForceKill"), &Z_Registration_Info_UClass_UAzureal_ExitForceKill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureal_ExitForceKill), 2322565532U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealForceExit_Source_AzurealForceExit_Public_Azureal_ExitForceKill_h__Script_AzurealForceExit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealForceExit_Source_AzurealForceExit_Public_Azureal_ExitForceKill_h__Script_AzurealForceExit_393010264{
	TEXT("/Script/AzurealForceExit"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealForceExit_Source_AzurealForceExit_Public_Azureal_ExitForceKill_h__Script_AzurealForceExit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealForceExit_Source_AzurealForceExit_Public_Azureal_ExitForceKill_h__Script_AzurealForceExit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
