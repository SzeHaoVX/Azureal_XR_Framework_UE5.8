// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_StartSessionAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_StartSessionAction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_StartSessionAction(ETypeConstructPhase);
AZUREALXR_API UFunction* Z_Construct_UDelegateFunction_AzurealXR_StartSessionPin__DelegateSignature(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_StartSessionAction(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FStartSessionPin ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_AzurealXR_StartSessionPin__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_AzurealXR_eventStartSessionPin_Parms
	{
		FString SessionId;
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FStartSessionPin constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FStartSessionPin constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FStartSessionPin Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventStartSessionPin_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AzurealXR_eventStartSessionPin_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FStartSessionPin Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR, nullptr, "StartSessionPin__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_AzurealXR_eventStartSessionPin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_AzurealXR_eventStartSessionPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AzurealXR_StartSessionPin__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FStartSessionPin ********************************************************

// ********** Begin Class UAzr_StartSessionAction Function HandleFailure ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_StartSessionAction_HandleFailure_Statics
struct UHT_STATICS
{
	struct Azr_StartSessionAction_eventHandleFailure_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleFailure constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleFailure constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleFailure Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_StartSessionAction_eventHandleFailure_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleFailure Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_StartSessionAction, nullptr, "HandleFailure", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_StartSessionAction_eventHandleFailure_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_StartSessionAction_eventHandleFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_StartSessionAction_HandleFailure(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_StartSessionAction::execHandleFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFailure(Z_Param_Error);
	P_NATIVE_END;
}
// ********** End Class UAzr_StartSessionAction Function HandleFailure *****************************

// ********** Begin Class UAzr_StartSessionAction Function HandleSuccess ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_StartSessionAction_HandleSuccess_Statics
struct UHT_STATICS
{
	struct Azr_StartSessionAction_eventHandleSuccess_Parms
	{
		FString Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSuccess constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSuccess constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSuccess Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_StartSessionAction_eventHandleSuccess_Parms, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSuccess Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_StartSessionAction, nullptr, "HandleSuccess", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_StartSessionAction_eventHandleSuccess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_StartSessionAction_eventHandleSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_StartSessionAction_HandleSuccess(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_StartSessionAction::execHandleSuccess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSuccess(Z_Param_Id);
	P_NATIVE_END;
}
// ********** End Class UAzr_StartSessionAction Function HandleSuccess *****************************

// ********** Begin Class UAzr_StartSessionAction Function StartAzurealSession *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_StartSessionAction_StartAzurealSession_Statics
struct UHT_STATICS
{
	struct Azr_StartSessionAction_eventStartAzurealSession_Parms
	{
		UObject* WorldContextObject;
		UAzr_StartSessionAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Azureal|Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts the Azureal Session and waits for a server response. */" },
#endif
		{ "DisplayName", "Azureal - Start Session" },
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the Azureal Session and waits for a server response." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAzurealSession constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartAzurealSession constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartAzurealSession Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_StartSessionAction_eventStartAzurealSession_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_StartSessionAction_eventStartAzurealSession_Parms, ReturnValue), Z_Construct_UClass_UAzr_StartSessionAction, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartAzurealSession Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_StartSessionAction, nullptr, "StartAzurealSession", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_StartSessionAction_eventStartAzurealSession_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_StartSessionAction_eventStartAzurealSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_StartSessionAction_StartAzurealSession(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_StartSessionAction::execStartAzurealSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAzr_StartSessionAction**)Z_Param__Result=UAzr_StartSessionAction::StartAzurealSession(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UAzr_StartSessionAction Function StartAzurealSession ***********************

// ********** Begin Class UAzr_StartSessionAction **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_StartSessionAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAzr_StartSessionAction\n * Async Blueprint node to start tracking an Azureal Session.\n */" },
#endif
		{ "IncludePath", "Azr_StartSessionAction.h" },
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAzr_StartSessionAction\nAsync Blueprint node to start tracking an Azureal Session." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_StartSessionAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_StartSessionAction constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_StartSessionAction constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleFailure"), .Pointer = &UAzr_StartSessionAction::execHandleFailure },
		{ .NameUTF8 = UTF8TEXT("HandleSuccess"), .Pointer = &UAzr_StartSessionAction::execHandleSuccess },
		{ .NameUTF8 = UTF8TEXT("StartAzurealSession"), .Pointer = &UAzr_StartSessionAction::execStartAzurealSession },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_StartSessionAction_HandleFailure, "HandleFailure" }, // 167f5a963e7d6ccb96b3a0d06a84016dcf92ddc4
		{ &Z_Construct_UFunction_UAzr_StartSessionAction_HandleSuccess, "HandleSuccess" }, // 24d41b196d572506326e588c417f7f81db8ae948
		{ &Z_Construct_UFunction_UAzr_StartSessionAction_StartAzurealSession, "StartAzurealSession" }, // 966368e958a15d9578ba49b69c37631007b7a74b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_StartSessionAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_StartSessionAction Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_StartSessionAction, OnSuccess), Z_Construct_UDelegateFunction_AzurealXR_StartSessionPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 78a1c5cdef3ea7e9a30865013352ef80150d1314
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_StartSessionAction, OnFailure), Z_Construct_UDelegateFunction_AzurealXR_StartSessionPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 78a1c5cdef3ea7e9a30865013352ef80150d1314
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_StartSessionAction, WorldContext), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_StartSessionAction Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_StartSessionAction,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_StartSessionAction_StaticRegisterNativesUAzr_StartSessionAction()
{
	UClass* Class = UAzr_StartSessionAction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_StartSessionAction;
UClass* Z_Construct_UClass_UAzr_StartSessionAction(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_StartSessionAction;
		if (!Z_Registration_Info_UClass_UAzr_StartSessionAction.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_StartSessionAction"),
				Z_Registration_Info_UClass_UAzr_StartSessionAction.InnerSingleton,
				UAzr_StartSessionAction_StaticRegisterNativesUAzr_StartSessionAction,
				DataSizeOf<TClass>(),
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
		return Z_Registration_Info_UClass_UAzr_StartSessionAction.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_StartSessionAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_StartSessionAction.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_StartSessionAction.OuterSingleton;
}
#undef UHT_STATICS
UAzr_StartSessionAction::UAzr_StartSessionAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_StartSessionAction);
UAzr_StartSessionAction::~UAzr_StartSessionAction() {}
// ********** End Class UAzr_StartSessionAction ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_StartSessionAction, TEXT("UAzr_StartSessionAction"), &Z_Registration_Info_UClass_UAzr_StartSessionAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_StartSessionAction), 438862679U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_StartSessionAction_h__Script_AzurealXR_bec1ea73f6673e7809237d11f120bb0d59c5b421{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
