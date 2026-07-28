// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrFlowBuilder.h"
#include "AzrInteractionFlows.h"

#include "Engine/Blueprint.h"
#include "GameFramework/Actor.h"

#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphSchema_K2.h"
#include "EdGraphNode_Comment.h"

#include "K2Node_CustomEvent.h"
#include "K2Node_VariableGet.h"
#include "K2Node_CallFunction.h"
#include "K2Node_ComponentBoundEvent.h"

#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"

#include "SubobjectDataSubsystem.h"
#include "SubobjectDataHandle.h"
#include "SubobjectData.h"

#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"

#include "ScopedTransaction.h"

namespace
{
	// Node layout (relative to a row's top Y). Event and call share a Y -> horizontal exec wire;
	// the VariableGet sits below, feeding the call's Target pin.
	constexpr int32 EventX = 0;
	constexpr int32 GetX   = 290;
	constexpr int32 CallX  = 450;
	constexpr int32 GetDropY   = 150;
	constexpr int32 EventDisableGap = 280;
	constexpr int32 BoundEventGap   = 170;

	// The billboarded "Tag" tether widget shared across grab/latch/touch/attach-target.
	const TCHAR* GTagWidgetPath = TEXT("/AzurealXR/Interaction/Explain_Action_Tag_Label/Tag.Tag_C");

	UClass* ResolveClass(const FString& Path)
	{
		UClass* Class = FindObject<UClass>(nullptr, *Path);
		if (!Class)
		{
			Class = LoadObject<UClass>(nullptr, *Path);
		}
		return Class;
	}

	UEdGraphPin* FindExecPin(UEdGraphNode* Node, EEdGraphPinDirection Direction)
	{
		if (!Node) { return nullptr; }
		for (UEdGraphPin* Pin : Node->Pins)
		{
			if (Pin && Pin->Direction == Direction && Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec)
			{
				return Pin;
			}
		}
		return nullptr;
	}

