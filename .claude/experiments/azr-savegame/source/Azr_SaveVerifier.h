

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Azr_SaveVerifier.generated.h"

class UAzr_SaveGame;

/**
 * Test tooling for the save system.
 *
 * A save that is only MOSTLY right is worse than none: it fails silently, and the failure surfaces
 * as a learner stranded mid-course rather than as an error. So the two checks worth automating are
 * both comparisons, where a machine decides whether the state matches rather than a human deciding
 * whether it looks right.
 *
 *   Azr.Save.RoundTrip  serialisation fidelity -- capture, write, read back, compare.
 *                       Catches state that does not survive being written to disk.
 *
 *   Azr.Save.Verify     restore fidelity -- capture, save, reload the level, capture again, compare.
 *                       Catches state that is saved but never re-applied. This is the real test, and
 *                       the one that finds missing fields on its own.
 *
 * Neither touches the learner's slot; verification uses its own scratch slot.
 */
UCLASS()
class AZUREALXR_API UAzr_SaveVerifier : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	/** Scratch slot used by the verification commands, kept away from any real progress. */
	static const TCHAR* VerifySlotName;

	virtual void Deinitialize() override;

	/**
	 * Capture, write to the scratch slot, read it back, and compare. Non-destructive and instant:
	 * no level reload, so it only proves the bytes survive the trip, not that restore applies them.
	 * Returns the number of differences found, or INDEX_NONE if the check could not run.
	 */
	int32 RunRoundTrip(TArray<FString>& OutDiffs);

	/**
	 * Capture a baseline, save, then reload the level and restore. When the restore finishes the world
	 * is captured again and compared against the baseline, and every difference is logged.
	 *
	 * Anything reported here is state the save system is failing to bring back.
	 */
	bool BeginVerify();

	/** True between BeginVerify and the comparison that follows the reload. */
	bool IsVerifyPending() const { return bVerifyPending; }

	/**
	 * Compare two snapshots field by field. Differences are described in terms an author can act on
	 * ("BP_Door_C_1.bIsOpen"), not byte offsets.
	 */
	static int32 CompareSaves(const UAzr_SaveGame* Baseline, const UAzr_SaveGame* Other, TArray<FString>& OutDiffs);

private:
	UFUNCTION()
	void HandleRestoreComplete();

	/** Survives the level travel because this subsystem lives on the GameInstance. */
	UPROPERTY()
	TObjectPtr<UAzr_SaveGame> VerifyBaseline;

	bool bVerifyPending = false;
};
