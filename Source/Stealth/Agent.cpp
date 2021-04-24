// Fill out your copyright notice in the Description page of Project Settings.

#include "Agent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StealthCharacter.h"
#include "Math/UnrealMathUtility.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

// Sets default values
AAgent::AAgent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AAgent::SetSelfSpeed(const float speed)
{
	AActor* mainCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(),0);
	AStealthCharacter* mainChar = Cast<AStealthCharacter>(mainCharacter);
	GetCharacterMovement()->MaxWalkSpeed = mainChar->GetCharacterMovement()->GetMaxSpeed() + speed;
}

// Called when the game starts or when spawned
void AAgent::BeginPlay()
{
	Super::BeginPlay();

	FRandomStream Stream(FMath::Rand());
	max_patrolSpeed = Stream.FRandRange(min_agentSpeed, max_agentSpeed);

	GetCharacterMovement()->MaxWalkSpeed = max_patrolSpeed;
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

