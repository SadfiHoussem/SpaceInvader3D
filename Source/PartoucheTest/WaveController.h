// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameStatics.h"
#include "WaveController.generated.h"

UCLASS()
class PARTOUCHETEST_API AWaveController : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AWaveController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Wave")
		void AddSquad(int numWave, FSpaceshipSquad spaceshipSquad);

	UFUNCTION(BlueprintCallable, Category = "Wave")
		void ModifySquad(int numWave, int numSquad, FSpaceshipSquad spaceshipSquad);

	UFUNCTION(BlueprintCallable, Category = "Wave")
		void DeleteSquad(int numWave, int numSquad);

	UFUNCTION(BlueprintCallable, Category = "Wave")
		void AddWave(FSpaceshipWave spaceshipWave);

	UFUNCTION(BlueprintCallable, Category = "Wave")
		void ModifyWave(int numWave, FSpaceshipWave spaceshipWave);

	UFUNCTION(BlueprintCallable, Category = "Wave")
		void DeleteWave(int numWave);

	UFUNCTION(BlueprintCallable, Category = "Wave")
		void GenerateWave(int numWave);

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FSpaceshipWave> SpaceshipWaves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTransform FInitialSpawnPosition = FTransform::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SpaceshipAdjacence;
private:

	void SpawnSpaceship(int numWave);
};
