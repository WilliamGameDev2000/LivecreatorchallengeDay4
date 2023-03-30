// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelSpawner.h"

#include "TerrainSlices.h"
#include "Engine.h"
#include "Components/BoxComponent.h"
#include "FroggerCloneCharacter.h"

// Sets default values
ALevelSpawner::ALevelSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevelSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnLevel(true);
	SpawnLevel(false);
	SpawnLevel(false);
	SpawnLevel(false);
}

// Called every frame
void ALevelSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelSpawner::SpawnLevel(bool is_first)
{
	
	spawn_location = FVector(-404.0f, 0.0f, 360.0f);
	spawn_rotation = FRotator(0.0f, 0.0f, 0.0f);

	

	if (!is_first)
	{
		ATerrainSlices* last_level = level_list.Last();
		spawn_location = last_level->GetSpawnLocation()->GetComponentTransform().GetTranslation();
	}

	random_level = FMath::RandRange(1, level_set.Num() - 1);
	ATerrainSlices* new_level = nullptr;

	if (is_first)
	{
		new_level = GetWorld()->SpawnActor<ATerrainSlices>(level_set[0], spawn_location, spawn_rotation, spawn_info);
		level_list.Add(new_level);
		return;
	}

	//can't seem to get the data asset holding the levels to work, oh well
	new_level = GetWorld()->SpawnActor<ATerrainSlices>(level_set[random_level], spawn_location, spawn_rotation, spawn_info);

	if (new_level)
	{
		if (new_level->GetTrigger())
		{
			new_level->GetTrigger()->OnComponentBeginOverlap.AddDynamic(this, &ALevelSpawner::OnOverlapBegin);
		}
		
	}
	level_list.Add(new_level);
	
	
	
	if (level_list.Num() > 12)
	{
		GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &ALevelSpawner::TimerEnd, 1.f, false);
	}
}

void ALevelSpawner::OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor, UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit)
{
	if (actor != nullptr)
	{
		if (Cast<AFroggerCloneCharacter>(actor))
		{
			SpawnLevel(false);
		}
	}
	

	/*if (overlapped != nullptr)
	{
		if (overlapped->GetOwner() == level_list[5])
		{
			GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &ALevelSpawner::TimerEnd, 1.f, false);
		}
	}*/
}

void ALevelSpawner::TimerEnd()
{
	level_list[0]->Destroy();
	level_list.RemoveAt(0);
}
