// 26/08/10 Copyright Jinho Song

#include "RotateActor/CH3_RotateActor.h"

ACH3_RotateActor::ACH3_RotateActor()
{

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);


	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	PrimaryActorTick.bCanEverTick = true;


	PitchRotate = FMath::RandRange(-180.0f, 180.0f);
	YawRotate = FMath::RandRange(-180.0f, 180.0f);
	RollRotate = FMath::RandRange(-180.0f, 180.0f);

}

void ACH3_RotateActor::BeginPlay()
{

	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(
		ActorTimer,
		this,
		&ACH3_RotateActor::StateMachine,
		10.0f,
		true
	);

	GetWorld()->GetTimerManager().SetTimer(
		SpawnTimer,
		this,
		&ACH3_RotateActor::SpawnMachine,
		8.0f,
		true
	);
}

void ACH3_RotateActor::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	
	if (IsAction) {
		if (!FMath::IsNearlyZero(PitchRotate))
		{ AddActorLocalRotation(FRotator(PitchRotate * DeltaTime, 0.0f, 0.0f)); }
		if (!FMath::IsNearlyZero(YawRotate))
		{ AddActorLocalRotation(FRotator(0.0f, YawRotate * DeltaTime, 0.0f)); }
		if (!FMath::IsNearlyZero(RollRotate))
		{ AddActorLocalRotation(FRotator(0.0f, 0.0f, RollRotate * DeltaTime)); }
	}
}

void ACH3_RotateActor::StateMachine()
{
	float RandLandPosNum_X = FMath::RandRange(-4000.0f, 4000.0f);
	float RandLandPosNum_Y = FMath::RandRange(-4000.0f, 4000.0f);
	float RandHighPosNum = FMath::RandRange(15.0f, 400.0f);
	FVector OneVector(1.0f);
	FTransform RandTransform(FRotator::ZeroRotator, FVector(RandLandPosNum_X, RandLandPosNum_Y, RandHighPosNum), OneVector);
	
	float DeltaTime = GetWorld()->GetDeltaSeconds();
	IsAction = !IsAction;

	if (FMath::RandRange(1, 100) % 10 != 0)
	{
		SetActorTransform(RandTransform);
	}
	else
	{
		Destroy();
	}
}

void ACH3_RotateActor::SpawnMachine()
{
	float RandLandPosNum_X = FMath::RandRange(-4000.0f, 4000.0f);
	float RandLandPosNum_Y = FMath::RandRange(-4000.0f, 4000.0f);
	float RandHighPosNum = FMath::RandRange(15.0f, 400.0f);

	FVector OneVector(1.0f);
	FTransform RandTransform(FRotator::ZeroRotator, FVector(RandLandPosNum_X, RandLandPosNum_Y, RandHighPosNum), OneVector);
	FActorSpawnParameters SpawnParams;

	GetWorld()->SpawnActor<ACH3_RotateActor>(ThisActorData, RandTransform, SpawnParams);
}