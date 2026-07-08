// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzurealXR_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature();
	AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature();
	AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature();
	AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature();
	AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature();
	AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature();
	AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AzurealXR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AzurealXR()
	{
		if (!Z_Registration_Info_UPackage__Script_AzurealXR.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_AzurealXR_OnGrabAttachedEvent__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_AzurealXR_OnGrabDetachedEvent__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_AzurealXR_OnGrabEvent__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_AzurealXR_OnGrabRemoved__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_AzurealXR_OnGrabTriggerEvent__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_AzurealXR_OnLatchEvent__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_AzurealXR_OnLatchUpdateEvent__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/AzurealXR",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x9B23E7E8,
			0xC939B047,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AzurealXR.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_AzurealXR.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AzurealXR(Z_Construct_UPackage__Script_AzurealXR, TEXT("/Script/AzurealXR"), Z_Registration_Info_UPackage__Script_AzurealXR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9B23E7E8, 0xC939B047));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
