// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Agent_Controller.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AAgent_Controller : public AAIController
{
	GENERATED_BODY()

public: 

	AAgent_Controller(FObjectInitializer const& object_init = FObjectInitializer::Get());
	void BeginPlay() override; //
	void OnPossess(APawn* const pawn) override; //when the agent gets taken over by the controller
	class UBlackboardComponent* get_bb() const;

private:

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Agent", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTreeComponent* p_behaviour_tree_component;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI Agent", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTree* p_behaviour_tree;

	class UBlackboardComponent* p_blackboard; 

};
