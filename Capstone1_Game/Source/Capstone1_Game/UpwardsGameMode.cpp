 // Fill out your copyright notice in the Description page of Project Settings.


#include "UpwardsGameMode.h"

#include "UpwardsBoard.h"

 AUpwardsGameMode::AUpwardsGameMode()
{
 NumPlayers = 2;
 StartingScore = 0;
}


 void AUpwardsGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
 {
  Super::InitGame(MapName, Options, ErrorMessage);

  SpawnUpwardsBoard();
  
 }

 void AUpwardsGameMode::SpawnUpwardsBoard()
 {
  if (UpwardsBoardClass)
  {
   FActorSpawnParameters SpawnParams;
   AUpwardsBoard* ScrabbledBoard = GetWorld()->SpawnActor<AUpwardsBoard>(UpwardsBoardClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
  }
 }

