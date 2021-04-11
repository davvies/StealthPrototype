// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GameFramework/Pawn.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/UObjectGlobals.h"
#include "BTTObtainLocalPos.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class STEALTH_API UBTTObtainLocalPos : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTTObtainLocalPos(FObjectInitializer const& object_init);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_mem);

private: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Radius Search", meta = (AllowPrivateAccess = "true"))
	float max_agent_radius = 1500.0f;
};
