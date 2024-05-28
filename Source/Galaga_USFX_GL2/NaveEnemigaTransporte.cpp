// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
    
}

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveEnemigaTransporte.NaveEnemigaTransporte'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

    VelocidadYTransporte = 100.0f;

	dimensionCargaOcupada = 300.0f;
	dimensionCargaDisponible = 700.0f;
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
    //Obtenemos la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Generamos nuevas coordenadas X e Y aleatorias
    float NuevaX = 0.0f; // No se mueve en el eje X

    // Calculamos la nueva posición en el eje Y
    float NuevaPosicionY = PosicionActual.Y + (VelocidadYTransporte * DeltaTime);

    // Verificamos si la nave ha alcanzado el límite superior o inferior
    if (NuevaPosicionY <= -1000.0f || NuevaPosicionY >= 1000.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadYTransporte *= -1.0f;
    }
    // Establecemos la nueva posición del actor
    SetActorLocation(FVector(PosicionActual.X + NuevaX, NuevaPosicionY, PosicionActual.Z));

}

void ANaveEnemigaTransporte::Cargar(float dimensionCarga, float pesoCarga)
{
	dimensionCargaOcupada = dimensionCargaDisponible - dimensionCarga;
}
