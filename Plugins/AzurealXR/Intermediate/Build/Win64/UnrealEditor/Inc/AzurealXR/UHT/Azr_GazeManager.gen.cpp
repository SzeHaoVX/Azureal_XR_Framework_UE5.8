// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Azr_GazeManager.h"
#include "Engine/EngineTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeAzr_GazeManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_GazeManager(ETypeConstructPhase);
AZUREALXR_API UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ManagerMode(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_Gaze(ETypeConstructPhase);
AZUREALXR_API UClass* Z_Construct_UClass_UAzr_GazeManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EAzr_ManagerMode **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_AzurealXR_EAzr_ManagerMode_Statics
template<> AZUREALXR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAzr_ManagerMode>()
{
	return Z_Construct_UEnum_AzurealXR_EAzr_ManagerMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
		{ "NonSequential.DisplayName", "Non-Sequential (All at Once)" },
		{ "NonSequential.Name", "EAzr_ManagerMode::NonSequential" },
		{ "Sequential.DisplayName", "Sequential (Follow Array Order)" },
		{ "Sequential.Name", "EAzr_ManagerMode::Sequential" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAzr_ManagerMode::Sequential", (int64)EAzr_ManagerMode::Sequential },
		{ "EAzr_ManagerMode::NonSequential", (int64)EAzr_ManagerMode::NonSequential },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
	nullptr,
	"EAzr_ManagerMode",
	"EAzr_ManagerMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAzr_ManagerMode;
UEnum* Z_Construct_UEnum_AzurealXR_EAzr_ManagerMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAzr_ManagerMode.OuterSingleton)
		{
			ZRIE_EAzr_ManagerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzurealXR_EAzr_ManagerMode, (UObject*)Z_Construct_UPackage__Script_AzurealXR(ETypeConstructPhase::Outer), TEXT("EAzr_ManagerMode"));
		}
		return ZRIE_EAzr_ManagerMode.OuterSingleton;
	}
	if (!ZRIE_EAzr_ManagerMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAzr_ManagerMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAzr_ManagerMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAzr_ManagerMode ************************************************************

// ********** Begin Class UAzr_GazeManager Function DisableManager *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_GazeManager_DisableManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Gaze Manager" },
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableManager constinit property declarations ************************
// ********** End Function DisableManager constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_GazeManager, nullptr, "DisableManager", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_GazeManager_DisableManager(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_GazeManager::execDisableManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableManager();
	P_NATIVE_END;
}
// ********** End Class UAzr_GazeManager Function DisableManager ***********************************

// ********** Begin Class UAzr_GazeManager Function EnableManager **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_GazeManager_EnableManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Gaze Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EnableManager constinit property declarations *************************
// ********** End Function EnableManager constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_GazeManager, nullptr, "EnableManager", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_GazeManager_EnableManager(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_GazeManager::execEnableManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableManager();
	P_NATIVE_END;
}
// ********** End Class UAzr_GazeManager Function EnableManager ************************************

