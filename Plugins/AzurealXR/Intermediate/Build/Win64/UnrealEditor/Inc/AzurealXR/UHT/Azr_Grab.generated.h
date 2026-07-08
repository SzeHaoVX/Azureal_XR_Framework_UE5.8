// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Grab.h"

#ifdef AZUREALXR_Azr_Grab_generated_h
#error "Azr_Grab.generated.h already included, missing '#pragma once' in Azr_Grab.h"
#endif
#define AZUREALXR_Azr_Grab_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAzr_AttachTarget;
enum class EAzr_HandType : uint8;

// ********** Begin ScriptStruct FAzr_GrabConfig ***************************************************
struct Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabConfig(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_GrabConfig(ETypeConstructPhase::Inner); }


struct FAzr_GrabConfig;
// ********** End ScriptStruct FAzr_GrabConfig *****************************************************

// ********** Begin ScriptStruct FAzr_GrabAttachConfig *********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabAttachConfig(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_GrabAttachConfig(ETypeConstructPhase::Inner); } \
	typedef FAzr_GrabConfig Super;


struct FAzr_GrabAttachConfig;
// ********** End ScriptStruct FAzr_GrabAttachConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabRemoveConfig *********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig(ETypeConstructPhase::Inner); } \
	typedef FAzr_GrabConfig Super;


struct FAzr_GrabRemoveConfig;
// ********** End ScriptStruct FAzr_GrabRemoveConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabTriggerConfig ********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics;
AZUREALXR_API UScriptStruct* Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig(ETypeConstructPhase::Inner); } \
	typedef FAzr_GrabConfig Super;


struct FAzr_GrabTriggerConfig;
// ********** End ScriptStruct FAzr_GrabTriggerConfig **********************************************

// ********** Begin Class UAzr_Grab ****************************************************************
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execSetTriggerThreshold); \
	DECLARE_FUNCTION(execSetTriggerHand); \
	DECLARE_FUNCTION(execDisableGrabTrigger); \
	DECLARE_FUNCTION(execDisableGrabRemove); \
	DECLARE_FUNCTION(execDisableGrabAttach); \
	DECLARE_FUNCTION(execDisableGrab); \
	DECLARE_FUNCTION(execEnableGrabTrigger); \
	DECLARE_FUNCTION(execEnableGrabRemove); \
	DECLARE_FUNCTION(execEnableGrabAttach); \
	DECLARE_FUNCTION(execEnableGrab);


struct Z_Construct_UClass_UAzr_Grab_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab(ETypeConstructPhase);

#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_96_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UAzr_Grab_Statics; \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_Grab(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UAzr_Grab, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_Grab) \
	DECLARE_SERIALIZER(UAzr_Grab)


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_96_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_Grab(UAzr_Grab&&) = delete; \
	UAzr_Grab(const UAzr_Grab&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_Grab); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_Grab); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_Grab) \
	NO_API virtual ~UAzr_Grab();


#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_93_PROLOG
#define FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_96_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_Grab;

// ********** End Class UAzr_Grab ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h

// ********** Begin Enum EAzr_HandType *************************************************************
#define FOREACH_ENUM_EAZR_HANDTYPE(op) \
	op(EAzr_HandType::Left) \
	op(EAzr_HandType::Right) \
	op(EAzr_HandType::Both) 

enum class EAzr_HandType : uint8;
template<> struct TIsUEnumClass<EAzr_HandType> { enum { Value = true }; };
template<> UE_NODEBUG AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HandType>();
// ********** End Enum EAzr_HandType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
