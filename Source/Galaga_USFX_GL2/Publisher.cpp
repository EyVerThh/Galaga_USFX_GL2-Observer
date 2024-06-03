// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher.h"
#include "Subscriber.h"

// Sets default values
APublisher::APublisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Suscriptores= TArray<AActor*>();

}

// Called when the game starts or when spawned
void APublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublisher::Suscrubirse(AActor* _Suscriptor)
{
	Suscriptores.Add(_Suscriptor);
}

void APublisher::Desuscribirse(AActor* _Suscriptor)
{
		Suscriptores.Remove(_Suscriptor);
}

void APublisher::Notificar()
{
		for (AActor* Sub : Suscriptores)  
	{
			ISuscriptor* Suscriptor = Cast<ISuscriptor>(Sub);
		if (Suscriptor)
		{
			Suscriptor->actualizar(this);
		}
	}	
}

