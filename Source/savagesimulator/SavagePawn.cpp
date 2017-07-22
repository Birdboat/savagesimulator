// Fill out your copyright notice in the Description page of Project Settings.

#include "SavagePawn.h"


// Sets default values
ASavagePawn::ASavagePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASavagePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASavagePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASavagePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

