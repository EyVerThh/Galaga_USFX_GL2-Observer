// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveEnemigaEspia.NaveEnemigaEspia'"));
    mallaNaveEnemiga->SetStaticMesh(malla.Object);
    VelocidadVertical = 1.0f;
    energia = 10
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    float AlturaInicial = 200.0f;
    float AlturaFinal = 350.0f;

    // Definir la velocidad de movimiento vertical
    //float VelocidadVertical = 50.0f; // Puedes ajustar esta velocidad seg�n tu preferencia

    // Calcular la nueva posici�n en Z
    float NuevaAltura = FMath::Lerp(AlturaInicial, AlturaFinal, FMath::Abs(FMath::Sin(GetWorld()->TimeSeconds * VelocidadVertical)));

    //
    // Si ya hemos alcanzado la altura final, invertimos la direcci�n
    if (FMath::IsNearlyEqual(NuevaAltura, AlturaFinal, 1.0f))
    {
        VelocidadVertical *= -1.0f; // Cambiamos la direcci�n
    }

    // Establecer la nueva posici�n de la nave
    SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, NuevaAltura));
}

