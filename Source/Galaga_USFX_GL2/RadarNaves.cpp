// Fill out your copyright notice in the Description page of Project Settings.


#include "RadarNaves.h"

ARadarNaves::ARadarNaves()
{
		PrimaryActorTick.bCanEverTick = true;

}

void ARadarNaves::BeginPlay()
{
		Super::BeginPlay();
}

void ARadarNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARadarNaves::VidaNave()
{
	Notificar();
}

void ARadarNaves::SetVidaPromedio(float _VidaPromedio)
{
	VidaPromedio = _VidaPromedio;
	VidaNave();
}

float ARadarNaves::GetVidaPromedio()
{
	return VidaPromedio;
}
