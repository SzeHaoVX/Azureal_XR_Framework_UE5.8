// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Azr_Pawn.h"

#ifdef AZUREALXR_Azr_Pawn_generated_h
#error "Azr_Pawn.generated.h already included, missing '#pragma once' in Azr_Pawn.h"
#endif
#define AZUREALXR_Azr_Pawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;

// ********** Begin Class AAzr_Pawn ****************************************************************
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRightHandMesh); \
	DECLARE_FUNCTION(execSetLeftHandMesh);


struct Z_Construct_UClass_AAzr_Pawn_Statics;
AZUREALXR_API UClass* Z_Construct_UClass_AAzr_Pawn_NoRegister();

#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAzr_Pawn(); \
	friend struct ::Z_Construct_UClass_AAzr_Pawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AZUREALXR_API UClass* ::Z_Construct_UClass_AAzr_Pawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AAzr_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzurealXR"), Z_Construct_UClass_AAzr_Pawn_NoRegister) \
	DECLARE_SERIALIZER(AAzr_Pawn)


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAzr_Pawn(AAzr_Pawn&&) = delete; \
	AAzr_Pawn(const AAzr_Pawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAzr_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAzr_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAzr_Pawn) \
	NO_API virtual ~AAzr_Pawn();


#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_40_PROLOG
#define FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_43_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAzr_Pawn;

// ********** End Class AAzr_Pawn ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_Pawn_h

// ********** Begin Enum EForwardBehavior **********************************************************
#define FOREACH_ENUM_EFORWARDBEHAVIOR(op) \
	op(EForwardBehavior::Teleport) \
	op(EForwardBehavior::SmoothMove) 

enum class EForwardBehavior : uint8;
template<> struct TIsUEnumClass<EForwardBehavior> { enum { Value = true }; };
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EForwardBehavior>();
// ********** End Enum EForwardBehavior ************************************************************

// ********** Begin Enum ETurnBehavior *************************************************************
#define FOREACH_ENUM_ETURNBEHAVIOR(op) \
	op(ETurnBehavior::SnapTurn) \
	op(ETurnBehavior::SmoothTurn) 

enum class ETurnBehavior : uint8;
template<> struct TIsUEnumClass<ETurnBehavior> { enum { Value = true }; };
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETurnBehavior>();
// ********** End Enum ETurnBehavior ***************************************************************

// ********** Begin Enum EBackBehavior *************************************************************
#define FOREACH_ENUM_EBACKBEHAVIOR(op) \
	op(EBackBehavior::BlinkStep) \
	op(EBackBehavior::SmoothMove) \
	op(EBackBehavior::None) 

enum class EBackBehavior : uint8;
template<> struct TIsUEnumClass<EBackBehavior> { enum { Value = true }; };
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBackBehavior>();
// ********** End Enum EBackBehavior ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
