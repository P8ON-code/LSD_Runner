// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseCube.generated.h"

UCLASS()
class LSD_RUNNER_API ABaseCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Appear();

	virtual void Disapper();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* meshka;

};
