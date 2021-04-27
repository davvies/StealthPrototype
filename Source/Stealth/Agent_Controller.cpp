#include "Agent_Controller.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "AIController.h"
#include "StealthCharacter.h"
#include "BB_Keys_Agent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

AAgent_Controller::AAgent_Controller(FObjectInitializer const& object_init) {
    static ConstructorHelpers::FObjectFinder<UBehaviorTree> cachedTree(TEXT("BehaviorTree'/Game/StealthAI/BT_Agent.BT_Agent'"));

    if (cachedTree.Succeeded()) 
        p_behaviour_tree = cachedTree.Object;
    
    p_behaviour_tree_component = object_init.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("c_BehaviourTree"));
    p_blackboard = object_init.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("c_Blackboard"));

    SensoryConfig();

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

    if(usePerception)
        Get_bb()->SetValueAsBool(KEY_METADATA::player_visible, isInLoS);
           
}

void AAgent_Controller::SensoryConfig()
{
    sight_sense_config = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Agent sight config"));
    SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

    //sense param configs
    sight_sense_config->SightRadius = sightRadius;

    sight_sense_config->LoseSightRadius = sight_sense_config->SightRadius + loseSightDeltaRadius;

    sight_sense_config->PeripheralVisionAngleDegrees = FOV; //typical frustrum angle (90')

    sight_sense_config->SetMaxAge(maxAge);

    sight_sense_config->AutoSuccessRangeFromLastSeenLocation = persistanceVisionFactor;

    //awareness configs
    sight_sense_config->DetectionByAffiliation.bDetectEnemies = true;
    sight_sense_config->DetectionByAffiliation.bDetectFriendlies = true;
    sight_sense_config->DetectionByAffiliation.bDetectNeutrals = true;

    //given maps set within the night auditory senses can become prominent
    GetPerceptionComponent()->SetDominantSense(*sight_sense_config->GetSenseImplementation());

    GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AAgent_Controller::On_target_spotted);

    GetPerceptionComponent()->ConfigureSense(*sight_sense_config);
}
