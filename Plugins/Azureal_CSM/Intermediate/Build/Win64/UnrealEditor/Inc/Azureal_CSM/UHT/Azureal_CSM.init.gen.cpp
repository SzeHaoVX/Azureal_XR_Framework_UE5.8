// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureal_CSM_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	AZUREAL_CSM_API UFunction* Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterDataUpdated__DelegateSignature(ETypeConstructPhase);
	AZUREAL_CSM_API UFunction* Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterRowClicked__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Azureal_CSM;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Azureal_CSM(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_Azureal_CSM.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterDataUpdated__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Azureal_CSM_OnChapterRowClicked__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Azureal_CSM",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x065F49BF,
			0x77F0F71D,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Azureal_CSM.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Azureal_CSM.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Azureal_CSM(Z_Construct_UPackage__Script_Azureal_CSM, TEXT("/Script/Azureal_CSM"), Z_Registration_Info_UPackage__Script_Azureal_CSM, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x065F49BF, 0x77F0F71D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
