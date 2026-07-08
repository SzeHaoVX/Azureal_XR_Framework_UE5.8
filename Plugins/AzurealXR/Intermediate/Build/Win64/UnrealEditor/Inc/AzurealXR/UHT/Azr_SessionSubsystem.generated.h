// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_SessionSubsystem.h"

#ifdef AZUREALXR_Azr_SessionSubsystem_generated_h
#error "Azr_SessionSubsystem.generated.h already included, missing '#pragma once' in Azr_SessionSubsystem.h"
#endif
#define AZUREALXR_Azr_SessionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAzr_SessionSubsystem ****************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSessionLanguage); \
	DECLARE_FUNCTION(execGetCurrentSessionId); \
	DECLARE_FUNCTION(execIsOnlineMode); \
	DECLARE_FUNCTION(execIsExplainedMode);


struct Z_Construct_UClass_UAzr_SessionSubsystem_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_SessionSubsystem(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_SessionSubsystem_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_SessionSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_SessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_SessionSubsystem) \
	DECLARE_SERIALIZER(UAzr_SessionSubsystem)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzr_SessionSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_SessionSubsystem(UAzr_SessionSubsystem&&) = delete; \
	UAzr_SessionSubsystem(const UAzr_SessionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_SessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_SessionSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzr_SessionSubsystem) \
	NO_API virtual ~UAzr_SessionSubsystem();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_22_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_SessionSubsystem;

// ********** End Class UAzr_SessionSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_SessionSubsystem_h

// ********** Begin Enum EAzr_SessionType **********************************************************
#define FOREACH_ENUM_EAZR_SESSIONTYPE(op) \
	op(EAzr_SessionType::Training) \
	op(EAzr_SessionType::Event) \
	op(EAzr_SessionType::Course) 

enum class EAzr_SessionType : uint8;
template<> struct TIsUEnumClass<EAzr_SessionType> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_SessionType>();
// ********** End Enum EAzr_SessionType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
