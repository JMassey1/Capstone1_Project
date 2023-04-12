// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UpwardsBoard.generated.h"

USTRUCT(BlueprintType)
struct FBoardTile
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	int32 RowIndex;

	UPROPERTY(BlueprintReadOnly)
	int32 ColIndex;

	UPROPERTY(BlueprintReadOnly)
	FUpwardsTile Tile;
};

UCLASS()
class CAPSTONE1_GAME_API AUpwardsBoard : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AUpwardsBoard();

	UFUNCTION(BlueprintCallable, Category = "Upwards Board")
	FBoardTile GetBoardTile(int32 Row, int32 Col) const;

	UFUNCTION(BlueprintCallable, Category = "Upwards Board")
	bool IsTilePlacedOnBoard(int32 Row, int32 Col) const;

	UFUNCTION(BlueprintCallable, Category = "Upwards Board")
	bool PlaceTileOnBoard(int32 Row, int32 Col, FScrabbleTile Tile);

	UFUNCTION(BlueprintCallable, Category = "Upwards Board")
	bool RemoveTileFromBoard(int32 Row, int32 Col);

	static const int32 NumBoardRows = 15;
	static const int32 NumBoardCols = 15;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	TArray<FBoardTile> BoardTiles;
	TArray<TArray<UStaticMeshComponent*>> SquareComponents;

	bool IsValidBoardPosition(int32 Row, int32 Col) const;
	
//public:
	// Called every frame
	// virtual void Tick(float DeltaTime) override;
};
