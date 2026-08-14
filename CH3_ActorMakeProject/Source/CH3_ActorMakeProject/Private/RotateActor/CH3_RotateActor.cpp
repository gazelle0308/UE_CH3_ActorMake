// 26/08/10 Copyright Jinho Song

#include "RotateActor/CH3_RotateActor.h"

ACH3_RotateActor::ACH3_RotateActor()
{

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);


	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);


	PrimaryActorTick.bCanEverTick = true;


	PitchRotate = 0.0f;
	YawRotate = 90.0f;
	RollRotate = 10.0f;

}

void ACH3_RotateActor::BeginPlay()
{

	Super::BeginPlay();

}

void ACH3_RotateActor::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(PitchRotate))
	{

		AddActorLocalRotation(FRotator(PitchRotate * DeltaTime, 0.0f, 0.0f));

	}
	if (!FMath::IsNearlyZero(YawRotate))
	{

		AddActorLocalRotation(FRotator(0.0f, YawRotate * DeltaTime, 0.0f));

	}
	if (!FMath::IsNearlyZero(RollRotate))
	{

		AddActorLocalRotation(FRotator(0.0f, 0.0f, RollRotate * DeltaTime));

	}

}

