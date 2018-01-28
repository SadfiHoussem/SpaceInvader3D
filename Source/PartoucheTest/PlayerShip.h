// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerShip.generated.h"

UCLASS()
class PARTOUCHETEST_API APlayerShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Fire")
		void Fire();

	UFUNCTION(BlueprintCallable, Category = "Health")
		void TakeHullDamage(float Damage);

	void FireWeapon();

	void StopFireWeapon();
	
	void CheckCanFire();

	void WaitUntilNextFire();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCanFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FireRate;

protected:
	bool bContiniousFiring;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Health;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float InitialHealth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool IsBeingDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TimeBeforeDestruction;
	
};
