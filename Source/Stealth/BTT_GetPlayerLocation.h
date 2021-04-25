#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTT_GetPlayerLocation.generated.h"

UCLASS(Blueprintable)
class STEALTH_API UBTT_GetPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public: 
	UBTT_GetPlayerLocation(FObjectInitializer const& object_init);

	//Default function called when executing the behaviour tree node
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory) override;

protected: 
	//Loss radius for agent
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception", meta = (AllowProtectedAccess = "true"))
	float search_radius = 500.0f;

	//Increase of acceleration from player with '0f' being match speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Agent Motion", meta = (AllowProtectedAccess = "true"))
	float base_player_speed_increase = 50.0f; 
};
