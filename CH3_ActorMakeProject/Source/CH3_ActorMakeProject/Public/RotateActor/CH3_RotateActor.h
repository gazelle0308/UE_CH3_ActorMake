// 26/08/10 Copyright Jinho Song

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CH3_RotateActor.generated.h"

UCLASS()
class CH3_ACTORMAKEPROJECT_API ACH3_RotateActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ACH3_RotateActor();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACH3_RotateActor> ThisActorData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CH3 Rotate Actor|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Rotate Actor|Components")
	UStaticMeshComponent* StaticMeshComp;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Rotate Actor|Properties")
	float PitchRotate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Rotate Actor|Properties")
	float YawRotate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Rotate Actor|Properties")
	float RollRotate;

	FTimerHandle ActorTimer;
	FTimerHandle SpawnTimer;


	bool IsAction = true;

	void StateMachine();
	void SpawnMachine();


	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
