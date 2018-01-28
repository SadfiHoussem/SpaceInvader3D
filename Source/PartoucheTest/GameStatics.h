// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameStatics.generated.h"

/**
 * 
 */
UCLASS()
class PARTOUCHETEST_API UGameStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};

USTRUCT(BlueprintType)
struct FSpaceshipSquad
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AActor> spaceshipClass = NULL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int numberOfMembers = 0;
};

USTRUCT(BlueprintType)
struct FSpaceshipWave
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FSpaceshipSquad> spaceshipSquads;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int spawnTime = 0;
};
