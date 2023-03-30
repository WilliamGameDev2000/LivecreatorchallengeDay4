// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelSpawner.generated.h"

class ATerrainSlices;

UCLASS()
class FROGGERCLONE_API ALevelSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION()
		void SpawnLevel(bool is_first);

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor,
			UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit);

protected:
	APawn* player;

	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<ATerrainSlices>> level_set;

	TArray<ATerrainSlices*> level_list;

public:
	int random_level;

	FVector spawn_location = FVector();
	FRotator spawn_rotation = FRotator();
	FActorSpawnParameters spawn_info = FActorSpawnParameters();

private:
	UFUNCTION()
		void TimerEnd();

	FTimerHandle timerHandle;
};
