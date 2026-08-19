

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Materials/MaterialParameterCollection.h" 
#include "Azr_Types.h"
#include "Haptics/HapticFeedbackEffect_Base.h" 
#include "Azr_Touch.generated.h"

// Forward Declarations
class UCableComponent;
class AAzr_Indicator;
class UAzr_Pointer;
class UAzr_TouchZone;

// --- EVENTS ---
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTouchStateEvent);

/**
 * UAzr_Touch
 * The "Logic Brain" for touch interactions.
 * Searches for a physical Azr_TouchZone via InteractID and manages visuals/events.
 */
UCLASS(ClassGroup = (AzurealXR), meta = (BlueprintSpawnableComponent, DisplayName = "Azr Touch Logic"))
class AZUREALXR_API UAzr_Touch : public UActorComponent
{
	GENERATED_BODY()

public:
	UAzr_Touch();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// --- LINKING ---
	// Matches the InteractID on the Azr_TouchZone to establish a connection.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Linking")
	int32 InteractID = 1;

	// --- SETUP ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Setup")
	FName TargetMeshName = "TargetMesh";

	// Name of the widget component this touch's tether points at.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Setup")
	FName TargetWidgetName = "TargetWidget";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Setup")
	EAzr_HighlightMode HighlightMode = EAzr_HighlightMode::AllComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Setup")
	float HighlightSpeed = 0.8f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Setup")
	FAzr_TetherConfig TetherSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Setup", meta = (DisplayName = "Description"))
	FAzr_MultiLangText TouchDescription;

	// --- HAPTICS ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Haptics")
	UHapticFeedbackEffect_Base* HapticOnTouch;

	// --- AUDIO ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Audio")
	USoundBase* SoundHighlightStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Audio")
	USoundBase* SoundHighlightEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Audio")
	USoundBase* SoundOnTouch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Touch Configuration|Audio")
	USoundBase* SoundOnUntouch;

	// --- EVENTS ---
	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnTouchStateEvent OnTouched;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnTouchStateEvent OnUntouched;

	// --- API ---
	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void EnableTouch();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void DisableTouch();

	/**
	 * The pointer clicked, or let go, while inside this touch's zone.
	 *
	 * Desktop only, and driven by UAzr_HandScanner. In a headset a hand arriving in the zone IS the
	 * touch, because putting it there took reaching out. On desktop the "hand" is a crosshair the
	 * player sweeps across the room merely by looking around, so arriving somewhere means aiming at
	 * it and nothing more -- the touch has to be asked for.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void PressHand(USceneComponent* Hand);

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void ReleaseHand(USceneComponent* Hand);

	/** True between OnTouched and OnUntouched. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	bool IsTouched() const { return bIsTouched; }

private:
	// --- INTERNAL VISUALS ---
	UPROPERTY()
	UStaticMeshComponent* StartAnchor;

	UPROPERTY()
	UStaticMeshComponent* EndAnchor;

	UPROPERTY()
	UCableComponent* TetherCable;

	// --- HIGHLIGHT ENGINE ---
	UPROPERTY()
	UMaterialParameterCollection* HighlightMPC;

	int32 StencilID;
	float LastValue;
	bool bWasRising;

	// --- STATE ---
	bool bIsTouchEnabled = false;
	bool bHasTetherSettled = false;

	/**
	 * Whether this counts as touched right now.
	 *
	 * Kept apart from ActiveHands because presence and touching stopped being the same thing once
	 * desktop arrived: a crosshair can be inside the zone for as long as the player is looking that
	 * way. This is the flag the events are paired against, so neither can fire twice.
	 */
	bool bIsTouched = false;

	UPROPERTY()
	TArray<USceneComponent*> ActiveHands;

	/** Hands inside the zone that are also pressing. Desktop only; a real hand never appears here. */
	UPROPERTY()
	TArray<USceneComponent*> PressedHands;

	UPROPERTY()
	UPrimitiveComponent* TargetHandleMesh;

	UPROPERTY()
	UPrimitiveComponent* AutoDetectedMesh;

	UPROPERTY()
	USceneComponent* CurrentTargetWidget;

	UPROPERTY(Transient)
	UAzr_TouchZone* LinkedTouchZone;

	UPROPERTY()
	APawn* CachedPlayerPawn;

	// --- HELPERS ---
	/** The one place OnTouched fires from, so the entry sweep, an overlap and a click all agree. */
	void BeginTouch(USceneComponent* Hand);
	void EndTouch();

	/** True when this "hand" is a desktop crosshair, whose presence alone must not count as a touch. */
	static bool HandRequiresPress(UPrimitiveComponent* HandComp);

	void EnsureInitialized();
	void AutoDetectTouchZone();
	void ToggleTether(bool bState);
	void ToggleHighlight(bool bState);
	void UpdatePointer(bool bForceActive); // Parameter renamed to prevent C4458 shadowing

	FVector CalculateSurfaceAnchor(USceneComponent* Target, EAzr_TetherPos Pos, const FAzr_TetherConfig& Config);

	UPrimitiveComponent* FindMeshByName(FName Name);
	USceneComponent* FindWidgetByName(FName Name);
	UAzr_Pointer* FindPlayerPointer() const;

	// --- OVERLAP HANDLERS ---
	// Bound to the LinkedTouchZone's delegates in BeginPlay
	UFUNCTION()
	void OnTouchZoneBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnTouchZoneEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};