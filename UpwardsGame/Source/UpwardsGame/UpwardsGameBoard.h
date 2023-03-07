// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UpwardsGameBoard.generated.h"

UCLASS()
class UPWARDSGAME_API AUpwardsGameBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUpwardsGameBoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Grid")
	TSubclassOf<class AGridSpace> GridSpaceClass;

	UPROPERTY()
	TArray<AGridSpace*> GridSpaces;
};
