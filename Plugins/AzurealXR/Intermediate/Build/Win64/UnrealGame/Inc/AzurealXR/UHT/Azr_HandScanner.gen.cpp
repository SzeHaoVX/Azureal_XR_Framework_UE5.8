// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_HandScanner.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_HandScanner() {}

// ********** Begin Cross Module References ********************************************************
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Grab_NoRegister();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandScanner();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_HandScanner_NoRegister();
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Latch_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AzurealXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAzr_HandScanner Function OnCapsuleEndOverlap ****************************
struct Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics
{
	struct Azr_HandScanner_eventOnCapsuleEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCapsuleEndOverlap constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCapsuleEndOverlap constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCapsuleEndOverlap Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnCapsuleEndOverlap Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_HandScanner, nullptr, "OnCapsuleEndOverlap", 	Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::Azr_HandScanner_eventOnCapsuleEndOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::Azr_HandScanner_eventOnCapsuleEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_HandScanner::execOnCapsuleEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCapsuleEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function OnCapsuleEndOverlap ******************************

// ********** Begin Class UAzr_HandScanner Function OnCapsuleOverlap *******************************
struct Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics
{
	struct Azr_HandScanner_eventOnCapsuleOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCapsuleOverlap constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCapsuleOverlap constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCapsuleOverlap Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Azr_HandScanner_eventOnCapsuleOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_HandScanner_eventOnCapsuleOverlap_Parms), &Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_HandScanner_eventOnCapsuleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::PropPointers) < 2048);
// ********** End Function OnCapsuleOverlap Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_HandScanner, nullptr, "OnCapsuleOverlap", 	Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::Azr_HandScanner_eventOnCapsuleOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::Azr_HandScanner_eventOnCapsuleOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_HandScanner::execOnCapsuleOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCapsuleOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function OnCapsuleOverlap *********************************

// ********** Begin Class UAzr_HandScanner Function ProcessGrabInput *******************************
struct Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics
{
	struct Azr_HandScanner_eventProcessGrabInput_Parms
	{
		bool bIsPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Azureal|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- INPUT API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- INPUT API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessGrabInput constinit property declarations **********************
	static void NewProp_bIsPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessGrabInput constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessGrabInput Property Definitions *********************************
void Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::NewProp_bIsPressed_SetBit(void* Obj)
{
	((Azr_HandScanner_eventProcessGrabInput_Parms*)Obj)->bIsPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Azr_HandScanner_eventProcessGrabInput_Parms), &Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::NewProp_bIsPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::PropPointers) < 2048);
