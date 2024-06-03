// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publisher.h"
#include "RadarNaves.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_GL2_API ARadarNaves : public APublisher
{

	GENERATED_BODY()

public:
 void ARadarNaves();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	float VidaPromedio;

public:
	void VidaNave();
	void SetVidaPromedio(float _VidaPromedio);
	FORCEINLINE float GetVidaPromedio();

};
