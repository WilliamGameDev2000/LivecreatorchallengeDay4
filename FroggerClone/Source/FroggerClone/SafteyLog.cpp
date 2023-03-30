// Fill out your copyright notice in the Description page of Project Settings.


#include "SafteyLog.h"

// Sets default values
ASafteyLog::ASafteyLog()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASafteyLog::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASafteyLog::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

