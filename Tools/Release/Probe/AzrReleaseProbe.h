#pragma once

#include "CoreMinimal.h"
#include "Azr_Animation.h"
#include "AzrReleaseProbe.generated.h"

/**
 * Compiled into a throwaway copy of the client template during release verification, and never
 * shipped. It exercises what a client's own C++ will do against the precompiled plugins: subclass a
 * framework UCLASS (UHT must parse our comment-stripped headers, and GENERATED_BODY must line up with
 * the shipped .generated.h), add reflected members, and link against every exported module.
 */
UCLASS()
class UAzrReleaseProbe : public UAzr_Animation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Probe")
	float ProbeValue = 1.f;

	UFUNCTION(BlueprintCallable, Category = "Probe")
	FString Probe();
};
