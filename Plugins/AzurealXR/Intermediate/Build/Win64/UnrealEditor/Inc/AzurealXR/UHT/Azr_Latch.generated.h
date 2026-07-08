// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Latch.h"

#ifdef AZUREALXR_Azr_Latch_generated_h
#error "Azr_Latch.generated.h already included, missing '#pragma once' in Azr_Latch.h"
#endif
#define AZUREALXR_Azr_Latch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAzr_Axis : uint8;
enum class EAzr_LatchType : uint8;

// ********** Begin Class UAzr_Latch ***************************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTriggerInput); \
	DECLARE_FUNCTION(execSetLatchConfig); \
	DECLARE_FUNCTION(execForceLatchRelease); \
	DECLARE_FUNCTION(execDisableLatch); \
	DECLARE_FUNCTION(execEnableLatch);


struct Z_Construct_UClass_UAzr_Latch_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Latch(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_60_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_Latch_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_Latch(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_Latch, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_Latch) \
	DECLARE_SERIALIZER(UAzr_Latch)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_Latch(UAzr_Latch&&) = delete; \
	UAzr_Latch(const UAzr_Latch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_Latch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_Latch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_Latch) \
	NO_API virtual ~UAzr_Latch();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_55_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_60_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_Latch;

// ********** End Class UAzr_Latch *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Latch_h

// ********** Begin Enum EAzr_LatchType ************************************************************
#define FOREACH_ENUM_EAZR_LATCHTYPE(op) \
	op(EAzr_LatchType::Angular) \
	op(EAzr_LatchType::Linear) \
	op(EAzr_LatchType::Rotation) 

enum class EAzr_LatchType : uint8;
template<> struct TIsUEnumClass<EAzr_LatchType> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LatchType>();
// ********** End Enum EAzr_LatchType **************************************************************

// ********** Begin Enum EAzr_Axis *****************************************************************
#define FOREACH_ENUM_EAZR_AXIS(op) \
	op(EAzr_Axis::X_Axis) \
	op(EAzr_Axis::Y_Axis) \
	op(EAzr_Axis::Z_Axis) 

enum class EAzr_Axis : uint8;
template<> struct TIsUEnumClass<EAzr_Axis> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_Axis>();
// ********** End Enum EAzr_Axis *******************************************************************

// ********** Begin Enum EAzr_LatchTrigger *********************************************************
#define FOREACH_ENUM_EAZR_LATCHTRIGGER(op) \
	op(EAzr_LatchTrigger::Disabled) \
	op(EAzr_LatchTrigger::LeftHand) \
	op(EAzr_LatchTrigger::RightHand) \
	op(EAzr_LatchTrigger::BothHands) 

enum class EAzr_LatchTrigger : uint8;
template<> struct TIsUEnumClass<EAzr_LatchTrigger> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_LatchTrigger>();
// ********** End Enum EAzr_LatchTrigger ***********************************************************

// ********** Begin Enum EAzr_AllowedHand **********************************************************
#define FOREACH_ENUM_EAZR_ALLOWEDHAND(op) \
	op(EAzr_AllowedHand::BothHands) \
	op(EAzr_AllowedHand::LeftHand) \
	op(EAzr_AllowedHand::RightHand) 

enum class EAzr_AllowedHand : uint8;
template<> struct TIsUEnumClass<EAzr_AllowedHand> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_AllowedHand>();
// ********** End Enum EAzr_AllowedHand ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
