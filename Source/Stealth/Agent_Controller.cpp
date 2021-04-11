// Fill out your copyright notice in the Description page of Project Settings.
#include "Agent_Controller.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "StealthCharacter.h"

AAgent_Controller::AAgent_Controller(FObjectInitializer const& object_init) {
    static ConstructorHelpers::FObjectFinder<UBehaviorTree> cachedTree(TEXT("BehaviorTree'/Game/StealthAI/BT_Agent.BT_Agent'"));

    if (cachedTree.Succeeded()) 
        p_behaviour_tree = cachedTree.Object;
        UE_LOG(LogTemp, Warning, TEXT("cached lets go!"));
    
    p_behaviour_tree_component = object_init.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("c_BehaviourTree"));
    p_blackboard = object_init.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("c_Blackboard"));

}

void AAgent_Controller::BeginPlay()
{
    Super::BeginPlay();
    RunBehaviorTree(p_behaviour_tree);
    p_behaviour_tree_component->StartTree(*p_behaviour_tree);
}

void AAgent_Controller::OnPossess(APawn* const pawn)
{
    Super::OnPossess(pawn);
    if (p_blackboard)
        p_blackboard->InitializeBlackboard(*p_behaviour_tree->BlackboardAsset);


}

UBlackboardComponent* AAgent_Controller::get_bb() const
{
    UE_LOG(LogTemp, Warning, TEXT("My Name: %s"), *p_blackboard->GetKeyName(0).ToString());
    return p_blackboard;
}
