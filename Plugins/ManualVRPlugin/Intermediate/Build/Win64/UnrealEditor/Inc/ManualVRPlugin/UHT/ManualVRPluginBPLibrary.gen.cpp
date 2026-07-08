// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManualVRPluginBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeManualVRPluginBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ManualVRPlugin(ETypeConstructPhase);
MANUALVRPLUGIN_API UClass* Z_Construct_UClass_UManualVRPluginBPLibrary(ETypeConstructPhase);
MANUALVRPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSop(ETypeConstructPhase);
MANUALVRPLUGIN_API UClass* Z_Construct_UClass_UManualVRPluginBPLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSop **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSop_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSop>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSop); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sopCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_outcome_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSop constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_sopCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_outcome;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSop constinit property declarations ********************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSop>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSop Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_sopCode = { "sopCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FSop, sopCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sopCode_MetaData), NewProp_sopCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FSop, duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_duration_MetaData), NewProp_duration_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_outcome = { "outcome", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FSop, outcome), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_outcome_MetaData), NewProp_outcome_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_sopCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_outcome,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSop Property Definitions *******************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ManualVRPlugin,
	nullptr,
	&NewStructOps,
	"Sop",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSop>(),
	alignof(FSop),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSop;
UScriptStruct* Z_Construct_UScriptStruct_FSop(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSop.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSop, (UObject*)Z_Construct_UPackage__Script_ManualVRPlugin(ETypeConstructPhase::Outer), TEXT("Sop"));
		}
		return Z_Registration_Info_UScriptStruct_FSop.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSop.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSop.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSop ****************************************************************

