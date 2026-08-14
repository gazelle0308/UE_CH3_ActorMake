// 26/08/10 Copyright Jinho Song

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CH3_MovingActor.generated.h"

UCLASS()
class CH3_ACTORMAKEPROJECT_API ACH3_MovingActor : public AActor
{
	GENERATED_BODY()

public:
	ACH3_MovingActor();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CH3 Moving Actor|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Moving Actor|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Moving Actor|Properties")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Moving Actor|Properties")
	float MaxRangeToX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Moving Actor|Properties")
	float MaxRangeToY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CH3 Moving Actor|Properties")
	float MaxRangeToZ;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CH3 Moving Actor|Properties")
	FVector MaxRange;

	bool IsReturn;

	FVector StartLocation;

	FVector MoveSpeedV;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
