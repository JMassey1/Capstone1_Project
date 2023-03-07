// Fill out your copyright notice in the Description page of Project Settings.


#include "UpwardsGameState.h"

AUpwardsGameState::AUpwardsGameState()
{
	NumPlayers = 2;
	StartingScore = 0;
	CurrentPlayerIndex = 0;
	InitializePlayers();
}

void AUpwardsGameState::BeginPlay()
{
	Super::BeginPlay();
}

void AUpwardsGameState::InitializePlayers()
{
	PlayerHands.Init(TArray<FUpwardsTile>(), NumPlayers);
	PlayerScores.Init(StartingScore, NumPlayers);
}

void AUpwardsGameState::AddTileToPlayerHand(int32 PlayerIndex, FUpwardsTile Tile)
{
	if (PlayerIndex < 0 || PlayerIndex >= NumPlayers)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid player index %d"), PlayerIndex);
		return;
	}
	PlayerHands[PlayerIndex].Add(Tile);
}

void AUpwardsGameState::RemoveTileFromPlayerHand(int32 PlayerIndex, FUpwardsTile Tile)
{
	if (PlayerIndex < 0 || PlayerIndex >= NumPlayers)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid player index %d"), PlayerIndex);
		return;
	}

	PlayerHands[PlayerIndex].Remove(Tile);
}

int32 AUpwardsGameState::GetPlayerScore(int32 PlayerIndex) const
{
	if (PlayerIndex < 0 || PlayerIndex >= NumPlayers)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid player index %d"), PlayerIndex);
		return 0;
	}

	return PlayerScores[PlayerIndex];
}

void AUpwardsGameState::AddPointsToPlayerScore(int32 PlayerIndex, int32 Points)
{
	if (PlayerIndex < 0 || PlayerIndex >= NumPlayers)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid player index %d"), PlayerIndex);
		return;
	}

	PlayerScores[PlayerIndex] += Points;
}

int32 AUpwardsGameState::GetCurrentPlayerIndex() const
{
	return CurrentPlayerIndex;
}

void AUpwardsGameState::SetCurrentPlayerIndex(int32 Index)
{
	CurrentPlayerIndex = Index;
}

