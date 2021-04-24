// Fill out your copyright notice in the Description page of Project Settings.

#include "BTT_GetPlayerLocation.h"
#include "Kismet/GameplayStatics.h"
#include "StealthCharacter.h"
#include "Agent_Controller.h"
#include "BB_Keys_Agent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_GetPlayerLocation::UBTT_GetPlayerLocation(FObjectInitializer const& object_init) {

	NodeName = TEXT("Can see player");

}

EBTNodeResult::Type UBTT_GetPlayerLocation::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	ACharacter* const REFPlayer = UGameplayStatics::GetPlayerCharacter(GetWorld(),0);
	auto* const player = Cast<AStealthCharacter>(REFPlayer);
	auto const agent = Cast<AAgent_Controller>(owner_comp.GetAIOwner());
	AAgent* agentMotion = Cast <AAgent>(agent->GetCharacter());

	if (player->IsHiding()) {

		agent->Get_bb()->SetValueAsBool(KEY_METADATA::player_visible, false);

		return EBTNodeResult::Failed;
	}
	
	agentMotion->SetSelfSpeed(base_player_speed_increase);

	agent->Get_bb()->SetValueAsObject(KEY_METADATA::pawn_target, player);

	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
