// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTObtainLocalPos.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Agent_Controller.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BB_Keys_Agent.h"
#include <iostream>

UBTTObtainLocalPos::UBTTObtainLocalPos(FObjectInitializer const& object_init)
{
	NodeName = TEXT("Get random nearby position");
}

EBTNodeResult::Type UBTTObtainLocalPos::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_mem)
{
	auto const a_controller = Cast<AAgent_Controller>(owner_comp.GetAIOwner());
	auto const a_agent = a_controller->GetPawn();
	FVector const origin = a_agent->GetActorLocation();
	FNavLocation loc; 

	UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld());

	if (nav_sys->GetRandomPointInNavigableRadius(origin, max_agent_radius, loc, nullptr))
		a_controller->get_bb()->SetValueAsVector(KEY_METADATA::target_location, loc.Location);

	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
