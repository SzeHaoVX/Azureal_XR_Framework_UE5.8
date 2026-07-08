// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManualVRPlugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ManualVRPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ManualVRPlugin(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_ManualVRPlugin.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ManualVRPlugin",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xED40D1A1,
			0x3CEC2B38,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ManualVRPlugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ManualVRPlugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ManualVRPlugin(Z_Construct_UPackage__Script_ManualVRPlugin, TEXT("/Script/ManualVRPlugin"), Z_Registration_Info_UPackage__Script_ManualVRPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xED40D1A1, 0x3CEC2B38));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
