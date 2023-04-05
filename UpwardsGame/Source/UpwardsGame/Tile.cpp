// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
	TileMesh->SetupAttachment(RootComponent);

	TileSize = 50.f;
	LaunchSpeed = 1000.f;
	LaunchAngle = 45.f;
	CurrentGridSpace = nullptr;

	LaunchDirection = FVector(0.f, 0.f, 1.f);

}

void ATile::PickUp()
{
	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
}


void ATile::PlaceOnGridSpace(AGridSpace* GridSpace)
{
	CurrentGridSpace = GridSpace;

	FVector TargetLocation;
	TargetLocation.Z += TileSize / 2.f;

	FVector LaunchLocation = GetActorLocation();
	LaunchLocation.Z += TileSize / 2.f;

	FRotator LaunchRotation = UKismetMathLibrary::FindLookAtRotation(LaunchLocation, TargetLocation);

	// Need to finish
	
}