// ********** End Function ProcessGrabInput Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAzr_HandScanner, nullptr, "ProcessGrabInput", 	Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::Azr_HandScanner_eventProcessGrabInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::Azr_HandScanner_eventProcessGrabInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAzr_HandScanner::execProcessGrabInput)
{
	P_GET_UBOOL(Z_Param_bIsPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessGrabInput(Z_Param_bIsPressed);
	P_NATIVE_END;
}
// ********** End Class UAzr_HandScanner Function ProcessGrabInput *********************************

// ********** Begin Class UAzr_HandScanner *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_HandScanner;
UClass* UAzr_HandScanner::GetPrivateStaticClass()
{
	using TClass = UAzr_HandScanner;
	if (!Z_Registration_Info_UClass_UAzr_HandScanner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Azr_HandScanner"),
			Z_Registration_Info_UClass_UAzr_HandScanner.InnerSingleton,
			StaticRegisterNativesUAzr_HandScanner,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAzr_HandScanner.InnerSingleton;
}
UClass* Z_Construct_UClass_UAzr_HandScanner_NoRegister()
{
	return UAzr_HandScanner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAzr_HandScanner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Azr_HandScanner.h" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractProfile_MetaData[] = {
		{ "Category", "Azureal|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIGURATION ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURATION ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightHand_MetaData[] = {
		{ "Category", "Azureal|Config" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugVisuals_MetaData[] = {
		{ "Category", "Azureal|Debug" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractCapsule_MetaData[] = {
		{ "Category", "Azureal|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHoveredComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeldComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHoveredLatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeldLatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_HandScanner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_HandScanner constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InteractProfile;
	static void NewProp_bIsRightHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
	static void NewProp_bShowDebugVisuals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugVisuals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractCapsule;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHoveredComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHeldComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHoveredLatch;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentHeldLatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_HandScanner constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnCapsuleEndOverlap"), .Pointer = &UAzr_HandScanner::execOnCapsuleEndOverlap },
		{ .NameUTF8 = UTF8TEXT("OnCapsuleOverlap"), .Pointer = &UAzr_HandScanner::execOnCapsuleOverlap },
		{ .NameUTF8 = UTF8TEXT("ProcessGrabInput"), .Pointer = &UAzr_HandScanner::execProcessGrabInput },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleEndOverlap, "OnCapsuleEndOverlap" }, // 691728273
		{ &Z_Construct_UFunction_UAzr_HandScanner_OnCapsuleOverlap, "OnCapsuleOverlap" }, // 3395003406
		{ &Z_Construct_UFunction_UAzr_HandScanner_ProcessGrabInput, "ProcessGrabInput" }, // 3649138180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_HandScanner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAzr_HandScanner_Statics

// ********** Begin Class UAzr_HandScanner Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_InteractProfile = { "InteractProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, InteractProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractProfile_MetaData), NewProp_InteractProfile_MetaData) };
void Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
{
	((UAzr_HandScanner*)Obj)->bIsRightHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_HandScanner), &Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRightHand_MetaData), NewProp_bIsRightHand_MetaData) };
void Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bShowDebugVisuals_SetBit(void* Obj)
{
	((UAzr_HandScanner*)Obj)->bShowDebugVisuals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bShowDebugVisuals = { "bShowDebugVisuals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAzr_HandScanner), &Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bShowDebugVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugVisuals_MetaData), NewProp_bShowDebugVisuals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_InteractCapsule = { "InteractCapsule", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, InteractCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractCapsule_MetaData), NewProp_InteractCapsule_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHoveredComponent = { "CurrentHoveredComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHoveredComponent), Z_Construct_UClass_UAzr_Grab_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHoveredComponent_MetaData), NewProp_CurrentHoveredComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHeldComponent = { "CurrentHeldComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHeldComponent), Z_Construct_UClass_UAzr_Grab_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeldComponent_MetaData), NewProp_CurrentHeldComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHoveredLatch = { "CurrentHoveredLatch", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHoveredLatch), Z_Construct_UClass_UAzr_Latch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHoveredLatch_MetaData), NewProp_CurrentHoveredLatch_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHeldLatch = { "CurrentHeldLatch", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_HandScanner, CurrentHeldLatch), Z_Construct_UClass_UAzr_Latch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeldLatch_MetaData), NewProp_CurrentHeldLatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzr_HandScanner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_InteractProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bIsRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_bShowDebugVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_InteractCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHoveredComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHeldComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHoveredLatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzr_HandScanner_Statics::NewProp_CurrentHeldLatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandScanner_Statics::PropPointers) < 2048);
// ********** End Class UAzr_HandScanner Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UAzr_HandScanner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandScanner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzr_HandScanner_Statics::ClassParams = {
	&UAzr_HandScanner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAzr_HandScanner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandScanner_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAzr_HandScanner_Statics::Class_MetaDataParams), Z_Construct_UClass_UAzr_HandScanner_Statics::Class_MetaDataParams)
};
void UAzr_HandScanner::StaticRegisterNativesUAzr_HandScanner()
{
	UClass* Class = UAzr_HandScanner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAzr_HandScanner_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAzr_HandScanner()
{
	if (!Z_Registration_Info_UClass_UAzr_HandScanner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_HandScanner.OuterSingleton, Z_Construct_UClass_UAzr_HandScanner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_HandScanner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_HandScanner);
UAzr_HandScanner::~UAzr_HandScanner() {}
// ********** End Class UAzr_HandScanner ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h__Script_AzurealXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_HandScanner, UAzr_HandScanner::StaticClass, TEXT("UAzr_HandScanner"), &Z_Registration_Info_UClass_UAzr_HandScanner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_HandScanner), 3728833907U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h__Script_AzurealXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h__Script_AzurealXR_2450125112{
	TEXT("/Script/AzurealXR"),
	Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h__Script_AzurealXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_Framework_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_HandScanner_h__Script_AzurealXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
