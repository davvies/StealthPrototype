// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Agent.generated.h"

UCLASS()
class STEALTH_API AAgent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	const float min_agentSpeed = 150.0f;
	const float max_agentSpeed = 600.0f;

	UPROPERTY(EditAnywhere, Category = "Patrol", meta = (ClampMin = min_agentSpeed, ClampMax = max_agentSpeed,
		UIMin = min_agentSpeed, UIMax = max_agentSpeed))
		float max_patrolSpeed;

};