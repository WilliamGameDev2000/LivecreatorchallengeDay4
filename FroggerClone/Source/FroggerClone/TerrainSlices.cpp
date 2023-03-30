// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainSlices.h"

#include "Components/BoxComponent.h"

// Sets default values
ATerrainSlices::ATerrainSlices()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATerrainSlices::BeginPlay()
{
	Super::BeginPlay();
	
	if (trigger != nullptr)
	{
		trigger->bHiddenInGame = true;
	}

}

// Called every frame
void ATerrainSlices::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UBoxComponent* ATerrainSlices::GetTrigger()
{
	return trigger;
}

UBoxComponent* ATerrainSlices::GetSpawnLocation()
{
	return spawn_location;
}

