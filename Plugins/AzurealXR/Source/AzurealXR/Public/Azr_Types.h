

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameFramework/Actor.h"
#include "Misc/SecureHash.h"
#include "Azr_Types.generated.h"


namespace Azr
{
	/**
	 * Resolve one of an actor's components by name, the way every Azureal component expects:
	 * an EXACT name match always wins, and a substring match is only accepted when nothing matches
	 * exactly. Matching on substring alone meant a name like "Handle" could be answered by
	 * "Handle_Guard" purely because of component ordering.
	 *
	 * Predicate lets a caller add its own test (e.g. only widget components).
	 */
	template <typename ComponentType, typename PredicateType>
	ComponentType* FindComponentByNameIf(const AActor* Owner, const FName Name, PredicateType Predicate)
	{
		if (!Owner || Name.IsNone()) return nullptr;

		TArray<ComponentType*> Components;
		Owner->GetComponents<ComponentType>(Components);

		const FString NameString = Name.ToString();
		ComponentType* SubstringMatch = nullptr;

		for (ComponentType* Component : Components)
		{
			if (!Component || !Predicate(Component)) continue;

			if (Component->GetFName() == Name)
			{
				return Component; // exact match always wins
			}
			if (!SubstringMatch && Component->GetName().Contains(NameString))
			{
				SubstringMatch = Component; // remembered, but only used if nothing matches exactly
			}
		}
		return SubstringMatch;
	}

	template <typename ComponentType>
	ComponentType* FindComponentByName(const AActor* Owner, const FName Name)
	{
		return FindComponentByNameIf<ComponentType>(Owner, Name, [](ComponentType*) { return true; });
	}

	/**
	 * Fingerprint of a line of narration text.
	 *
	 * Lives here rather than in either module because both ends must agree exactly: the editor stamps
	 * it when it generates a step's audio, and the runtime recomputes it to decide whether that step's
	 * word timings still describe the sentence being displayed.
	 *
	 * Hashed as UTF-8 so the three languages fingerprint as reliably as English, and trimmed so that
	 * trailing whitespace alone -- which changes neither the words nor how they are spoken -- does not
	 * read as an edit.
	 */
	inline FString ComputeNarrationHash(const FString& Text)
	{
		const FString Trimmed = Text.TrimStartAndEnd();
		if (Trimmed.IsEmpty())
		{
			return FString();
		}

		const FTCHARToUTF8 Utf8(*Trimmed);

		FMD5 Md5;
		Md5.Update(reinterpret_cast<const uint8*>(Utf8.Get()), Utf8.Length());

		uint8 Digest[16];
		Md5.Final(Digest);

		return BytesToHex(Digest, UE_ARRAY_COUNT(Digest));
	}
}


// --- NEW: POINTER TARGET ENUM ---
UENUM(BlueprintType)
enum class EAzr_PointerTarget : uint8 {
	Mesh   UMETA(DisplayName = "Target Mesh"),
	Widget UMETA(DisplayName = "UI Widget")
};


UENUM(BlueprintType)
enum class EAzr_HighlightMode : uint8
{
	None,
	TargetMeshOnly,
	AllComponents
};

UENUM(BlueprintType)
enum class EAzr_TetherPos : uint8
{
	Center,
	Top,
	Bottom,
	Left,
	Right,
	Front,
	Back
};

// --- NEW STRUCT: The 3-Box Localization Twin for AzurealXR ---
USTRUCT(BlueprintType)
struct FAzr_MultiLangText
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal Localization", meta = (MultiLine = true))
	FString English;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal Localization", meta = (MultiLine = true))
	FString Malay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal Localization", meta = (MultiLine = true))
	FString Tamil;
};