// ********** Begin Class UManualVRPluginBPLibrary Function CreateSession **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics
struct UHT_STATICS
{
	struct ManualVRPluginBPLibrary_eventCreateSession_Parms
	{
		FString trainingModuleVersionId;
		FString trainingCourseScheduleId;
		FString privateUserId;
		FString publicUserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Create Session" },
		{ "Keywords", "Create Session" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trainingModuleVersionId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trainingCourseScheduleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_privateUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_publicUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSession constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_trainingModuleVersionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trainingCourseScheduleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_privateUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_publicUserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSession constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSession Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_trainingModuleVersionId = { "trainingModuleVersionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, trainingModuleVersionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trainingModuleVersionId_MetaData), NewProp_trainingModuleVersionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_trainingCourseScheduleId = { "trainingCourseScheduleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, trainingCourseScheduleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trainingCourseScheduleId_MetaData), NewProp_trainingCourseScheduleId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_privateUserId = { "privateUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, privateUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_privateUserId_MetaData), NewProp_privateUserId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_publicUserId = { "publicUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, publicUserId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_publicUserId_MetaData), NewProp_publicUserId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_trainingModuleVersionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_trainingCourseScheduleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_privateUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_publicUserId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSession Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "CreateSession", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ManualVRPluginBPLibrary_eventCreateSession_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ManualVRPluginBPLibrary_eventCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UManualVRPluginBPLibrary::execCreateSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_trainingModuleVersionId);
	P_GET_PROPERTY(FStrProperty,Z_Param_trainingCourseScheduleId);
	P_GET_PROPERTY(FStrProperty,Z_Param_privateUserId);
	P_GET_PROPERTY(FStrProperty,Z_Param_publicUserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UManualVRPluginBPLibrary::CreateSession(Z_Param_trainingModuleVersionId,Z_Param_trainingCourseScheduleId,Z_Param_privateUserId,Z_Param_publicUserId);
	P_NATIVE_END;
}
// ********** End Class UManualVRPluginBPLibrary Function CreateSession ****************************

// ********** Begin Class UManualVRPluginBPLibrary Function End ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UManualVRPluginBPLibrary_End_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR End" },
		{ "Keywords", "End" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function End constinit property declarations ***********************************
// ********** End Function End constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "End", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_End(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UManualVRPluginBPLibrary::execEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UManualVRPluginBPLibrary::End();
	P_NATIVE_END;
}
// ********** End Class UManualVRPluginBPLibrary Function End **************************************

// ********** Begin Class UManualVRPluginBPLibrary Function InitializeCommandLine ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics
struct UHT_STATICS
{
	struct ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms
	{
		FString SourceString;
		FString basedUrl;
		FString userToken;
		FString trainingModuleVersionId;
		FString trainingCourseScheduleId;
		FString privateUserId;
		FString publicUserId;
		FString isTraining;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Initialize" },
		{ "Keywords", "Split a string" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeCommandLine constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_basedUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_userToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trainingModuleVersionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trainingCourseScheduleId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_privateUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_publicUserId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_isTraining;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeCommandLine constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeCommandLine Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceString = { "SourceString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, SourceString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceString_MetaData), NewProp_SourceString_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_basedUrl = { "basedUrl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, basedUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_userToken = { "userToken", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, userToken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_trainingModuleVersionId = { "trainingModuleVersionId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, trainingModuleVersionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_trainingCourseScheduleId = { "trainingCourseScheduleId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, trainingCourseScheduleId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_privateUserId = { "privateUserId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, privateUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_publicUserId = { "publicUserId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, publicUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_isTraining = { "isTraining", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, isTraining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_basedUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_userToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_trainingModuleVersionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_trainingCourseScheduleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_privateUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_publicUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_isTraining,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeCommandLine Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "InitializeCommandLine", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UManualVRPluginBPLibrary::execInitializeCommandLine)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceString);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_basedUrl);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_userToken);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_trainingModuleVersionId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_trainingCourseScheduleId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_privateUserId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_publicUserId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_isTraining);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UManualVRPluginBPLibrary::InitializeCommandLine(Z_Param_SourceString,Z_Param_Out_basedUrl,Z_Param_Out_userToken,Z_Param_Out_trainingModuleVersionId,Z_Param_Out_trainingCourseScheduleId,Z_Param_Out_privateUserId,Z_Param_Out_publicUserId,Z_Param_Out_isTraining);
	P_NATIVE_END;
}
// ********** End Class UManualVRPluginBPLibrary Function InitializeCommandLine ********************

// ********** Begin Class UManualVRPluginBPLibrary Function Pause **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Pause" },
		{ "Keywords", "Pause" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Pause constinit property declarations *********************************
// ********** End Function Pause constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UManualVRPluginBPLibrary::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UManualVRPluginBPLibrary::Pause();
	P_NATIVE_END;
}
// ********** End Class UManualVRPluginBPLibrary Function Pause ************************************

// ********** Begin Class UManualVRPluginBPLibrary Function Resume *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Unpause" },
		{ "Keywords", "Resume" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Resume constinit property declarations ********************************
// ********** End Function Resume constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Resume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UManualVRPluginBPLibrary::execResume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UManualVRPluginBPLibrary::Resume();
	P_NATIVE_END;
}
// ********** End Class UManualVRPluginBPLibrary Function Resume ***********************************

// ********** Begin Class UManualVRPluginBPLibrary Function Start **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UManualVRPluginBPLibrary_Start_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Start" },
		{ "Keywords", "Start" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Start constinit property declarations *********************************
// ********** End Function Start constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Start", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Start(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UManualVRPluginBPLibrary::execStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UManualVRPluginBPLibrary::Start();
	P_NATIVE_END;
}
// ********** End Class UManualVRPluginBPLibrary Function Start ************************************

// ********** Begin Class UManualVRPluginBPLibrary Function Update *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics
struct UHT_STATICS
{
	struct ManualVRPluginBPLibrary_eventUpdate_Parms
	{
		FString chapterCode;
		FString procedureCode;
		FString subProcedureCode;
		int32 completionStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Update" },
		{ "Keywords", "Update" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chapterCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_procedureCode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_subProcedureCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Update constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_chapterCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_procedureCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_subProcedureCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_completionStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Update constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Update Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_chapterCode = { "chapterCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, chapterCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chapterCode_MetaData), NewProp_chapterCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_procedureCode = { "procedureCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, procedureCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_procedureCode_MetaData), NewProp_procedureCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_subProcedureCode = { "subProcedureCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, subProcedureCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_subProcedureCode_MetaData), NewProp_subProcedureCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_completionStatus = { "completionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, completionStatus), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_chapterCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_procedureCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_subProcedureCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_completionStatus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Update Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Update", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ManualVRPluginBPLibrary_eventUpdate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ManualVRPluginBPLibrary_eventUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Update(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UManualVRPluginBPLibrary::execUpdate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_chapterCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_procedureCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_subProcedureCode);
	P_GET_PROPERTY(FIntProperty,Z_Param_completionStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	UManualVRPluginBPLibrary::Update(Z_Param_chapterCode,Z_Param_procedureCode,Z_Param_subProcedureCode,Z_Param_completionStatus);
	P_NATIVE_END;
}
// ********** End Class UManualVRPluginBPLibrary Function Update ***********************************

// ********** Begin Class UManualVRPluginBPLibrary *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UManualVRPluginBPLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ManualVRPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UManualVRPluginBPLibrary constinit property declarations *****************
// ********** End Class UManualVRPluginBPLibrary constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSession"), .Pointer = &UManualVRPluginBPLibrary::execCreateSession },
		{ .NameUTF8 = UTF8TEXT("End"), .Pointer = &UManualVRPluginBPLibrary::execEnd },
		{ .NameUTF8 = UTF8TEXT("InitializeCommandLine"), .Pointer = &UManualVRPluginBPLibrary::execInitializeCommandLine },
		{ .NameUTF8 = UTF8TEXT("Pause"), .Pointer = &UManualVRPluginBPLibrary::execPause },
		{ .NameUTF8 = UTF8TEXT("Resume"), .Pointer = &UManualVRPluginBPLibrary::execResume },
		{ .NameUTF8 = UTF8TEXT("Start"), .Pointer = &UManualVRPluginBPLibrary::execStart },
		{ .NameUTF8 = UTF8TEXT("Update"), .Pointer = &UManualVRPluginBPLibrary::execUpdate },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession, "CreateSession" }, // 0444e4c43b24ae57a5c0c6ef209a4dc018c889f3
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_End, "End" }, // 04f9e63c0c7cd79a4680e10376dc279c20cb7674
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine, "InitializeCommandLine" }, // ba4a815eab6a47b9ee48b23b75637a8f8ab36e70
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause, "Pause" }, // 4d67642025b3ebecf7f4a6de4c793e435722fef5
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume, "Resume" }, // 5c64d72c2b39ac348cf1fcf790723fa936d5d7c1
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Start, "Start" }, // 5e112979a5e824b0e050528ea040d5dd9c16a5e7
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Update, "Update" }, // 14fe92fbc8b335fe34d6a5d4fcd14ff8ea5e8bb4
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManualVRPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ManualVRPlugin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UManualVRPluginBPLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UManualVRPluginBPLibrary_StaticRegisterNativesUManualVRPluginBPLibrary()
{
	UClass* Class = UManualVRPluginBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UManualVRPluginBPLibrary;
UClass* Z_Construct_UClass_UManualVRPluginBPLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UManualVRPluginBPLibrary;
		if (!Z_Registration_Info_UClass_UManualVRPluginBPLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ManualVRPluginBPLibrary"),
				Z_Registration_Info_UClass_UManualVRPluginBPLibrary.InnerSingleton,
				UManualVRPluginBPLibrary_StaticRegisterNativesUManualVRPluginBPLibrary,
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
		return Z_Registration_Info_UClass_UManualVRPluginBPLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UManualVRPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManualVRPluginBPLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UManualVRPluginBPLibrary.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UManualVRPluginBPLibrary);
UManualVRPluginBPLibrary::~UManualVRPluginBPLibrary() {}
// ********** End Class UManualVRPluginBPLibrary ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h__Script_ManualVRPlugin_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSop, Z_Construct_UScriptStruct_FSop_Statics::NewStructOps, TEXT("Sop"),&Z_Registration_Info_UScriptStruct_FSop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSop), 78875049U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManualVRPluginBPLibrary, TEXT("UManualVRPluginBPLibrary"), &Z_Registration_Info_UClass_UManualVRPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManualVRPluginBPLibrary), 1221343284U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h__Script_ManualVRPlugin_8487c4cd118d2ddc485bb48c9c703e9a12148e73{
	TEXT("/Script/ManualVRPlugin"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
