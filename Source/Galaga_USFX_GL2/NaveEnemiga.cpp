// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "RadarNaves.h"
#include "Galaga_USFX_GL2GameMode.generated.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bEscapar = false;	
	bRetornar = false;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EscaparNave(DeltaTime);


}

//void ANaveEnemiga::Actualizar(APublisher* _Publicador)
//{
//}

void ANaveEnemiga::EstablecerRadar(ARadarNaves* _RadarNaves)
{
	RadarNaves = _RadarNaves;
	RadarNaves->Suscrubirse(this);
}

void ANaveEnemiga::actualizar(APublisher* _Publicador)
{
	Escapar();
}

void ANaveEnemiga::Escapar()
{
	float DañoRecivido = RadarNaves->GetVidaPromedio();
	if (DañoRecivido <= 10)
	{
		bEscapar = true;
	}
}

void ANaveEnemiga::Dessuscribirse()
{
	if(RadarNaves)
	{
		RadarNaves->Desuscribirse(this);
	}
}

void ANaveEnemiga::EscaparNave(float Deltatime)
{ 
	if (bEscapar == true)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), FVector(1700.0f, -147.0f, 215.0f), Deltatime, 0.5));
		Curarse();
	}
	if (GetActorLocation().Equals(FVector(1700.0f, -147.0f, 215.0f), 200))
	{
		bEscapar = false;
		bRetornar = true;
	}

}



