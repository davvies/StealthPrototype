// Fill out your copyright notice in the Description page of Project Settings.
#include "Agent_Controller.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "AIController.h"
#include "StealthCharacter.h"
#include "BB_Keys_Agent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AAgent_Controller::AAgent_Controller(FObjectInitializer const& object_init) {
    static ConstructorHelpers::FObjectFinder<UBehaviorTree> cachedTree(TEXT("BehaviorTree'/Game/StealthAI/BT_Agent.BT_Agent'"));

    if (cachedTree.Succeeded()) 
        p_behaviour_tree = cachedTree.Object;
    
    p_behaviour_tree_component = object_init.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("c_BehaviourTree"));
    p_blackboard = object_init.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("c_Blackboard"));


    sight_sense_config = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Agent Sight config"));
    SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
    sight_sense_config->SightRadius = 500.0f;
    sight_sense_config->LoseSightRadius = sight_sense_config->SightRadius + 50.0f; 
    sight_sense_config->PeripheralVisionAngleDegrees = 90.0f; //FOV
    sight_sense_config->SetMaxAge(5.0f);
    sight_sense_config->AutoSuccessRangeFromLastSeenLocation = 900.0f;
    sight_sense_config->DetectionByAffiliation.bDetectEnemies = true;
    sight_sense_config->DetectionByAffiliation.bDetectFriendlies = true; 
    sight_sense_config->DetectionByAffiliation.bDetectNeutrals = true;
  

    GetPerceptionComponent()->SetDominantSense(*sight_sense_config->GetSenseImplementation());
    GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AAgent_Controller::On_target_spotted);
    GetPerceptionComponent()->ConfigureSense(*sight_sense_config);
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

UBlackboardComponent* AAgent_Controller::Get_bb() const
{
    return p_blackboard;
}

void AAgent_Controller::On_target_spotted(AActor* actorInstance, FAIStimulus const stimulus)
{
    auto const mainCharacter = Cast<AStealthCharacter>(actorInstance);
    
    if (!mainCharacter)
        return;

    bool isInLoS = stimulus.WasSuccessfullySensed() && !mainCharacter->IsHiding();

    

    Get_bb()->SetValueAsBool(KEY_METADATA::player_visible, isInLoS);
           
}
