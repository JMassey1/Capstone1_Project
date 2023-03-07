// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "UpwardsTile.h"
#include "UpwardsGameState.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONE1_GAME_API AUpwardsGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	AUpwardsGameState();

protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY()
	TArray<AUpwardsTile*> PlayerHands;

	UPROPERTY()
	int32 NumRows;

	UPROPERTY()
	int32 NumCols;

	UPROPERTY()
	TArray<int32> PlayerScores;

	UPROPERTY()
	int32 CurrentPlayerIndex;

	UPROPERTY(EditDefaultsOnly)
	int32 NumPlayers;

	UPROPERTY(EditDefaultsOnly)
	int32 StartingScore;

	void InitializePlayers();

	int32 CalculateIndex(int32 Row, int32 Col) const
	{
		return Row * NumCols + Col;
	}

public:
	void AddTileToPlayerHand(int32 PlayerIndex, FUpwardsTile Tile);

	void RemoveTileFromPlayerHand(int32 PlayerIndex, FUpwardsTile Tile);

	int32 GetPlayerScore(int32 PlayerIndex) const;

	void AddPointsToPlayerScore(int32 PlayerIndex, int32 Points);

	int32 GetCurrentPlayerIndex() const;

	void SetCurrentPlayerIndex(int32 Index);
};
