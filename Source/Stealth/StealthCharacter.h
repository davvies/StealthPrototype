// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "StealthCharacter.generated.h"

UENUM(BlueprintType, Category = "")
enum class SneakState : uint8 //dependant on the stealth state global agents react differently
{
	Visble UMETA(DisplayName = "Visible"), //player is in the open
	Hiding UMETA(DisplayName = "Hiding"), //player is completely hidden
};

UCLASS(config=Game)
class AStealthCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	AStealthCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//By default the player is in the open 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	SneakState SneakingState = SneakState::Visble;
	
	//Getter for external classes
	bool IsHiding();

	//HUD data
	bool isBeingChased = false;

	//Properties of the character are hidden
	float GetCharacterMovementSpeed();

	//Widget update 
	UFUNCTION(BlueprintCallable)
	void UpdateHUDTextState();

	//In-order to display the state on screen a string representation is needed
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString s_ActiveState = "Hidden";
	
	//A trigger used in ending the game
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasBeenCaught;

private:
	 
	//Local stimulus
	class UAIPerceptionStimuliSourceComponent* local_stimulus;

	//Configuration for stimulus
	void OnBeginStimulusSetup();

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	
};



