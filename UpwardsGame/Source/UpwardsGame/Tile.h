// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

class AGridSpace;

UCLASS()
class UPWARDSGAME_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

	UFUNCTION(BlueprintCallable)
	void PickUp();

	UFUNCTION(BlueprintCallable)
	void PlaceOnGridSpace(AGridSpace* GridSpace);

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TileMesh;

	UPROPERTY(EditAnywhere)
	float TileSize;

	UPROPERTY(EditAnywhere)
	float LaunchSpeed;

	UPROPERTY(EditAnywhere)
	float LaunchAngle;
	
	UPROPERTY()
	AGridSpace* CurrentGridSpace;

	FVector LaunchDirection;

};
