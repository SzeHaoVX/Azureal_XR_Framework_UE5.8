// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManualVRPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ManualVRPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ManualVRPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ManualVRPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ManualVRPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x76793D20,
				0xAD6820A5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ManualVRPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ManualVRPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ManualVRPlugin(Z_Construct_UPackage__Script_ManualVRPlugin, TEXT("/Script/ManualVRPlugin"), Z_Registration_Info_UPackage__Script_ManualVRPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x76793D20, 0xAD6820A5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
