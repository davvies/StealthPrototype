// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTObtainLocalPos.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BB_Keys_Agent.h"
#include <iostream>

UBTTObtainLocalPos::UBTTObtainLocalPos(FObjectInitializer const& object_init)
{
	NodeName = TEXT("Get random nearby position"); //Blackboard node name
}

EBTNodeResult::Type UBTTObtainLocalPos::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_mem)
{
	auto const a_controller = Cast<AAgent_Controller>(owner_comp.GetAIOwner());

	auto const a_agent = a_controller->GetPawn();

	AAgent* agentMotion = Cast <AAgent>(a_controller->GetCharacter());

	FVector const origin = a_agent->GetActorLocation();

	FNavLocation loc;

	UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld());

	switch (agentMotion->searchBehaviour) {

		case TrailFollow::Never:

			//Assuming the agent never intends to visit the evidence sights they search locally
			GoToLocalPostion(nav_sys, origin, a_controller, loc);

			break;

		case TrailFollow::Rarely:

			if (ShallInvestigateRandomEvidence(mediumProbablity)) {

				GoToRNDEvidenceSpot(agentMotion, a_controller);
			}
			else {

				GoToLocalPostion(nav_sys, origin, a_controller, loc);
			}

			break;

		case TrailFollow::MostTimes:

			if (ShallInvestigateRandomEvidence(highProbablity)) {

				GoToRNDEvidenceSpot(agentMotion, a_controller);
			}
			else {
				GoToLocalPostion(nav_sys, origin, a_controller, loc);
			}

			break;

		default: 

			UE_LOG(LogTemp, Warning, TEXT("No agent search state found"));

			break;
	}

	agentMotion->isChasingPlayer = false;

	agentMotion->CorrectSelfSpeed(); //set speed

	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}

bool UBTTObtainLocalPos::ShallInvestigateRandomEvidence(float odds)
{
	odds = odds > 10 || odds < 0 ? 10 : odds; //defensive programming to filter bad input

	/*
	* Probability is calculated by generating a number 0-10 and checking its value against odds.
	* 10 is an arbitrary range
	*/
	float probablityOfEvidenceSearch = Stream.FRandRange(0, 10); 
	return probablityOfEvidenceSearch < odds ? true : false;
}

void UBTTObtainLocalPos::GoToLocalPostion(UNavigationSystemV1* const nav, FVector origin, AAgent_Controller* cont, FNavLocation loc)
{
	//If there's a free local position move to it
	if (nav->GetRandomPointInNavigableRadius(origin, max_agent_radius, loc, nullptr))
		cont->Get_bb()->SetValueAsVector(KEY_METADATA::target_location, loc.Location);

}

void UBTTObtainLocalPos::GoToRNDEvidenceSpot(AAgent* agent, AAgent_Controller* cont)
{
	//Get a location from the evidence and move (this is not called every frame) 
	FVector nloc = agent->cachedEvidenceLocations[Stream.RandRange(0, agent->cachedEvidenceLocations.Num() - 1)]->GetActorLocation();
	cont->Get_bb()->SetValueAsVector(KEY_METADATA::target_location, nloc);
}

