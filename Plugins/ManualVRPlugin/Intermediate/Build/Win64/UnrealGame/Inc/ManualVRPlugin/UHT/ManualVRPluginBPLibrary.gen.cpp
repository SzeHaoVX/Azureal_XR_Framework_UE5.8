// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManualVRPlugin/Public/ManualVRPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManualVRPluginBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANUALVRPLUGIN_API UClass* Z_Construct_UClass_UManualVRPluginBPLibrary();
	MANUALVRPLUGIN_API UClass* Z_Construct_UClass_UManualVRPluginBPLibrary_NoRegister();
	MANUALVRPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSop();
	UPackage* Z_Construct_UPackage__Script_ManualVRPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Sop;
class UScriptStruct* FSop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Sop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Sop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSop, (UObject*)Z_Construct_UPackage__Script_ManualVRPlugin(), TEXT("Sop"));
	}
	return Z_Registration_Info_UScriptStruct_Sop.OuterSingleton;
}
template<> MANUALVRPLUGIN_API UScriptStruct* StaticStruct<FSop>()
{
	return FSop::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sopCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sopCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_outcome_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_outcome;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSop_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSop>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSop_Statics::NewProp_sopCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSop_Statics::NewProp_sopCode = { "sopCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSop, sopCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSop_Statics::NewProp_sopCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSop_Statics::NewProp_sopCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSop_Statics::NewProp_duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSop_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSop, duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSop_Statics::NewProp_duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSop_Statics::NewProp_duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSop_Statics::NewProp_outcome_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSop_Statics::NewProp_outcome = { "outcome", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSop, outcome), METADATA_PARAMS(Z_Construct_UScriptStruct_FSop_Statics::NewProp_outcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSop_Statics::NewProp_outcome_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSop_Statics::NewProp_sopCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSop_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSop_Statics::NewProp_outcome,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ManualVRPlugin,
		nullptr,
		&NewStructOps,
		"Sop",
		sizeof(FSop),
		alignof(FSop),
		Z_Construct_UScriptStruct_FSop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSop()
	{
		if (!Z_Registration_Info_UScriptStruct_Sop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Sop.InnerSingleton, Z_Construct_UScriptStruct_FSop_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Sop.InnerSingleton;
	}
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
	DEFINE_FUNCTION(UManualVRPluginBPLibrary::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UManualVRPluginBPLibrary::End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManualVRPluginBPLibrary::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UManualVRPluginBPLibrary::Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManualVRPluginBPLibrary::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UManualVRPluginBPLibrary::Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManualVRPluginBPLibrary::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UManualVRPluginBPLibrary::Start();
		P_NATIVE_END;
	}
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
	void UManualVRPluginBPLibrary::StaticRegisterNativesUManualVRPluginBPLibrary()
	{
		UClass* Class = UManualVRPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSession", &UManualVRPluginBPLibrary::execCreateSession },
			{ "End", &UManualVRPluginBPLibrary::execEnd },
			{ "InitializeCommandLine", &UManualVRPluginBPLibrary::execInitializeCommandLine },
			{ "Pause", &UManualVRPluginBPLibrary::execPause },
			{ "Resume", &UManualVRPluginBPLibrary::execResume },
			{ "Start", &UManualVRPluginBPLibrary::execStart },
			{ "Update", &UManualVRPluginBPLibrary::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics
	{
		struct ManualVRPluginBPLibrary_eventCreateSession_Parms
		{
			FString trainingModuleVersionId;
			FString trainingCourseScheduleId;
			FString privateUserId;
			FString publicUserId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trainingModuleVersionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_trainingModuleVersionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trainingCourseScheduleId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_trainingCourseScheduleId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_privateUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_privateUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_publicUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_publicUserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingModuleVersionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingModuleVersionId = { "trainingModuleVersionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, trainingModuleVersionId), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingModuleVersionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingModuleVersionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingCourseScheduleId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingCourseScheduleId = { "trainingCourseScheduleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, trainingCourseScheduleId), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingCourseScheduleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingCourseScheduleId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_privateUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_privateUserId = { "privateUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, privateUserId), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_privateUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_privateUserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_publicUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_publicUserId = { "publicUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventCreateSession_Parms, publicUserId), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_publicUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_publicUserId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingModuleVersionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_trainingCourseScheduleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_privateUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::NewProp_publicUserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Create Session" },
		{ "Keywords", "Create Session" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "CreateSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::ManualVRPluginBPLibrary_eventCreateSession_Parms), Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManualVRPluginBPLibrary_End_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_End_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR End" },
		{ "Keywords", "End" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManualVRPluginBPLibrary_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManualVRPluginBPLibrary_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_basedUrl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_userToken;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trainingModuleVersionId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trainingCourseScheduleId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_privateUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_publicUserId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_isTraining;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_SourceString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_SourceString = { "SourceString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, SourceString), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_SourceString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_SourceString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_basedUrl = { "basedUrl", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, basedUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_userToken = { "userToken", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, userToken), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_trainingModuleVersionId = { "trainingModuleVersionId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, trainingModuleVersionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_trainingCourseScheduleId = { "trainingCourseScheduleId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, trainingCourseScheduleId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_privateUserId = { "privateUserId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, privateUserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_publicUserId = { "publicUserId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, publicUserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_isTraining = { "isTraining", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms, isTraining), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms), &Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_SourceString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_basedUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_userToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_trainingModuleVersionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_trainingCourseScheduleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_privateUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_publicUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_isTraining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Initialize" },
		{ "Keywords", "Split a string" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "InitializeCommandLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::ManualVRPluginBPLibrary_eventInitializeCommandLine_Parms), Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Pause" },
		{ "Keywords", "Pause" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Unpause" },
		{ "Keywords", "Resume" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Resume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManualVRPluginBPLibrary_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Start" },
		{ "Keywords", "Start" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManualVRPluginBPLibrary_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics
	{
		struct ManualVRPluginBPLibrary_eventUpdate_Parms
		{
			FString chapterCode;
			FString procedureCode;
			FString subProcedureCode;
			int32 completionStatus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chapterCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chapterCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_procedureCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_procedureCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subProcedureCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_subProcedureCode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_completionStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_chapterCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_chapterCode = { "chapterCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, chapterCode), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_chapterCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_chapterCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_procedureCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_procedureCode = { "procedureCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, procedureCode), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_procedureCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_procedureCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_subProcedureCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_subProcedureCode = { "subProcedureCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, subProcedureCode), METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_subProcedureCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_subProcedureCode_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_completionStatus = { "completionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManualVRPluginBPLibrary_eventUpdate_Parms, completionStatus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_chapterCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_procedureCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_subProcedureCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::NewProp_completionStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual X Plugin|ManualVR" },
		{ "DisplayName", "ManualVR Update" },
		{ "Keywords", "Update" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManualVRPluginBPLibrary, nullptr, "Update", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::ManualVRPluginBPLibrary_eventUpdate_Parms), Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManualVRPluginBPLibrary_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManualVRPluginBPLibrary_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManualVRPluginBPLibrary);
	UClass* Z_Construct_UClass_UManualVRPluginBPLibrary_NoRegister()
	{
		return UManualVRPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UManualVRPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ManualVRPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_CreateSession, "CreateSession" }, // 3690665953
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_End, "End" }, // 24196345
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_InitializeCommandLine, "InitializeCommandLine" }, // 2065119363
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Pause, "Pause" }, // 4294477664
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Resume, "Resume" }, // 3980788157
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Start, "Start" }, // 2605605121
		{ &Z_Construct_UFunction_UManualVRPluginBPLibrary_Update, "Update" }, // 2365435330
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManualVRPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ManualVRPluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManualVRPluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::ClassParams = {
		&UManualVRPluginBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManualVRPluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UManualVRPluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManualVRPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UManualVRPluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManualVRPluginBPLibrary.OuterSingleton;
	}
	template<> MANUALVRPLUGIN_API UClass* StaticClass<UManualVRPluginBPLibrary>()
	{
		return UManualVRPluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManualVRPluginBPLibrary);
	UManualVRPluginBPLibrary::~UManualVRPluginBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSop::StaticStruct, Z_Construct_UScriptStruct_FSop_Statics::NewStructOps, TEXT("Sop"), &Z_Registration_Info_UScriptStruct_Sop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSop), 4012624718U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManualVRPluginBPLibrary, UManualVRPluginBPLibrary::StaticClass, TEXT("UManualVRPluginBPLibrary"), &Z_Registration_Info_UClass_UManualVRPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManualVRPluginBPLibrary), 573039992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_3456464317(TEXT("/Script/ManualVRPlugin"),
		Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_szeha_OneDrive_Documents_GitHub_Azureal_Template_Beta_Plugins_ManualVRPlugin_Source_ManualVRPlugin_Public_ManualVRPluginBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
