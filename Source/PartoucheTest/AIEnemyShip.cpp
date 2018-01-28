// Fill out your copyright notice in the Description page of Project Settings.

#include "AIEnemyShip.h"
#include "Engine/StaticMesh.h"
#include "TimerManager.h"


// Sets default values
AAIEnemyShip::AAIEnemyShip(): MaxMovementDistance(5), MovementDistance(0), MovementDirection(1)
, InitialHealth(100), Health(InitialHealth), IsBeingDestroyed(false), ShipSpeed(1), MinFireRate(1), MaxFireRate(5), TimeBeforeDestruction(0.3)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	EnemyShipMesh = CreateDefaultSubobject<UStaticMeshComponent> (TEXT("EnemyShipMesh"));
	RootComponent = EnemyShipMesh;
}

// Called when the game starts or when spawned
void AAIEnemyShip::BeginPlay()
{
	Super::BeginPlay();
	Health = InitialHealth;
	ChangeFireRate();
}

// Called every frame
void AAIEnemyShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	MoveEnemyShip(DeltaTime);
	
}

void AAIEnemyShip::FireWeapon()
{
	Fire();
	ChangeFireRate();
}

void AAIEnemyShip::ChangeFireRate()
{
	FireRate = FMath::RandRange(MinFireRate, MaxFireRate);

	GetWorldTimerManager().SetTimer(TimerHandler_FireWeapon, this, &AAIEnemyShip::FireWeapon, FireRate, true);

}

void AAIEnemyShip::TakeHullDamage(float Damage)
{
	if (!IsBeingDestroyed)
	{
		Health -= Damage;
		if (Health <= 0)
		{
			Health = 0;
			SetLifeSpan(TimeBeforeDestruction);
			IsBeingDestroyed = true;
		}
	}
}

void AAIEnemyShip::MoveEnemyShip(float mouvementSpeed)
{
	MovementDistance += MovementDirection * mouvementSpeed * ShipSpeed;
	
	if(FMath::Abs(MovementDistance) > MaxMovementDistance)
	{
		// Inverse movement direction
		MovementDirection *= -1;
	}

	FVector currentPos = EnemyShipMesh->GetRelativeTransform().GetLocation();
	EnemyShipMesh->AddRelativeLocation(FVector(MovementDistance, 0, 0));
}

