// Fill out your copyright notice in the Description page of Project Settings.


#include "UpwardsGameBoard.h"

#include "GridSpace.h"

// Sets default values
AUpwardsGameBoard::AUpwardsGameBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	GridSpaceClass = AGridSpace::StaticClass();

	GridSpaces.SetNum(225);
}

// Called when the game starts or when spawned
void AUpwardsGameBoard::BeginPlay()
{
	Super::BeginPlay();

	FVector gridLocation(0.f, 0.f, 0.f);
	FRotator gridRotation(0.f, 0.f, 0.f);
	const float gridSize = 100.f;
	const int32 gridWidth = 15;
	const int32 gridHeight = 15;

	for (int32 row = 0; row < gridHeight; row++)
	{
		for (int32 col = 0; col < gridWidth; col++)
		{
			const int32 index = row * gridWidth + col;
			gridLocation.X = col * gridSize;
			gridLocation.Y = row * gridSize;
			AGridSpace* gridSpace = GetWorld()->SpawnActor<AGridSpace>(GridSpaceClass, gridLocation, gridRotation);
			if (gridSpace != nullptr)
			{
				GridSpaces[index] = gridSpace;
			}
		}
	}
	
}

// Called every frame
void AUpwardsGameBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

