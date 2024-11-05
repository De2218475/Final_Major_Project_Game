// Fill out your copyright notice in the Description page of Project Settings.


#include "ASpinningActor.h"

// Sets default values
AASpinningActor::AASpinningActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Default rotation speed, editable in editor
	RotationSpeed = FRotator(0.f, 90.f, 0.f); // 90 degrees per second on the Yaw (Z axis)
}

// Called when the game starts or when spawned
void AASpinningActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AASpinningActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// Apply rotation every frame
	AddActorLocalRotation(RotationSpeed * DeltaTime * 1);
}

