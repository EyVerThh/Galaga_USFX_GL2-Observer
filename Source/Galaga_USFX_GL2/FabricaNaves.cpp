// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaNaves.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"	
#include "NaveEnemigaTransporte.h"
 //Sets default values
AFabricaNaves::AFabricaNaves()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ANaveEnemiga* AFabricaNaves::FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation) //Funcion para fabricar naves
{
	if (TipoNave == "NaveEnemigaCaza")//Si el tipo de nave es NaveCaza
	{
		ANaveEnemigaCaza* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);	//Se crea una nave Caza	
		return NuevaNaveEnemiga;//Se retorna la nave creada
	}
	if (TipoNave == "NaveEnemigaEspia")//Si el tipo de nave es NaveCaza
	{
		ANaveEnemigaEspia* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaEspia>(SpawnLocation, SpawnRotation);//Se crea una nave Espia
		return NuevaNaveEnemiga;//Se retorna la nave creada
	}
	if (TipoNave == "NaveEnemigaNodriza")//Si el tipo de nave es NaveNozdriza
	{
		ANaveEnemigaNodriza* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaNodriza>(SpawnLocation, SpawnRotation);//Se crea una nave Nodriza
		return NuevaNaveEnemiga;//Se retorna la nave creada
	}
	if (TipoNave == "NaveEnemigaTransporte")//Si el tipo de nave es NaveTransporte
	{
		ANaveEnemigaTransporte* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);//Se crea una nave Transporte
		return NuevaNaveEnemiga;//Se retorna la nave creada
	}
	
	return nullptr;//Si no se puede crear la nave, se retorna un puntero nulo
}

//ANaveE* AFabricaNaves::FabricarNavesE(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
//{
//	if (!World)
//	{
//		return nullptr;//Si no hay mundo, no se puede crear la nave
//	}
//	FVector SpawnLocationAdjusted = SpawnLocation;//Se ajusta la posicion de la nave
//	if (TipoNave == "NaveE")//Si el tipo de nave es NaveE
//	{
//		ANaveE* NuevaNave = World->SpawnActor<ANaveE>(SpawnLocationAdjusted, SpawnRotation);//Se crea una nave kamikaze
//		return NuevaNave;//Se retorna la nave creada
//	}
//	return nullptr;
//}

// Called when the game starts or when spawned
void AFabricaNaves::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFabricaNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
