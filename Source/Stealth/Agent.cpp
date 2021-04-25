// Fill out your copyright notice in the Description page of Project Settings.

#include "Agent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StealthCharacter.h"
#include "Math/UnrealMathUtility.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include <Engine.h>

AAgent::AAgent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AAgent::IncreaseSelfSpeed(const float speed)
{
	/*
	* We assume the player is always slower.
	* To have a use-case for the agent to match the players speed, a param speed of zero will suffice
	*/
	AActor* mainCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(),0);
	AStealthCharacter* mainChar = Cast<AStealthCharacter>(mainCharacter);
	GetCharacterMovement()->MaxWalkSpeed = mainChar->GetCharacterMovement()->GetMaxSpeed() + speed;
}

void AAgent::CorrectSelfSpeed()
{
	//Reset speed
	GetCharacterMovement()->MaxWalkSpeed = GetRandomNormalisedSpeed();
}

float AAgent::GetRandomNormalisedSpeed()
{
	//Obtain a speed within constraint values
	FRandomStream Stream(FMath::Rand());
	max_patrolSpeed = Stream.FRandRange(min_agentSpeed, max_agentSpeed);
	return max_patrolSpeed;
}

void AAgent::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->MaxWalkSpeed = GetRandomNormalisedSpeed();

	//For caching of evidence static constants are called
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),ADecalActor::StaticClass(), cachedEvidenceLocations);
}

// Called every frame
void AAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

