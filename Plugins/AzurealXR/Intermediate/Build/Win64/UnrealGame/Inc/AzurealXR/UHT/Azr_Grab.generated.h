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
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAzr_AttachTarget;
enum class EAzr_HandType : uint8;

// ********** Begin Delegate FOnGrabEvent **********************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_26_DELEGATE \
AZUREALXR_API void FOnGrabEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabEvent);


// ********** End Delegate FOnGrabEvent ************************************************************

// ********** Begin Delegate FOnGrabAttachedEvent **************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_27_DELEGATE \
AZUREALXR_API void FOnGrabAttachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabAttachedEvent, int32 SequenceID, UAzr_AttachTarget* Target);


// ********** End Delegate FOnGrabAttachedEvent ****************************************************

// ********** Begin Delegate FOnGrabDetachedEvent **************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_28_DELEGATE \
AZUREALXR_API void FOnGrabDetachedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabDetachedEvent, int32 SequenceID, UAzr_AttachTarget* Target);


// ********** End Delegate FOnGrabDetachedEvent ****************************************************

// ********** Begin Delegate FOnGrabRemoved ********************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_29_DELEGATE \
AZUREALXR_API void FOnGrabRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnGrabRemoved);


// ********** End Delegate FOnGrabRemoved **********************************************************

// ********** Begin Delegate FOnGrabTriggerEvent ***************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_30_DELEGATE \
AZUREALXR_API void FOnGrabTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGrabTriggerEvent, float Value);


// ********** End Delegate FOnGrabTriggerEvent *****************************************************

// ********** Begin ScriptStruct FAzr_GrabConfig ***************************************************
struct Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics;
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabConfig_Statics; \
	AZUREALXR_API static class UScriptStruct* StaticStruct();


struct FAzr_GrabConfig;
// ********** End ScriptStruct FAzr_GrabConfig *****************************************************

// ********** Begin ScriptStruct FAzr_GrabAttachConfig *********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics;
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabAttachConfig_Statics; \
	AZUREALXR_API static class UScriptStruct* StaticStruct(); \
	typedef FAzr_GrabConfig Super;


struct FAzr_GrabAttachConfig;
// ********** End ScriptStruct FAzr_GrabAttachConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabRemoveConfig *********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics;
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabRemoveConfig_Statics; \
	AZUREALXR_API static class UScriptStruct* StaticStruct(); \
	typedef FAzr_GrabConfig Super;


struct FAzr_GrabRemoveConfig;
// ********** End ScriptStruct FAzr_GrabRemoveConfig ***********************************************

// ********** Begin ScriptStruct FAzr_GrabTriggerConfig ********************************************
struct Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics;
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAzr_GrabTriggerConfig_Statics; \
	AZUREALXR_API static class UScriptStruct* StaticStruct(); \
	typedef FAzr_GrabConfig Super;


struct FAzr_GrabTriggerConfig;
// ********** End ScriptStruct FAzr_GrabTriggerConfig **********************************************

// ********** Begin Class UAzr_Grab ****************************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
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
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab_NoRegister();

#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzr_Grab(); \
	friend struct ::Z_Construct_UClass_UAzr_Grab_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_UAzr_Grab_NoRegister(); \
public: \
	DECLARE_CLASS2(UAzr_Grab, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_UAzr_Grab_NoRegister) \
	DECLARE_SERIALIZER(UAzr_Grab)


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAzr_Grab(UAzr_Grab&&) = delete; \
	UAzr_Grab(const UAzr_Grab&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzr_Grab); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzr_Grab); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAzr_Grab) \
	NO_API virtual ~UAzr_Grab();


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_85_PROLOG
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_88_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAzr_Grab;

// ********** End Class UAzr_Grab ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Grab_h

// ********** Begin Enum EAzr_HandType *************************************************************
#define FOREACH_ENUM_EAZR_HANDTYPE(op) \
	op(EAzr_HandType::Left) \
	op(EAzr_HandType::Right) \
	op(EAzr_HandType::Both) 

enum class EAzr_HandType : uint8;
template<> struct TIsUEnumClass<EAzr_HandType> { enum { Value = true }; };
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_HandType>();
// ********** End Enum EAzr_HandType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
