

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Azr_Saveable.generated.h"

UINTERFACE(BlueprintType, MinimalAPI)
class UAzr_Saveable : public UInterface
{
	GENERATED_BODY()
};

/**
 * Optional hooks for anything the generic property capture cannot reach.
 *
 * The save system already restores every reflected variable, transform, attachment and Azureal
 * component on an actor, so most content needs none of this. Implement it for the cases that live
 * outside the property system:
 *
 *   - a montage or Level Sequence that was mid-play (re-play it at the saved position)
 *   - anything driven by a state machine, which cannot be captured at all
 *   - derived state that has to be rebuilt rather than assigned
 *
 * Both events fire on the actor. AzrOnSaved runs just before capture, so it is the place to write
 * playback positions into saved variables. AzrOnRestored runs after every actor in the level has
 * had its state applied, so it is safe to reference other actors from it.
 */
class AZUREALXR_API IAzr_Saveable
{
	GENERATED_BODY()

public:
	/** Called immediately before this actor is captured. Push any transient state into saved variables here. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Azureal|Save")
	void AzrOnSaved();

	/** Called after the whole level has been restored. Rebuild anything that had to be derived rather than assigned. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Azureal|Save")
	void AzrOnRestored();
};
