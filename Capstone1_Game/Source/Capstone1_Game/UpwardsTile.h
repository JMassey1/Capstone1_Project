// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UpwardsTile.generated.h"

UCLASS()
class CAPSTONE1_GAME_API AUpwardsTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUpwardsTile();

	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Tile Properties")
	FString Letter;

	UPROPERTY(EditAnywhere, Category = "Tile Properties")
	int32 Points;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TileMesh;

public:
	FString GetLetter() const;

	void SetLetter(const FString& NewLetter);

	int32 GetPointValue() const;

	void SetPointValue(int32 NewPointValue);

};
