// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor/CH3_MovingActor.h"

float SignSet(float numOne, float numTwo)
{

	if (numOne < 0){ return numTwo * -1; }
	else if( numOne == 0 ){ return numTwo * 0; }
	return numTwo;

}

bool IsOver(double numE, double numC, double numS) {
	if (numE - numS < 0)
	{
		if (numE <= numC) { return true; }
		else { return false; }
	}
	else
	{
		if (numE >= numC) { return true; }
		else { return false; }
	}
}

bool IsOverPoint(FVector endPoint, FVector currentPoint, FVector startPoint)
{
	if (IsOver(endPoint.X, currentPoint.X, startPoint.X) &&
		IsOver(endPoint.Y, currentPoint.Y, startPoint.Y) &&
		IsOver(endPoint.Z, currentPoint.Z, startPoint.Z))
	{ return true; }
	return false;

}

ACH3_MovingActor::ACH3_MovingActor()
{

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);
	PrimaryActorTick.bCanEverTick = true;

	IsReturn = false;

	MoveSpeed = 1.0f;

	MaxRangeToX = 10.0f;
	MaxRangeToY = 10.0f;
	MaxRangeToZ = 10.0f;

}

void ACH3_MovingActor::BeginPlay()
{

	Super::BeginPlay();

	StartLocation = GetActorLocation();

	float MoveSpeedToX;
	float MoveSpeedToY;
	float MoveSpeedToZ;

	MoveSpeedToX = SignSet(MaxRangeToX, MoveSpeed);
	MoveSpeedToY = SignSet(MaxRangeToY, MoveSpeed);
	MoveSpeedToZ = SignSet(MaxRangeToZ, MoveSpeed);

	MoveSpeedV = FVector(MoveSpeedToX, MoveSpeedToY, MoveSpeedToZ);
	MaxRange = FVector(MaxRangeToX, MaxRangeToY, MaxRangeToZ);

}

void ACH3_MovingActor::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	FTransform NewTransForm;

	if (!IsReturn && IsOverPoint(StartLocation + MaxRange, GetActorLocation(), StartLocation))
	{ NewTransForm = FTransform(FRotator::ZeroRotator, FVector(MoveSpeedV * DeltaTime), FVector(1.0f)); }

	else if (!IsReturn && !IsOverPoint(StartLocation + MaxRange, GetActorLocation(), StartLocation))
	{ 
		IsReturn = true; 
	}


	else if (IsReturn && IsOverPoint(StartLocation, GetActorLocation(), StartLocation + MaxRange))
	{ NewTransForm = FTransform(FRotator::ZeroRotator, FVector(-(MoveSpeedV * DeltaTime)), FVector(1.0f)); }

	else if (IsReturn && !IsOverPoint(StartLocation, GetActorLocation(), StartLocation + MaxRange))
	{ 
		IsReturn = false; 
	}

	AddActorWorldTransform(NewTransForm);
}