// --- SHARED TETHER CONFIGURATION ---
USTRUCT(BlueprintType)
struct FAzr_TetherConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether")
	bool bEnableTether = true;

	// NOTE: which widget the tether points at is NOT stored here. Each component owns that name
	// next to its mesh name (Grab's config blocks, Latch, Touch, Attach Target), because the
	// components that use a tether do not all resolve their widget the same way — Explain keeps one
	// per step and Action one on the component. Keeping it out of here means every component reads
	// its widget from exactly one obvious place.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether")
	EAzr_TetherPos MeshAnchorPos = EAzr_TetherPos::Top;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether")
	EAzr_TetherPos WidgetAnchorPos = EAzr_TetherPos::Bottom;

	// --- ADJUSTMENTS ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Adjustments")
	float WidgetGap_Vertical = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Adjustments")
	float WidgetGap_Horizontal = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Adjustments")
	float MeshOffset_Vertical = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Adjustments")
	float MeshOffset_Horizontal = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether|Adjustments")
	float MeshSurfaceOffset = 0.0f;

	// --- VISUALS ---

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether")
	class UStaticMesh* AnchorMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether")
	float AnchorScale = 0.03f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether")
	float CableWidth = 35.0f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether", meta = (ClampMin = "0.0", ClampMax = "100.0", UIMin = "0.0", UIMax = "100.0"))
	float CableHang = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tether")
	class UMaterialInterface* CableMaterial = nullptr;
};


UENUM(BlueprintType)
enum class EAzr_ExplainMode : uint8
{
	Audio       UMETA(DisplayName = "Sync with Audio Length"),
	CustomTimer UMETA(DisplayName = "Use Custom Timer")
};


USTRUCT(BlueprintType)
struct FAzr_ExplainStep
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step")
	FName WidgetName = "ExplainWidget";


	// --- 3-Box Localization (English / Malay / Tamil) ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step")
	FAzr_MultiLangText ExplainText;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step")
	class USoundBase* AudioTrack = nullptr;

	/**
	 * When each word is spoken, as "start:end" seconds, comma separated -- one entry per word of
	 * ExplainText, in order. Filled in by the Generate Narration button, or pasted from the generator
	 * script.
	 *
	 * The text reveal shows the sentence a letter at a time, and a word's letters occupy exactly the
	 * span given here. Both ends matter: the gap to the next word is not a word's length, because it
	 * also contains any pause after it. Knowing where a word really ends is what lets the text hold
	 * still through a pause, and lets a word whose spoken form runs longer than its written one
	 * ("11kV" for "eleven kilovolts") stretch to match the voice rather than finish early.
	 *
	 * Entries of just "start" are still accepted, from timings made before end times were recorded; a
	 * word's length is then inferred from the sentence's own pace, which is close but not exact.
	 *
	 * Filled in, the reveal matches the narration exactly. Left blank, it falls back to estimating the
	 * pacing from how loud the audio is at each instant, which follows the voice but is never
	 * word-perfect.
	 *
	 * Three boxes because each language is a separate recording with its own word count. A blank box
	 * falls back to English, and timings whose word count disagrees with the text on screen are ignored
	 * rather than trusted -- an edited sentence must be re-generated to stay in sync.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step")
	FAzr_MultiLangText WordTimings;

	/**
	 * Fingerprint of the text the narration above was generated from. Stamped by Generate Narration;
	 * not meant to be edited by hand.
	 *
	 * Earns its keep twice. The button compares it before calling out, so re-clicking an unchanged step
	 * costs nothing -- which matters because generation is not deterministic, and re-running a line
	 * would produce audio its existing timings no longer fit. At runtime a mismatch means the sentence
	 * was edited after the timings were made, so the reveal estimates instead of desynchronising
	 * confidently. That catches edits the word count cannot: "substation" to "sub-station" is still the
	 * same number of words, but not the same text.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step", meta = (DisplayName = "Narration Fingerprint"))
	FString NarrationHash;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step")
	EAzr_ExplainMode ExplainMode = EAzr_ExplainMode::Audio;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step", meta = (EditCondition = "ExplainMode == EAzr_ExplainMode::CustomTimer", EditConditionHides))
	float CustomTimerDuration = 5.0f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step|Visuals")
	TSoftObjectPtr<AActor> ExternalTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step|Visuals")
	FName TargetMeshName = "TargetMesh";

	// --- NEW: THE POINTER TARGET ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step|Visuals")
	EAzr_PointerTarget PointerTarget = EAzr_PointerTarget::Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step|Visuals")
	EAzr_HighlightMode HighlightMode = EAzr_HighlightMode::AllComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step|Visuals")
	float HighlightSpeed = 0.8f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Step|Visuals")
	FAzr_TetherConfig TetherSettings;
};