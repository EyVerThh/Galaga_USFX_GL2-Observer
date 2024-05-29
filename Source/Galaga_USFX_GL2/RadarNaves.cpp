// Fill out your copyright notice in the Description page of Project Settings.


#include "RadarNaves.h"

void ARadarNaves::BeginPlay()
{
	PrimaryActorTick.bCanEverTick = true;
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
}

float ARadarNaves::GetVidaPromedio()
{
	return 0.0f;
}
