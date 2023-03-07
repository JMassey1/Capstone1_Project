// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UpwardsGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONE1_GAME_API AUpwardsGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUpwardsGameMode();
	
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Upwards - Game")
	int32 NumPlayers;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Upwards - Game")
	int32 StartingScore;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, category = "Upwards - Game")
	TSubclassOf<class AUpwardsBoard> UpwardsBoardClass;
	
private:
	void SpawnUpwardsBoard();
};
