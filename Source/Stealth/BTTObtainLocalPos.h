#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GameFramework/Pawn.h"
#include "Agent_Controller.h"
#include "Agent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/UObjectGlobals.h"
#include "BTTObtainLocalPos.generated.h"

UCLASS(Blueprintable)
class STEALTH_API UBTTObtainLocalPos : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTTObtainLocalPos(FObjectInitializer const& object_init);

	//Default behaviour tree execute node
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_mem) override;

	/*
	* Probable chance of heading to a cached evidence spot.
	* Scaled on a basis of 0->10 (with 10 being a 100% chance)
	* *NOTE* - This can also be a normalised value if needed
	*/
	bool ShallInvestigateRandomEvidence(const float odds);

	//Prompt the agent to move to a local spot (within the set radius)
	void GoToLocalPostion(UNavigationSystemV1* const nav, FVector origin, AAgent_Controller* cont, FNavLocation loc);

	//Prompt the agent to move to a random evidence spot
	void GoToRNDEvidenceSpot(AAgent* agent, AAgent_Controller* cont);

private: 

	//Radius of local search area
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Radius Search", meta = (AllowPrivateAccess = "true"))
	float max_agent_radius = 1500.0f;

	//Stream for random numbers 
	FRandomStream Stream;

	const int mediumProbablity = 5;

	const int highProbablity = 8; 
};
