// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameSphere.h"
#include "DisintegrationSphere.h"
#include "MyProjectCharacter.h"
#include "GameFramework/GameModeBase.h"
#include "MyProjectGameMode.generated.h"

UCLASS(minimalapi)
class AMyProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyProjectGameMode();

	UFUNCTION(BlueprintCallable)
		void DestrAllGameSphere();

	UFUNCTION(BlueprintCallable)
		void DestrAllDisinSphere();

	/*the function that is called from GameSphere when the sphere was hit.
	We calculate the number of points scored by the player, see how many spheres were destroyed and
	at what distance he is at the current spawn point. If necessary, we start a new wave */
	UFUNCTION(BlueprintCallable)
		void OnGameSphereDestroyed(AGameSphere* A_Sphere);

	UFUNCTION(BlueprintCallable)
		void OnSphereDisintegration(ADisintegrationSphere* A_Sphere);

	UFUNCTION(BlueprintCallable)
		void SpawnNewSphere();

	//Function for selecting a new spawn point 
	UFUNCTION(BlueprintCallable)
		FVector LookNewSpawnPont(int i);

	//Creating a random vector for spawning a sphere 
	UFUNCTION(BlueprintCallable)
		FVector RandFVector(FVector spawnpoint, float array_r, float min_z);

	//check the distance between the new sphere and everyone before it 
	UFUNCTION(BlueprintCallable)
		bool CheckPreviousSpheres(FVector for_check);

	//if all the spheres needed to destroy the sphere do not fit in the radius of the sphere => increase the radius 
	UFUNCTION(BlueprintCallable)
		void Change_necessarily_destroy_r();

	//distance between two points 
	UFUNCTION(BlueprintCallable)
		float PointDist(FVector one, FVector two);

	//What kinde of sphere we are useing for?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = GameSphere)
		bool useHiagaraSphere;




	//points for destroying a sphere 
	UPROPERTY(EditAnywhere, Category = Score)
		float score;

	//points received by the character 
	UPROPERTY(EditAnywhere, Category = Score)
		float chars_score;

	//initial sphere radius 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float start_r;

	//the percentage by which the spheres are reduced in size when destroyed 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float percent_next_r_less;

	//minimum sphere size 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float min_r;

	//current sphere size 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float current_r;

	//the smallest location of the sphere in Z 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float min_loc_z_forSphere;

	//the number of destroyed spheres in the required radius 
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float wasDestroySphereInArray;

	//the number of destroyed spheres in the current wave
	UPROPERTY(EditAnywhere, Category = SphereParam)
		float wasDestroy;



	//current wave number 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float waveNum;

	//radius from the spawn point where we need to destroy the spheres 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float necessarily_destroy_r;

	//maximum spawn radius during a wave 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float max_spawn_r;

	//spawn center point 
	UPROPERTY(EditAnywhere, Category = Spawn)
		FVector SpawnPoint;

	//minimum distance between spheres 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float min_sphere_dist;

	//number of spheres on the current wave 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float number_of_spheres;

	//the number of spheres that need to be destroyed during the current wave in the required radius 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float numberOfSpheresToDestroy;

	//by what percentage the number of spheres increases after each wave 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float perc_more_NumberOfSpheres;

	//by what percentage the spawn radius increases 
	UPROPERTY(EditAnywhere, Category = Spawn)
		float perc_more_RSpawnSpheres;

	UPROPERTY(EditDefaultsOnly, Category = Spawning)
		TSubclassOf<AGameSphere> ToSpawn_AGameSphere;

	UPROPERTY(EditDefaultsOnly, Category = Spawning)
		TSubclassOf<ADisintegrationSphere> ToSpawn_ADisintegrationSphere;


	//player
	UPROPERTY()
		AMyProjectCharacter* Player;

	UFUNCTION(BlueprintCallable)
		float Get_currentR();

protected:
	virtual void BeginPlay() override;
	
};



