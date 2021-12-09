// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DisintegrationSphere.h"
#include "MySaveGame.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UMySaveGame();

	UPROPERTY(VisibleAnywhere, Category = Basic)
		FVector PlayerLocation;

	UPROPERTY(EditAnywhere, Category = Spheres)
		TArray<FVector> SG_V_SpheresLocation;
	UPROPERTY(EditAnywhere, Category = Spheres)
		FLinearColor SG_SpheresColor;



	//points for destroying a sphere 
	UPROPERTY(EditAnywhere, Category = Score)
		float SG_score;

	//points received by the character 
	UPROPERTY(EditAnywhere, Category = Score)
		float SG_chars_score;

	//initial sphere radius 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float SG_start_r;

	//the percentage by which the spheres are reduced in size when destroyed 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float SG_percent_next_r_less;

	//minimum sphere size 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float SG_min_r;

	//current sphere size 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float SG_current_r;

	//the smallest location of the sphere in Z 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float SG_min_loc_z_forSphere;

	//the number of destroyed spheres in the required radius 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float SG_wasDestroySphereInArray;

	//the number of destroyed spheres in the current wave
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float SG_wasDestroy;



	//current wave number 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_waveNum;

	//radius from the spawn point where we need to destroy the spheres 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_necessarily_destroy_r;

	//maximum spawn radius during a wave 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_max_spawn_r;

	//spawn center point 
	UPROPERTY(EditAnywhere, Category = Spawn)
		FVector SG_SpawnPoint;

	//minimum distance between spheres 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_min_sphere_dist;

	//number of spheres on the current wave 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_number_of_spheres;

	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_spheres_in_game;

	//the number of spheres that need to be destroyed during the current wave in the required radius 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_numberOfSpheresToDestroy;

	//by what percentage the number of spheres increases after each wave 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_perc_more_NumberOfSpheres;

	//by what percentage the spawn radius increases 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float SG_perc_more_RSpawnSpheres;
	
};