	/** The single output value pin of a VariableGet (the only non-exec output). */
	UEdGraphPin* FindValueOutputPin(UEdGraphNode* Node)
	{
		if (!Node) { return nullptr; }
		for (UEdGraphPin* Pin : Node->Pins)
		{
			if (Pin && Pin->Direction == EGPD_Output && Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
			{
				return Pin;
			}
		}
		return nullptr;
	}

	bool TryConnect(UEdGraph* Graph, UEdGraphPin* A, UEdGraphPin* B)
	{
		if (!Graph || !A || !B) { return false; }
		const UEdGraphSchema* Schema = Graph->GetSchema();
		return Schema && Schema->TryCreateConnection(A, B);
	}

	/**
	 * Reflectively walk StructPath (e.g. {"Grab","TetherSettings"} or {"TetherSettings"}) to the
	 * FAzr_TetherConfig on the component template, then set TargetWidgetName + enable the tether.
	 * Reflection avoids #including the (CableComponent-heavy) Azr component headers.
	 */
	bool SetTetherTargetWidget(UObject* CompTemplate, const TArray<FName>& StructPath, const FName WidgetName)
	{
		if (!CompTemplate || StructPath.Num() == 0)
		{
			return false;
		}

		void* Container = CompTemplate;
		UStruct* Owner = CompTemplate->GetClass();
		for (const FName& Member : StructPath)
		{
			FStructProperty* StructProp = CastField<FStructProperty>(Owner->FindPropertyByName(Member));
			if (!StructProp)
			{
				return false;
			}
			Container = StructProp->ContainerPtrToValuePtr<void>(Container);
			Owner = StructProp->Struct;
		}

		bool bSet = false;
		if (FNameProperty* NameProp = CastField<FNameProperty>(Owner->FindPropertyByName(TEXT("TargetWidgetName"))))
		{
			NameProp->SetPropertyValue_InContainer(Container, WidgetName);
			bSet = true;
		}
		if (FBoolProperty* BoolProp = CastField<FBoolProperty>(Owner->FindPropertyByName(TEXT("bEnableTether"))))
		{
			BoolProp->SetPropertyValue_InContainer(Container, true);
		}
		return bSet;
	}
}

FAzrFlowBuilder::FResult FAzrFlowBuilder::BuildFlow(UBlueprint* Blueprint, const FAzrFlowDef& Def)
{
	FResult Result;

	const FString DisplayName = Def.Label.IsEmpty()
		? Def.Group
		: FString::Printf(TEXT("%s %s"), *Def.Group, *Def.Label);

	if (!Blueprint)
	{
		Result.Message = TEXT("No Blueprint is open.");
		return Result;
	}
	if (!Blueprint->ParentClass || !Blueprint->ParentClass->IsChildOf(AActor::StaticClass()))
	{
		Result.Message = FString::Printf(TEXT("%s needs an Actor Blueprint."), *DisplayName);
		return Result;
	}

	UClass* CompClass = ResolveClass(Def.ClassPath);
	if (!CompClass)
	{
		Result.Message = FString::Printf(TEXT("%s class not found (%s)."), *DisplayName, *Def.ClassPath);
		return Result;
	}

	const FScopedTransaction Transaction(FText::FromString(FString::Printf(TEXT("Add %s Flow"), *DisplayName)));
	Blueprint->Modify();

	auto SkeletonClass = [Blueprint]() -> UClass*
	{
		return Blueprint->SkeletonGeneratedClass ? Blueprint->SkeletonGeneratedClass : Blueprint->GeneratedClass;
	};
	auto PropertyExists = [&SkeletonClass](const FName Name) -> bool
	{
		UClass* Class = SkeletonClass();
		return Class && Class->FindPropertyByName(Name) != nullptr;
	};

	const bool bWantWidget = !Def.TagWidgetName.IsEmpty() && Def.TetherStructPath.Num() > 0;

	// Desired unique widget name (GrabTag, GrabTag1, GrabTag2, …), computed vs the current skeleton.
	FName DesiredWidgetName = NAME_None;
	if (bWantWidget)
	{
		DesiredWidgetName = FName(*Def.TagWidgetName);
		if (PropertyExists(DesiredWidgetName))
		{
			for (int32 N = 1; N < 1000; ++N)
			{
				const FName Candidate(*FString::Printf(TEXT("%s%d"), *Def.TagWidgetName, N));
				if (!PropertyExists(Candidate))
				{
					DesiredWidgetName = Candidate;
					break;
				}
			}
		}
	}

	USubobjectDataSubsystem* Subsystem = USubobjectDataSubsystem::Get();
	if (!Subsystem)
	{
		Result.Message = TEXT("SubobjectDataSubsystem unavailable.");
		return Result;
	}

	TArray<FSubobjectDataHandle> Handles;
	Subsystem->K2_GatherSubobjectDataForBlueprint(Blueprint, Handles);
	if (Handles.Num() == 0)
	{
		Result.Message = TEXT("Could not gather Blueprint subobjects.");
		return Result;
	}
	const FSubobjectDataHandle RootHandle = Handles[0];

	// ---- Add the interaction component (engine auto-uniquifies the name: Azr_Grab, Azr_Grab1, …) ----
	FSubobjectDataHandle InteractionHandle;
	{
		FAddNewSubobjectParams Params;
		Params.ParentHandle = RootHandle;
		Params.NewClass = CompClass;
		Params.BlueprintContext = Blueprint;

		FText FailReason;
		InteractionHandle = Subsystem->AddNewSubobject(Params, FailReason);
		if (!InteractionHandle.IsValid())
		{
			Result.Message = FString::Printf(TEXT("Failed to add %s component: %s"), *Def.ComponentVarName.ToString(), *FailReason.ToString());
			return Result;
		}
	}

	// ---- Add the Tag widget component (non-fatal if it fails) ----
	FSubobjectDataHandle WidgetHandle;
	if (bWantWidget)
	{
		FAddNewSubobjectParams Params;
		Params.ParentHandle = RootHandle;
		Params.NewClass = UWidgetComponent::StaticClass();
		Params.BlueprintContext = Blueprint;

		FText FailReason;
		WidgetHandle = Subsystem->AddNewSubobject(Params, FailReason);
	}

	Result.bComponentAdded = true;

	// Compile so the new members exist on the skeleton (needed for the rename + graph refs).
	FKismetEditorUtilities::CompileBlueprint(Blueprint);

	// Interaction component's actual variable name (auto-uniquified).
	FName VarName = Def.ComponentVarName;
	if (const FSubobjectData* Data = InteractionHandle.GetData())
	{
		const FName Actual = Data->GetVariableName();
		if (!Actual.IsNone())
		{
			VarName = Actual;
		}
	}

	// ---- Configure the Tag widget + point the interaction tether at it ----
	FName WidgetVarName = NAME_None;
	if (bWantWidget && WidgetHandle.IsValid())
	{
		// Rename must happen AFTER the compile above, or it doesn't stick.
		USubobjectDataSubsystem::RenameSubobjectMemberVariable(Blueprint, WidgetHandle, DesiredWidgetName);
		if (const FSubobjectData* Data = WidgetHandle.GetData())
		{
			const FName Actual = Data->GetVariableName();
			if (!Actual.IsNone())
			{
				WidgetVarName = Actual;
			}
		}

		// Widget template: Tag class, scale 0.05, draw-at-desired-size.
		if (const FSubobjectData* Data = WidgetHandle.GetData())
		{
			if (UWidgetComponent* WidgetComp = const_cast<UWidgetComponent*>(Data->GetObjectForBlueprint<UWidgetComponent>(Blueprint)))
			{
				WidgetComp->SetFlags(RF_Transactional);
				WidgetComp->Modify();
				if (UClass* TagClass = LoadClass<UUserWidget>(nullptr, GTagWidgetPath))
				{
					WidgetComp->SetWidgetClass(TagClass);
				}
				WidgetComp->SetDrawAtDesiredSize(true);
				WidgetComp->SetRelativeScale3D(FVector(0.05f));
			}
		}

		// Interaction template: TetherSettings.TargetWidgetName -> the widget's name.
		if (!WidgetVarName.IsNone())
		{
			if (const FSubobjectData* Data = InteractionHandle.GetData())
			{
				if (UActorComponent* Comp = const_cast<UActorComponent*>(Data->GetObjectForBlueprint<UActorComponent>(Blueprint)))
				{
					Comp->SetFlags(RF_Transactional);
					Comp->Modify();
					SetTetherTargetWidget(Comp, Def.TetherStructPath, WidgetVarName);
				}
			}
		}
	}

	FObjectProperty* CompProp = SkeletonClass() ? CastField<FObjectProperty>(SkeletonClass()->FindPropertyByName(VarName)) : nullptr;
	if (!CompProp)
	{
		Result.Message = FString::Printf(TEXT("%s property missing after component add."), *VarName.ToString());
		return Result;
	}

	// ---- Label suffix + comment number derived from the ACTUAL name ("Azr_Grab1" -> "1", 1) ----
	FString LabelSuffix;
	int32 SuffixNumber = 0;
	{
		const FString VarStr = VarName.ToString();
		const FString BaseStr = Def.ComponentVarName.ToString();
		if (!VarStr.Equals(BaseStr) && VarStr.StartsWith(BaseStr))
		{
			LabelSuffix = VarStr.RightChop(BaseStr.Len());
			SuffixNumber = FCString::Atoi(*LabelSuffix.Replace(TEXT("_"), TEXT("")));
		}
	}

	// ---- Graph work (skipped for component-only flows like Attach Target) ----
	const bool bHasGraphWork =
		(Def.EnableFunction != NAME_None) || (Def.DisableFunction != NAME_None) || (Def.EventDelegates.Num() > 0);

	if (bHasGraphWork)
	{
		UEdGraph* EventGraph = Blueprint->UbergraphPages.Num() > 0 ? Blueprint->UbergraphPages[0] : nullptr;
		if (!EventGraph)
		{
			Result.Message = TEXT("No event graph on this Blueprint.");
			return Result;
		}
		EventGraph->Modify();

		int32 StartY = 0;
		for (UEdGraphNode* Node : EventGraph->Nodes)
		{
			if (!Node) { continue; }
			const int32 Bottom = Cast<UEdGraphNode_Comment>(Node)
				? (Node->NodePosY + FMath::Max(Node->NodeHeight, 120) + 60)
				: (Node->NodePosY + 200);
			StartY = FMath::Max(StartY, Bottom);
		}

		const int32 FlowTop = StartY;
		int32 Y = StartY;

		auto BuildEventCall = [&](const FString& EventLabel, const FName FunctionName, int32 RowY)
		{
			UFunction* Function = CompClass->FindFunctionByName(FunctionName);
			if (!Function) { return; }

			FGraphNodeCreator<UK2Node_CustomEvent> EventCreator(*EventGraph);
			UK2Node_CustomEvent* EventNode = EventCreator.CreateNode();
			EventNode->CustomFunctionName = FName(*EventLabel);
			EventNode->NodePosX = EventX;
			EventNode->NodePosY = RowY;
			EventCreator.Finalize();

			FGraphNodeCreator<UK2Node_VariableGet> GetCreator(*EventGraph);
			UK2Node_VariableGet* GetNode = GetCreator.CreateNode();
			GetNode->VariableReference.SetSelfMember(VarName);
			GetNode->NodePosX = GetX;
			GetNode->NodePosY = RowY + GetDropY;
			GetCreator.Finalize();

			FGraphNodeCreator<UK2Node_CallFunction> CallCreator(*EventGraph);
			UK2Node_CallFunction* CallNode = CallCreator.CreateNode();
			CallNode->SetFromFunction(Function);
			CallNode->NodePosX = CallX;
			CallNode->NodePosY = RowY;
			CallCreator.Finalize();

			TryConnect(EventGraph, FindExecPin(EventNode, EGPD_Output), FindExecPin(CallNode, EGPD_Input));
			TryConnect(EventGraph, FindValueOutputPin(GetNode), CallNode->FindPin(UEdGraphSchema_K2::PN_Self, EGPD_Input));

			Result.NodesAdded += 3;
		};

		auto BuildBoundEvent = [&](const FName DelegateName, int32 RowY)
		{
			FMulticastDelegateProperty* DelegateProp = CastField<FMulticastDelegateProperty>(CompClass->FindPropertyByName(DelegateName));
			if (!DelegateProp) { return; }

			FGraphNodeCreator<UK2Node_ComponentBoundEvent> BoundCreator(*EventGraph);
			UK2Node_ComponentBoundEvent* BoundNode = BoundCreator.CreateNode();
			BoundNode->InitializeComponentBoundEventParams(CompProp, DelegateProp);
			BoundNode->NodePosX = EventX;
			BoundNode->NodePosY = RowY;
			BoundCreator.Finalize();

			Result.NodesAdded += 1;
		};

		if (Def.EnableFunction != NAME_None)
		{
			BuildEventCall(Def.EnableEventLabel + LabelSuffix, Def.EnableFunction, Y);
			Y += EventDisableGap;
		}
		if (Def.DisableFunction != NAME_None)
		{
			BuildEventCall(Def.DisableEventLabel + LabelSuffix, Def.DisableFunction, Y);
			Y += EventDisableGap;
		}
		for (const FName& Delegate : Def.EventDelegates)
		{
			BuildBoundEvent(Delegate, Y);
			Y += BoundEventGap;
		}

		// ---- Wrap the flow in a titled comment box (title = "GRAB", "LATCH", …) ----
		if (Result.NodesAdded > 0)
		{
			const FString CommentBase = Def.Group.ToUpper();
			const FString CommentTitle = (SuffixNumber > 0)
				? FString::Printf(TEXT("%s %d"), *CommentBase, SuffixNumber)
				: CommentBase;

			FGraphNodeCreator<UEdGraphNode_Comment> CommentCreator(*EventGraph);
			UEdGraphNode_Comment* Comment = CommentCreator.CreateNode();
			Comment->NodePosX = EventX - 60;
			Comment->NodePosY = FlowTop - 70;
			Comment->NodeWidth = (CallX + 260) - (EventX - 60);
			Comment->NodeHeight = (Y + 20) - (FlowTop - 70);
			CommentCreator.Finalize();

			// Set AFTER Finalize: PostPlacedNewNode() resets NodeComment to "Comment".
			Comment->NodeComment = CommentTitle;
		}
	}

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
	Blueprint->MarkPackageDirty();

	Result.bSuccess = true;
	FString Parts = VarName.ToString();
	if (bWantWidget && !WidgetVarName.IsNone())
	{
		Parts += FString::Printf(TEXT(" + %s"), *WidgetVarName.ToString());
	}
	if (Result.NodesAdded > 0)
	{
		Result.Message = FString::Printf(TEXT("%s: added %s + %d node(s)."), *DisplayName, *Parts, Result.NodesAdded);
	}
	else
	{
		Result.Message = FString::Printf(TEXT("%s: added %s."), *DisplayName, *Parts);
	}
	return Result;
}
