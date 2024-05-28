// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FabricaNaves.generated.h"

UCLASS()
class GALAGA_USFX_GL2_API AFabricaNaves : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFabricaNaves();


	//virtual ANaveEnemiga* FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation) PURE_VIRTUAL(AFabricaNaves::FabricarNaves, return nullptr;);//Funcion para fabricar naves
	UFUNCTION(BlueprintCallable, Category = "FabricaNaves")
	static ANaveEnemiga* FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);//Funcion para fabricar naves

	//static ANaveE* FabricarNavesE(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);//Funcion para fabricar naves


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
