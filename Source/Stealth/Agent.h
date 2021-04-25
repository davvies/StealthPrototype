
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Agent.generated.h"

/*
* TrailFollow refers to the frequency at which the agent heads to the site of evidence.
* Never = No probablity. Rarely = Agent may occasionally head to site of evidence. MostTimes = Frequent visits.
*/
UENUM(BlueprintType, Category = "")
enum class TrailFollow : uint8
{
	Never UMETA(DisplayName = "Never"),
	Rarely UMETA(DisplayName = "Rarely"),
	MostTimes UMETA(DisplayName = "Most times"),
};

UCLASS()
class STEALTH_API AAgent : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAgent();

	void IncreaseSelfSpeed(const float speed); //Delta agent speed increase relative to player character

	void CorrectSelfSpeed(); //After the player is lost, the speed needs to be set to the original

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Used for HUD data
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI chase")
	bool isChasingPlayer = false;

	//By default agents will search a local area
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Search behaviour")
	TrailFollow searchBehaviour = TrailFollow::Never;

	//One would assume evidence is static and thus eligible for caching
	TArray<AActor*> cachedEvidenceLocations;

private:

	/*
	* When the player is out of sight the speed will be generated, given these constraints.
	* This is in place to stop the agent from sprinting when not detecting
	*/
	const float min_agentSpeed = 150.0f;
	const float max_agentSpeed = 400.0f;

	//return a speed within the min-max agent speed
	float GetRandomNormalisedSpeed();

	//There are issues with pre-processor commands here, not even setting pre-processor expressions can stop magic numbers
	UPROPERTY(EditAnywhere, Category = "Patrol", meta = (ClampMin = 150.0f, ClampMax = 400.0f,
		UIMin = 150.0f, UIMax = 400.0f))
	float max_patrolSpeed; //used for the speed

};
