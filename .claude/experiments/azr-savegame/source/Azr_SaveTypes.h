

#pragma once

#include "CoreMinimal.h"
#include "Azr_SaveTypes.generated.h"

/**
 * One reflected property, keyed by NAME rather than by offset.
 *
 * Name keying is what lets a save survive content edits: a variable that has been added since the
 * save was written simply has no record and keeps its authored value, and a variable that has been
 * removed is skipped on load instead of corrupting everything after it.
 */
USTRUCT()
struct AZUREALXR_API FAzr_PropertyRecord
{
	GENERATED_BODY()

	UPROPERTY()
	FName Name;

	UPROPERTY()
	TArray<uint8> Data;
};

/** State for a single component on a saved actor. */
USTRUCT()
struct AZUREALXR_API FAzr_ComponentRecord
{
	GENERATED_BODY()

	UPROPERTY()
	FName ComponentName;

	UPROPERTY()
	bool bHasRelativeTransform = false;

	UPROPERTY()
	FTransform RelativeTransform;

	UPROPERTY()
	TArray<FAzr_PropertyRecord> Properties;

	/**
	 * Which Enable* call was live on an Azureal interaction component when the save was taken.
	 * Restoring a raw "is enabled" bool is not enough -- the Enable* calls also build the highlight,
	 * tether, widget and timers -- so the mode is recorded and the matching call is re-issued.
	 * None means the component was dormant.
	 */
	UPROPERTY()
	FName ArmedMode;

	/** Sequence ID for the modes that take one (currently Grab Attach). */
	UPROPERTY()
	int32 ArmedSequenceID = 0;
};

/** State for one actor: its own properties, its components, and how it sits in the world. */
USTRUCT()
struct AZUREALXR_API FAzr_ActorRecord
{
	GENERATED_BODY()

	/** Level-placed actors keep a stable FName across loads, so it doubles as the match key. */
	UPROPERTY()
	FName ActorName;

	/** Only needed to respawn actors that were created at runtime. */
	UPROPERTY()
	FSoftClassPath ActorClass;

	UPROPERTY()
	bool bSpawnedAtRuntime = false;

	UPROPERTY()
	FTransform Transform;

	UPROPERTY()
	bool bHidden = false;

	/** Attachment is stored by actor name so a held or socketed object comes back attached. */
	UPROPERTY()
	FName AttachedToActor;

	UPROPERTY()
	FName AttachedToSocket;

	UPROPERTY()
	bool bSimulatingPhysics = false;

	UPROPERTY()
	FVector LinearVelocity = FVector::ZeroVector;

	UPROPERTY()
	FVector AngularVelocity = FVector::ZeroVector;

	UPROPERTY()
	TArray<FAzr_PropertyRecord> Properties;

	UPROPERTY()
	TArray<FAzr_ComponentRecord> Components;
};

/**
 * An opaque blob contributed by a module that is not AzurealXR.
 *
 * This is how Azureal_CSM stores curriculum progress without AzurealXR ever having to know CSM
 * exists -- the framework keeps the bytes, the contributor owns their meaning.
 */
USTRUCT()
struct AZUREALXR_API FAzr_PayloadRecord
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<uint8> Data;
};

/** Where the player was standing, expressed so it can be reapplied to a VR rig. */
USTRUCT()
struct AZUREALXR_API FAzr_PawnRecord
{
	GENERATED_BODY()

	UPROPERTY()
	bool bValid = false;

	/**
	 * The CAMERA's world position, not the pawn's or the VROrigin's.
	 *
	 * The camera is driven by the headset, so where the pawn actor sits tells you nothing about
	 * where the player's head was. On restore the origin is shifted so the camera lands back here,
	 * given wherever the player's head physically is at that moment.
	 */
	UPROPERTY()
	FVector CameraWorldLocation = FVector::ZeroVector;

	/**
	 * Yaw only, deliberately. Pitch and roll belong to the headset; forcing them onto the origin
	 * tilts the horizon, which is both wrong and a fast route to motion sickness.
	 */
	UPROPERTY()
	float CameraYaw = 0.0f;

	UPROPERTY()
	FTransform PawnTransform;
};
