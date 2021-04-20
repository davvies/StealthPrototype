// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTT_GetPlayerLocation.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class STEALTH_API UBTT_GetPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public: 
	UBTT_GetPlayerLocation(FObjectInitializer const& object_init);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory) override;

protected: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception", meta = (AllowProtectedAccess = "true"))
	float search_radius = 500.0f;
};
