

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/IHttpRequest.h"
#include "Azr_SessionSubsystem.generated.h"

UENUM(BlueprintType)
enum class EAzr_SessionType : uint8 {
	Training,
	Event,
	Course
};

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionResponse, const FString&, SessionId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateResponse, float, ScorePercentage, const FString&, SessionStatus);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionError, const FString&, ErrorMessage);

UCLASS()
class AZUREALXR_API UAzr_SessionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Starts the appropriate session type based on Launch Context */
	void StartSession();

	/** Records a physical action subprocedure to the server */
	void UpdateSubprocedure(int32 ChapterNum, int32 StepNum, int32 SubStepNum, bool bCompleted);

	/** Records a knowledge-check question answer to the server */
	void UpdateQuestion(int32 ChapterNum, int32 StepNum, int32 SubStepNum, int32 SelectedOption);

	/** Ends the current session and retrieves the final score and status */
	void EndSession();

	/** Explicitly marks the current time. Used at the start of a Step to ignore previous dead time. */
	void RecordCurrentTime();

	// --- BROADCASTS ---
	UPROPERTY()
	FOnSessionResponse OnStartSuccess;

	UPROPERTY()
	FOnSessionError OnStartFailure;

	UPROPERTY()
	FOnUpdateResponse OnUpdateSuccess;

	UPROPERTY()
	FOnSessionError OnUpdateFailure;

	UPROPERTY()
	FOnUpdateResponse OnEndSuccess;

	UPROPERTY()
	FOnSessionError OnEndFailure;

	// --- BLUEPRINT API ---
	UFUNCTION(BlueprintPure, Category = "Azureal|Session")
	bool IsExplainedMode() const { return bIsExplained; }

	UFUNCTION(BlueprintPure, Category = "Azureal|Session")
	bool IsOnlineMode() const { return bIsOnline; }

	UFUNCTION(BlueprintPure, Category = "Azureal|Session")
	FString GetCurrentSessionId() const { return SessionId; }

	UFUNCTION(BlueprintPure, Category = "Azureal|Session")
	FString GetSessionLanguage() const { return LanguageCode; }

	/** DEBUG: force the active language in PIE without the launcher env var. Pass "en", "ms", or "ta". */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Debug")
	void SetSessionLanguageForTesting(FString NewLanguageCode) { LanguageCode = NewLanguageCode; }

	/**
	 * The chapter the platform asked to open, 1-based -- or 0 when it asked for none.
	 *
	 * Set from AZUREAL_START_CHAPTER when the learner picks a chapter on the platform instead of
	 * launching the module at its menu. 0 is the ordinary case and means "open the menu as usual",
	 * so a module that never checks this behaves exactly as it did before the platform could ask.
	 *
	 * The framework only carries the number. Which level that chapter is, and how to get there, is
	 * the curriculum's business -- AzurealXR has no idea what a chapter contains.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Session")
	int32 GetStartChapter() const { return StartChapter; }

	UFUNCTION(BlueprintPure, Category = "Azureal|Session")
	bool HasStartChapter() const { return StartChapter > 0; }

	/**
	 * Whether this launch asked for a chapter at all -- true for the whole run, even after the
	 * request has been taken.
	 *
	 * HasStartChapter goes false the moment the jump is claimed, which makes it useless for anything
	 * that needs to know a jump is coming, or that one already happened. A fade held over the boot
	 * map is exactly that: it has to be raised before the menu runs and lowered after the next level
	 * is up, and by then the number is long gone. This one never changes, so neither end has to race
	 * the other.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Session")
	bool WasStartChapterRequested() const { return bStartChapterRequested; }

	/**
	 * Reads the requested chapter once and forgets it. Returns 0 if there was none, or if it has
	 * already been taken.
	 *
	 * Use this rather than GetStartChapter to drive the jump. This subsystem outlives OpenLevel, so
	 * a menu that reads the plain getter would find the request still sitting there every time the
	 * player came back to it and bounce them into the chapter again -- with no way out of the module
	 * but to quit. Taking it means the platform's choice applies to the boot it was made for.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Session")
	int32 ConsumeStartChapter();

	/** DEBUG: pretend the launcher asked for a chapter, for testing the jump in PIE. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Debug")
	void SetStartChapterForTesting(int32 NewStartChapter) { StartChapter = FMath::Max(0, NewStartChapter); }

private:
	FString AuthToken;
	FString BaseApiUrl;
	FString ModuleVersionId;
	FString SessionId;
	FString LanguageCode;

	/** 1-based; 0 means the platform did not ask for a particular chapter. Cleared once consumed. */
	int32 StartChapter = 0;

	/** The same question, latched for the life of the run. Never cleared. */
	bool bStartChapterRequested = false;

	bool bIsExplained;
	bool bIsOnline;
	EAzr_SessionType DeterminedSessionType;

	float ActiveTimestamp = 0.0f;

	void LoadLauncherContext();

	/**
	 * Turns a refused request into a line a developer can act on, and logs it.
	 *
	 * The response body used to be broadcast raw, so a server answering with a status code and no
	 * body reached Blueprint as an empty string: the Failure pin fired and printed a blank line,
	 * which is indistinguishable from nothing having happened. The code is always included, because
	 * the code alone says which of four different things to go and fix.
	 */
	FString DescribeHttpFailure(const TCHAR* What, FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) const;

	void OnStartSessionResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnUpdateResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnEndSessionResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};