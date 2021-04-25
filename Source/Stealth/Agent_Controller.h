#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIController.h"
#include "Agent.h"
#include "Agent_Controller.generated.h"

UCLASS()
class STEALTH_API AAgent_Controller : public AAIController
{
	GENERATED_BODY()

public: 

	AAgent_Controller(FObjectInitializer const& object_init = FObjectInitializer::Get());

	void BeginPlay() override; //

	void OnPossess(APawn* const pawn) override; 

	//Retrieve a reference to the instance of the blackboard
	class UBlackboardComponent* Get_bb() const;

	//Used when agent visual stimuli detects player
	UFUNCTION()
	void On_target_spotted(AActor* actorInstance, FAIStimulus const stimulus);

	//Used for debugging purposes
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Agent")
	bool usePerception = true; 

private:

	//Local behaviour tree component
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Agent", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTreeComponent* p_behaviour_tree_component;

	//Instance of the agents behaviourtree
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Agent", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTree* p_behaviour_tree;

	//Blackboard used for blackboard key storage
	class UBlackboardComponent* p_blackboard; 

	//Agent sight perception
	class UAISenseConfig_Sight* sight_sense_config;

	//Set-up for sensory config
	void SensoryConfig();

	const float sightRadius = 500.0f;

	const float loseSightDeltaRadius = 50.0f;

	const float FOV = 90.0f;

	const float maxAge = 5.0f;

	const float persistanceVisionFactor = 1000.0f;

};
