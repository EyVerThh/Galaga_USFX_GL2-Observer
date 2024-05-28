// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "NaveEnemiga.h"
#include "Galaga_USFX_GL2Projectile.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeNaves.generated.h"


UCLASS()
class GALAGA_USFX_GL2_API AFacadeNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeNaves();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void SPAWN_NAVES_ENEMIGAS();

	void DestruirNavesEnemigas(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

public:

	TArray<ANaveEnemiga*> TANavesEnemigas;
};
