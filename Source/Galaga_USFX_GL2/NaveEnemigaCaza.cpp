// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveCaza.NaveCaza'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	VelocidadYCaza = 100.0f;
    energia = 10 

}

// Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
    //Obtenemos la posici�n actual del actor
     FVector PosicionActual = GetActorLocation();

     // Generamos nuevas coordenadas X e Y aleatorias
     float NuevaX = 0.0f; // No se mueve en el eje X

     // Calculamos la nueva posici�n en el eje Y
     float NuevaPosicionY = PosicionActual.Y + (VelocidadYCaza * DeltaTime);

     // Verificamos si la nave ha alcanzado el l�mite superior o inferior
     if (NuevaPosicionY <= -1000.0f || NuevaPosicionY >= 1000.0f)
     {
        // Cambiamos la direcci�n multiplicando por -1
        VelocidadYCaza *= -1.0f;
     }
        // Establecemos la nueva posici�n del actor
        SetActorLocation(FVector(PosicionActual.X + NuevaX, NuevaPosicionY, PosicionActual.Z));
    
}