// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeNaves.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaTransporte.h"
#include "FabricaNaves.h"

// Sets default values
AFacadeNaves::AFacadeNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacadeNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AFacadeNaves::SPAWN_NAVES_ENEMIGAS()
{
    // Define la ubicación inicial para spawnear las naves enemigas

    FVector ubicacionInicialNaves1 = FVector(700.0f, -450.0f, 200.0f);
    FRotator rotacionNave1 = FRotator(0.0f, 180.0f, 0.0f);

    FVector ubicacionInicialNaves2 = FVector(600.0f, -300.0f, 200.0f);
    FRotator rotacionNave2 = FRotator(0.0f, 180.0f, 0.0f);

    FVector ubicacionInicialNaves3 = FVector(300.0f, -550.0f, 200.0f);
    FRotator rotacionNave3 = FRotator(0.0f, 180.0f, 0.0f);

    FVector ubicacionInicialNaves4 = FVector(100.0f, -450.0f, 200.0f);
    FRotator rotacionNave4 = FRotator(0.0f, 180.0f, 0.0f);
  

    //***********************************************************************************************************************************************************

         // Obtiene el mundo del juego
    UWorld* const World = GetWorld();
    if (World != nullptr)
    {

        for (int i = 0; i < 4; i++) {
            FVector ubicacionActual1 = FVector(ubicacionInicialNaves1.X, ubicacionInicialNaves1.Y + 300.0f * (float)i, ubicacionInicialNaves1.Z);
            ANaveEnemiga* NaveEnemigaCaza = AFabricaNaves::FabricarNaves("NaveEnemigaCaza", World, ubicacionActual1, rotacionNave1);
            TANavesEnemigas.Add(NaveEnemigaCaza);
        }
            FVector ubicacionActual2 = FVector(ubicacionInicialNaves2.X - 300.0f, ubicacionInicialNaves2.Y, ubicacionInicialNaves2.Z);
        for (int j = 0; j < 3; j++) {
            ubicacionActual2.Y = ubicacionInicialNaves2.Y + 300.0f * (float)j;
            ANaveEnemiga* NaveEnemigaTransporte = AFabricaNaves::FabricarNaves("NaveEnemigaTransporte", World, ubicacionActual2, rotacionNave2);
            TANavesEnemigas.Add(NaveEnemigaTransporte);
        }
        FVector ubicacionActual3 = FVector(ubicacionInicialNaves3.X - 300.0f, ubicacionInicialNaves3.Y, ubicacionInicialNaves3.Z);
        for (int j = 0; j < 5; j++) {
            ubicacionActual3.Y = ubicacionInicialNaves3.Y + 300.0f * (float)j;
            ANaveEnemiga* NaveEnemigaEspia = AFabricaNaves::FabricarNaves("NaveEnemigaEspia", World, ubicacionActual3, rotacionNave3);
            TANavesEnemigas.Add(NaveEnemigaEspia);
        }
        FVector ubicacionActual4 = FVector(ubicacionInicialNaves4.X - 300.0f, ubicacionInicialNaves4.Y, ubicacionInicialNaves4.Z);
        for (int j = 0; j < 4; j++) {
            ubicacionActual4.Y = ubicacionInicialNaves4.Y + 300.0f * (float)j;
            ANaveEnemiga* NaveEnemigaNodriza = AFabricaNaves::FabricarNaves("NaveEnemigaNodriza", World, ubicacionActual4, rotacionNave4);
            TANavesEnemigas.Add(NaveEnemigaNodriza);
        }
    }
}

void AFacadeNaves::DestruirNavesEnemigas(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
    {
		// Destruye la nave enemiga
		ANaveEnemiga* NaveEnemiga = Cast<ANaveEnemiga>(OtherActor);
		if (NaveEnemiga != nullptr)
		{
			NaveEnemiga->Destroy();
		}
	}
}
