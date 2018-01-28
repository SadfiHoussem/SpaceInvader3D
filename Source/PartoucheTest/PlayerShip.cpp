// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerShip.h"
#include "TimerManager.h"


// Sets default values
APlayerShip::APlayerShip(): bCanFire(true), FireRate(1), InitialHealth(100), Health(InitialHealth), IsBeingDestroyed(false), TimeBeforeDestruction(0.3)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	
	Health = InitialHealth;

}

// Called every frame
void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("FireWeapon", IE_Pressed, this, &APlayerShip::FireWeapon);
	PlayerInputComponent->BindAction("FireWeapon", IE_Released, this, &APlayerShip::StopFireWeapon);

}

void APlayerShip::TakeHullDamage(float Damage)
{
	if (!IsBeingDestroyed)
	{
		Health -= Damage;
		if (Health <= 0)
		{
			Health = 0;
			//SetLifeSpan(TimeBeforeDestruction);
			IsBeingDestroyed = true;
		}
	}
}

void APlayerShip::FireWeapon() {
	bContiniousFiring = true;
	CheckCanFire();
}

void APlayerShip::StopFireWeapon() {
	bContiniousFiring = false;
}

void APlayerShip::WaitUntilNextFire()
{
	bCanFire = true;
	if (bContiniousFiring) CheckCanFire();
}

void APlayerShip::CheckCanFire()
{
	if (bCanFire) {
		
		FTimerHandle UniqueHandle;
		FTimerDelegate RespawnDelegate = FTimerDelegate::CreateUObject(this, &APlayerShip::WaitUntilNextFire);
		GetWorldTimerManager().SetTimer(UniqueHandle, RespawnDelegate, FireRate, false);
		bCanFire = false;
		Fire();
	}
}
