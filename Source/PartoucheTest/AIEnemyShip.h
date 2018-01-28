// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AIEnemyShip.generated.h"

UCLASS()
class PARTOUCHETEST_API AAIEnemyShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAIEnemyShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Fire")
		void Fire();

	UFUNCTION(Category = "Fire")
		void FireWeapon();

	UFUNCTION(Category = "Fire")
		void ChangeFireRate();

	UFUNCTION(BlueprintCallable, Category = "Health")
		void TakeHullDamage(float Damage);
	
protected:
	void MoveEnemyShip(float mouvementSpeed);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxMovementDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* EnemyShipMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Health;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float InitialHealth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		bool IsBeingDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ShipSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MinFireRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxFireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTimerHandle TimerHandler_FireWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TimeBeforeDestruction;

	float FireRate;
	float MovementDistance;
	int MovementDirection;
	
};
