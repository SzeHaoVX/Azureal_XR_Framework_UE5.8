// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_GazeManager.h"

#ifdef AZUREALXR_Azr_GazeManager_generated_h
#error "Azr_GazeManager.generated.h already included, missing '#pragma once' in Azr_GazeManager.h"
#endif
#define AZUREALXR_Azr_GazeManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAzr_Gaze;

// ********** Begin Class UAzr_GazeManager *********************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleZoneTriggered); \
	DECLARE_FUNCTION(execTriggerNextGaze); \
	DECLARE_FUNCTION(execDisableManager); \
	DECLARE_FUNCTION(execEnableManager);


struct Z_Construct_UClass_UAzr_GazeManager_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_GazeManager(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_GazeManager_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_GazeManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_GazeManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_GazeManager) \
	DECLARE_SERIALIZER(UAzr_GazeManager)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_GazeManager(UAzr_GazeManager&&) = delete; \
	UAzr_GazeManager(const UAzr_GazeManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_GazeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_GazeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_GazeManager) \
	NO_API virtual ~UAzr_GazeManager();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_19_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_GazeManager;

// ********** End Class UAzr_GazeManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h

// ********** Begin Enum EAzr_ManagerMode **********************************************************
#define FOREACH_ENUM_EAZR_MANAGERMODE(op) \
	op(EAzr_ManagerMode::Sequential) \
	op(EAzr_ManagerMode::NonSequential) 

enum class EAzr_ManagerMode : uint8;
template<> struct TIsUEnumClass<EAzr_ManagerMode> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ManagerMode>();
// ********** End Enum EAzr_ManagerMode ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
