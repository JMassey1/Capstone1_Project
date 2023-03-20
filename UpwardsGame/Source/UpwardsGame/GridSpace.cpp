// Fill out your copyright notice in the Description page of Project Settings.


#include "GridSpace.h"

// Sets default values
AGridSpace::AGridSpace()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	GridMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GridMesh"));
	GridMesh->SetupAttachment(RootComponent);

	GridSize = 100.f;
	OccupyingTile = nullptr;

}

bool AGridSpace::IsOccupied() const
{
	return OccupyingTile != nullptr;
}

void AGridSpace::SetOccupyingTile(ATile* Tile)
{
	OccupyingTile = Tile;
}

ATile* AGridSpace::GetOccupyingTile() const
{
	return OccupyingTile;
}


// Called when the game starts or when spawned
void AGridSpace::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGridSpace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

