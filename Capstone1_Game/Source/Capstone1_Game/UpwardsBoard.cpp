// Fill out your copyright notice in the Description page of Project Settings.


#include "UpwardsBoard.h"
#include "Components/StaticMeshComponent.h"



// Sets default values
AUpwardsBoard::AUpwardsBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	
}

// Called when the game starts or when spawned
void AUpwardsBoard::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Board Spawned"));

	for (int32 RowIndex = 0; RowIndex < NumBoardRows; RowIndex++)
	{
		for (int32 ColIndex = 0; ColIndex < NumBoardCols; ColIndex++)
		{
			FBoardTile BoardTile;
			BoardTile.RowIndex = RowIndex;
			BoardTile.ColIndex = ColIndex;
			BoardTiles.Add(BoardTile);
		}
	}

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SquareMesh(TEXT("/Game/Scrabble/Meshes/TileSquare.TileSquare"));
	if (SquareMesh.Succeeded())
	{
		// Create a grid of static mesh components to represent the squares on the board
		for (int32 Row = 0; Row < NumBoardRows; Row++)
		{
			for (int32 Col = 0; Col < NumBoardCols; Col++)
			{
				// Calculate the position and rotation of the square
				FVector Location = FVector(Col * 20.0f, Row * 20.0f, 0.f);
				FRotator Rotation = FRotator::ZeroRotator;

				// Create a new static mesh component and attach it to the board actor
				UStaticMeshComponent* SquareComponent = NewObject<UStaticMeshComponent>(this);
				SquareComponent->SetStaticMesh(SquareMesh.Object);
				SquareComponent->SetRelativeLocation(Location);
				SquareComponent->SetRelativeRotation(Rotation);
				SquareComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

				// Add the new square component to our array of square components
				SquareComponents[Row][Col] = SquareComponent;
			}
		}
	}
}

FBoardTile AUpwardsBoard::GetBoardTile(int32 Row, int32 Col) const
{
	for (const FBoardTile& BoardTile : BoardTiles)
	{
		if (BoardTile.RowIndex == Row && BoardTile.ColIndex == Col)
		{
			return BoardTile;
		}
	}

	FBoardTile EmptyTile;
	return EmptyTile;
}

bool AUpwardsBoard::IsTilePlacedOnBoard(int32 Row, int32 Col) const
{
	for (const FBoardTile& BoardTile : BoardTiles)
	{
		if (BoardTile.RowIndex == Row && BoardTile.ColIndex == Col && BoardTile.Tile.Letter != "")
		{
			return true;
		}
	}
	return false;
}

bool AUpwardsBoard::PlaceTileOnBoard(int32 Row, int32 Col, FScrabbleTile Tile)
{
	if (!IsValidBoardPosition(Row, Col))
	{
		return false;
	}

	for (FBoardTile& BoardTile : BoardTiles)
	{
		if (BoardTile.RowIndex == Row && BoardTile.ColIndex == Col)
		{
			BoardTile.Tile = Tile;
			return true;
		}
	}
	return false;
}

bool AUpwardsBoard::RemoveTileFromBoard(int32 Row, int32 Col)
{
	if (!IsValidBoardPosition(Row, Col))
	{
		return false;
	}

	for (FBoardTile& BoardTile : BoardTiles)
	{
		if (BoardTile.RowIndex == Row && BoardTile.ColIndex == Col)
		{
			BoardTile.Tile.Letter = "";
			BoardTile.Tile.Points = 0;
			return true;
		}
	}

	return false;
}

bool AUpwardsBoard::IsValidBoardPosition(int32 Row, int32 Col) const
{
	if (Row < 0 || Row >= NumBoardRows || Col < 0 || Col >= NumBoardCols)
	{
		return false;
	}
	return true;
}
