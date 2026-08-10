

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Azr_SaveTypes.h"
#include "Azr_SaveGame.generated.h"

/**
 * A whole-world snapshot: every saveable actor, the player's pose, and any payloads other modules
 * contributed (Azureal_CSM stores curriculum progress this way).
 *
 * Saves are written at sub-step boundaries, where nothing is mid-flight -- no chain part-way through
 * a Delay, nothing in the player's hand, no interaction half-finished. That is deliberate: Blueprint
 * execution position lives in the latent action manager and cannot be serialised, so a save taken
 * mid-chain would restore into a graph that never continues.
 */
UCLASS(BlueprintType)
class AZUREALXR_API UAzr_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	/** Bumped when the record layout changes in a way older saves cannot satisfy. */
	static constexpr int32 CurrentSaveVersion = 1;

	UPROPERTY(BlueprintReadOnly, Category = "Azureal|Save")
	int32 SaveVersion = CurrentSaveVersion;

	/**
	 * AZUREAL_MODULE_VERSION_ID at the time of writing. Progress is stored as indices, so resuming
	 * a save taken against different course content would silently land the learner on the wrong
	 * step -- which in safety training is worse than refusing to resume at all.
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Azureal|Save")
	FString ModuleVersionId;

	/** The level to travel back to. */
	UPROPERTY(BlueprintReadOnly, Category = "Azureal|Save")
	FName LevelName;

	UPROPERTY(BlueprintReadOnly, Category = "Azureal|Save")
	FDateTime SavedAtUtc = FDateTime(0);

	/** Seconds of training accumulated so far. Stored as a duration, not a start time -- world time resets on level load. */
	UPROPERTY(BlueprintReadOnly, Category = "Azureal|Save")
	float AccumulatedSeconds = 0.0f;

	/** Free-form label the menu can show next to a Continue button, e.g. "Chapter 2 - Step 4". */
	UPROPERTY(BlueprintReadOnly, Category = "Azureal|Save")
	FString ProgressLabel;

	UPROPERTY()
	FAzr_PawnRecord Pawn;

	/**
	 * Every actor that passed the saveable test at capture time.
	 *
	 * Destruction needs no separate list: on restore, a saveable actor present in the freshly loaded
	 * level with no record here must have been destroyed before the save, so it is destroyed again.
	 * The same test decides both ends, so the two can never disagree.
	 */
	UPROPERTY()
	TArray<FAzr_ActorRecord> Actors;

	/** Keyed contributions from other modules. CSM writes curriculum progress under "CSM". */
	UPROPERTY()
	TMap<FName, FAzr_PayloadRecord> Payloads;

	/**
	 * Sub-step keys already reported to the LMS. UAzr_SessionSubsystem has no deduplication and no
	 * retry queue, so without this a resumed session posts duplicate records that cannot be cleaned up.
	 */
	UPROPERTY()
	TArray<FString> ReportedKeys;
};
