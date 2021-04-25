// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Agent.generated.h"

UENUM(BlueprintType, Category = "")
enum class TrailFollow : uint8
{
	Never UMETA(DisplayName = "Never"),
	Rarely UMETA(DisplayName = "Rarely"),
	MostTimes UMETA(DisplayName = "Most times"),
};

UCLASS()
class STEALTH_API AAgent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgent();

	void IncreaseSelfSpeed(const float speed);

	void CorrectSelfSpeed();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI chase")
	bool isChasingPlayer = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Search behaviour")
	TrailFollow searchBehaviour = TrailFollow::Never;

	TArray<AActor*> cachedEvidenceLocations;

private:

	const float min_agentSpeed = 150.0f;
	const float max_agentSpeed = 400.0f;

	float GetRandomNormalisedSpeed();

	//There are issues with pre-processor commands here, not even setting pre-processor expressions can stop magic numbers
	UPROPERTY(EditAnywhere, Category = "Patrol", meta = (ClampMin = 150.0f, ClampMax = 400.0f,
		UIMin = 150.0f, UIMax = 400.0f))
		float max_patrolSpeed;

};
