// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publisher.generated.h"

UCLASS()
class GALAGA_USFX_GL2_API APublisher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublisher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// almacena suscriptores
private:
	UPROPERTY(VisibleAnywhere, Category = "Publicador")

	TArray<AActor*>Suscriptores;   //almacena e

	class ISuscriptora* Suscriptor;  //referencia a la interfas
public:
	void Suscrubirse(AActor*_Suscriptor);	
	void Desuscribirse(AActor*_Suscriptor);
	void Notificar();
};
	