// ********** Begin Class UAzr_GazeManager Function HandleZoneTriggered ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_GazeManager_HandleZoneTriggered_Statics
struct UHT_STATICS
{
	struct Azr_GazeManager_eventHandleZoneTriggered_Parms
	{
		UAzr_Gaze* TriggeredZone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggeredZone_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleZoneTriggered constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggeredZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleZoneTriggered constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleZoneTriggered Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TriggeredZone = { "TriggeredZone", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Azr_GazeManager_eventHandleZoneTriggered_Parms, TriggeredZone), Z_Construct_UClass_UAzr_Gaze, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggeredZone_MetaData), NewProp_TriggeredZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriggeredZone,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleZoneTriggered Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_GazeManager, nullptr, "HandleZoneTriggered", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Azr_GazeManager_eventHandleZoneTriggered_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Azr_GazeManager_eventHandleZoneTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAzr_GazeManager_HandleZoneTriggered(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_GazeManager::execHandleZoneTriggered)
{
	P_GET_OBJECT(UAzr_Gaze,Z_Param_TriggeredZone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleZoneTriggered(Z_Param_TriggeredZone);
	P_NATIVE_END;
}
// ********** End Class UAzr_GazeManager Function HandleZoneTriggered ******************************

// ********** Begin Class UAzr_GazeManager Function TriggerNextGaze ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UAzr_GazeManager_TriggerNextGaze_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Azureal|Logic" },
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerNextGaze constinit property declarations ***********************
// ********** End Function TriggerNextGaze constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UAzr_GazeManager, nullptr, "TriggerNextGaze", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UAzr_GazeManager_TriggerNextGaze(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UAzr_GazeManager::execTriggerNextGaze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerNextGaze();
	P_NATIVE_END;
}
// ********** End Class UAzr_GazeManager Function TriggerNextGaze **********************************

// ********** Begin Class UAzr_GazeManager *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UAzr_GazeManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AzurealXR" },
		{ "DisplayName", "Azr Gaze Manager" },
		{ "IncludePath", "Azr_GazeManager.h" },
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Gaze Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SETUP ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SETUP ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GazeList_MetaData[] = {
		{ "Category", "Gaze Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This creates a clean dropdown picker in the UI showing exactly your component names!\n" },
#endif
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This creates a clean dropdown picker in the UI showing exactly your component names!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGazeZones_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// We store the actual, resolved component pointers here during gameplay\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We store the actual, resolved component pointers here during gameplay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingZones_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Azr_GazeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAzr_GazeManager constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GazeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GazeList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveGazeZones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGazeZones;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemainingZones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemainingZones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAzr_GazeManager constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableManager"), .Pointer = &UAzr_GazeManager::execDisableManager },
		{ .NameUTF8 = UTF8TEXT("EnableManager"), .Pointer = &UAzr_GazeManager::execEnableManager },
		{ .NameUTF8 = UTF8TEXT("HandleZoneTriggered"), .Pointer = &UAzr_GazeManager::execHandleZoneTriggered },
		{ .NameUTF8 = UTF8TEXT("TriggerNextGaze"), .Pointer = &UAzr_GazeManager::execTriggerNextGaze },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzr_GazeManager_DisableManager, "DisableManager" }, // b16b2fce9a514da721a9a83886efd51cbc6893f0
		{ &Z_Construct_UFunction_UAzr_GazeManager_EnableManager, "EnableManager" }, // d474feddec7c08f6dd66072e470b69dc7f52976a
		{ &Z_Construct_UFunction_UAzr_GazeManager_HandleZoneTriggered, "HandleZoneTriggered" }, // 240f49755d78784b9abffa2e2f27a7c15d4e2bb5
		{ &Z_Construct_UFunction_UAzr_GazeManager_TriggerNextGaze, "TriggerNextGaze" }, // 2002884d5cda2e6c1bea8d97d3a24efd66609ca8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzr_GazeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UAzr_GazeManager Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_GazeManager, Mode), Z_Construct_UEnum_AzurealXR_EAzr_ManagerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 17f198a0bf8abf7032083ca9257fd18dc6920b37
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GazeList_Inner = { "GazeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(0, nullptr) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GazeList = { "GazeList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_GazeManager, GazeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GazeList_MetaData), NewProp_GazeList_MetaData) }; // 9b9ae5abd01cfb2cb2ece10137db004a3044215c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveGazeZones_Inner = { "ActiveGazeZones", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAzr_Gaze, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveGazeZones = { "ActiveGazeZones", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_GazeManager, ActiveGazeZones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGazeZones_MetaData), NewProp_ActiveGazeZones_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RemainingZones_Inner = { "RemainingZones", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAzr_Gaze, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RemainingZones = { "RemainingZones", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UAzr_GazeManager, RemainingZones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingZones_MetaData), NewProp_RemainingZones_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GazeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveGazeZones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveGazeZones,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemainingZones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemainingZones,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UAzr_GazeManager Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_AzurealXR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UAzr_GazeManager,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UAzr_GazeManager_StaticRegisterNativesUAzr_GazeManager()
{
	UClass* Class = UAzr_GazeManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAzr_GazeManager;
UClass* Z_Construct_UClass_UAzr_GazeManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UAzr_GazeManager;
		if (!Z_Registration_Info_UClass_UAzr_GazeManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Azr_GazeManager"),
				Z_Registration_Info_UClass_UAzr_GazeManager.InnerSingleton,
				UAzr_GazeManager_StaticRegisterNativesUAzr_GazeManager,
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
		return Z_Registration_Info_UClass_UAzr_GazeManager.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UAzr_GazeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzr_GazeManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UAzr_GazeManager.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAzr_GazeManager);
UAzr_GazeManager::~UAzr_GazeManager() {}
// ********** End Class UAzr_GazeManager ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h__Script_AzurealXR_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_AzurealXR_EAzr_ManagerMode, TEXT("EAzr_ManagerMode"), &ZRIE_EAzr_ManagerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 401709216U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAzr_GazeManager, TEXT("UAzr_GazeManager"), &Z_Registration_Info_UClass_UAzr_GazeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzr_GazeManager), 2253914941U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Azureal_XR_V2_Plugins_AzurealXR_Source_AzurealXR_Public_Azr_GazeManager_h__Script_AzurealXR_43bee3d8d6255972d32d0887494bc2b40a5d9443{
	TEXT("/Script/AzurealXR"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
