// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCube.h"

// Sets default values
ABaseCube::ABaseCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Adding static mesh component to actor, so we will be able to set mesh in blueprints
	meshka->CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshka"));

}

// Called when the game starts or when spawned
void ABaseCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCube::Appear()
{
	meshka->SetVisibility(true);
	this->SetActorEnableCollision(true);
}

void ABaseCube::Disapper()
{
	meshka->SetVisibility(false);
	this->SetActorEnableCollision(false);
}

