// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridSpace.generated.h"

class ATile;

UCLASS()
class UPWARDSGAME_API AGridSpace : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridSpace();

	UFUNCTION(BlueprintCallable)
	bool IsOccupied() const;

	UFUNCTION(BlueprintCallable)
	void SetOccupyingTile(ATile* Tile);

	UFUNCTION(BlueprintCallable)
	ATile* GetOccupyingTile() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GridMesh;

	UPROPERTY(EditAnywhere)
	float GridSize;

	UPROPERTY()
	ATile* OccupyingTile;

};
