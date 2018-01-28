// Fill out your copyright notice in the Description page of Project Settings.

#include "WaveController.h"
#include "TimerManager.h"


// Sets default values
AWaveController::AWaveController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AWaveController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaveController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWaveController::AddSquad(int numWave, FSpaceshipSquad spaceshipSquad)
{
	if (SpaceshipWaves.IsValidIndex(numWave)) SpaceshipWaves[numWave].spaceshipSquads.Add(spaceshipSquad);
}

void AWaveController::ModifySquad(int numWave, int numSquad, FSpaceshipSquad spaceshipSquad)
{
	if (SpaceshipWaves.IsValidIndex(numWave) && SpaceshipWaves[numWave].spaceshipSquads.IsValidIndex(numSquad)) SpaceshipWaves[numWave].spaceshipSquads[numSquad] = spaceshipSquad;
}

void AWaveController::DeleteSquad(int numWave, int numSquad)
{
	if (SpaceshipWaves.IsValidIndex(numWave) && SpaceshipWaves[numWave].spaceshipSquads.IsValidIndex(numSquad)) SpaceshipWaves[numWave].spaceshipSquads.RemoveAt(numSquad);
}

void AWaveController::AddWave(FSpaceshipWave spaceshipWave)
{
	SpaceshipWaves.Add(spaceshipWave);
}

void AWaveController::ModifyWave(int numWave, FSpaceshipWave spaceshipWave)
{
	if (SpaceshipWaves.IsValidIndex(numWave)) SpaceshipWaves[numWave] = spaceshipWave;
}

void AWaveController::DeleteWave(int numWave)
{
	if (SpaceshipWaves.IsValidIndex(numWave)) SpaceshipWaves.RemoveAt(numWave);
}

void AWaveController::GenerateWave(int numWave)
{
	if (!SpaceshipWaves.IsValidIndex(numWave)) return;

	FTimerHandle UnusedHandle;
	FTimerDelegate SpawnDelegate = FTimerDelegate::CreateUObject(this, &AWaveController::SpawnSpaceship, numWave);
	GetWorldTimerManager().SetTimer(UnusedHandle, SpawnDelegate, SpaceshipWaves[numWave].spawnTime, false);

}

void AWaveController::SpawnSpaceship(int numWave)
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	int j = 0;
	for (const FSpaceshipSquad& spaceshipSquad : SpaceshipWaves[numWave].spaceshipSquads) {
		for (int i = 0; i <= spaceshipSquad.numberOfMembers; i++)
			GetWorld()->SpawnActor<AActor>(spaceshipSquad.spaceshipClass, FInitialSpawnPosition.GetLocation() + FVector(SpaceshipAdjacence * (i + 1), SpaceshipAdjacence * (numWave + 1), SpaceshipAdjacence* (j + 1)),
				FInitialSpawnPosition.GetRotation().Rotator(), SpawnInfo);

		j++;
	}
}

