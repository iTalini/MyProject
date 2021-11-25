// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProjectGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "MyProjectHUD.h"
#include "MyProjectCharacter.h"
#include "Math/UnrealMathUtility.h"
#include "Math/Color.h"
#include "UObject/ConstructorHelpers.h"

AMyProjectGameMode::AMyProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyProjectHUD::StaticClass();

	score = 20;

	chars_score = 0;

	start_r = 2;

	percent_next_r_less = 10;

	min_r = 0.1;

	current_r = start_r;

	min_loc_z_forSphere = 300;

	wasDestroySphereInArray = 0;

	wasDestroy = 0;


	waveNum = 1;

	necessarily_destroy_r = 1500;

	max_spawn_r = 2000;

	min_sphere_dist = 80;

	number_of_spheres = 15;

	numberOfSpheresToDestroy = 10;

	perc_more_NumberOfSpheres = 10;

	perc_more_RSpawnSpheres = 5;


	useHiagaraSphere = false;
}

void AMyProjectGameMode::DestrAllGameSphere()
{
	TArray <AActor*> TA_Spheres;

	UGameplayStatics::GetAllActorsOfClass(this, AGameSphere::StaticClass(), TA_Spheres);
	for (AActor* A_Sphere : TA_Spheres)
	{
		AGameSphere* ScoreSphere = Cast<AGameSphere>(A_Sphere);
		if (ScoreSphere)
		{
			ScoreSphere->Destroy();
		}
	}
}

void AMyProjectGameMode::DestrAllDisinSphere()
{
	TArray <AActor*> TA_Spheres;

	UGameplayStatics::GetAllActorsOfClass(this, ADisintegrationSphere::StaticClass(), TA_Spheres);
	for (AActor* A_Sphere : TA_Spheres)
	{
		ADisintegrationSphere* ScoreSphere = Cast<ADisintegrationSphere>(A_Sphere);
		if (ScoreSphere)
		{
			ScoreSphere->Destroy();
		}
	}
}

void AMyProjectGameMode::OnGameSphereDestroyed(AGameSphere* A_Sphere)
{
	//increasing the score counter 
	chars_score += score;
	AMyProjectHUD* InGameHUD = Cast<AMyProjectHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
		InGameHUD->UpdateScore((int)chars_score);

	//count the distance between the destroyed sphere and the center of the spawn 
	float pointdist = PointDist(A_Sphere->GetTargetLocation(), SpawnPoint);

	//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Magenta, FString::SanitizeFloat(pointdist));
	/*if the distance is less thanand equal to the one necessary to pass the level,
	we increase the counter of destroyed spheres that were in a smaller spawn radius*/
	if (pointdist <= necessarily_destroy_r * necessarily_destroy_r)
	{
		wasDestroySphereInArray++;
		
		//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Magenta, FString::FromInt(wasDestroySphereInArray));
	}

	/*if the counter of destroyed spheres that were in a smaller spawn radius is greater than or equal to the required number,
	we reset the counter and start a new wave */
	if (wasDestroySphereInArray >= numberOfSpheresToDestroy)
	{
		//increase the counter of spawn waves 
		waveNum++;
		if (InGameHUD)
			InGameHUD->UpdateWaveNum((int)waveNum);

		//reset the counter of destroyed spheres that were in a smaller radius 
		wasDestroySphereInArray = 0;

		//update the spawn point 
		SpawnPoint = Player->GetTargetLocation();


		//increase the radius of the spheres 
		current_r = (current_r / 100) * (100 - percent_next_r_less);
		//increase the number of spheres during the wave
		number_of_spheres = (number_of_spheres / 100) * (100 + perc_more_NumberOfSpheres);
		//changing the maximum spawn radius 
		max_spawn_r = (max_spawn_r / 100) * (100 + perc_more_RSpawnSpheres);

		while ((4 / 3) * pow(necessarily_destroy_r, 3) * PI < numberOfSpheresToDestroy * ((4 / 3) * PI * pow(min_sphere_dist / 1.5 + current_r, 3)))
			Change_necessarily_destroy_r();
		
		SpawnNewSphere();
	}

}

void AMyProjectGameMode::OnSphereDisintegration(ADisintegrationSphere* A_Sphere)
{
	chars_score += score;
	AMyProjectHUD* InGameHUD = Cast<AMyProjectHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
		InGameHUD->UpdateScore((int)chars_score);

	float pointdist = PointDist(A_Sphere->GetTargetLocation(), SpawnPoint);


	if (pointdist - current_r * current_r <= necessarily_destroy_r * necessarily_destroy_r)
	{
		wasDestroySphereInArray++;

		//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Magenta, FString::FromInt(wasDestroySphereInArray));
	}


	if (wasDestroySphereInArray >= numberOfSpheresToDestroy)
	{
		waveNum++;
		if (InGameHUD)
			InGameHUD->UpdateWaveNum((int)waveNum);

		wasDestroySphereInArray = 0;

		SpawnPoint = Player->GetTargetLocation();


		current_r = (current_r / 100) * (100 - percent_next_r_less);
		number_of_spheres = (number_of_spheres / 100) * (100 + perc_more_NumberOfSpheres);
		max_spawn_r = (max_spawn_r / 100) * (100 + perc_more_RSpawnSpheres);

		while ((4 / 3) * pow(necessarily_destroy_r, 3) * PI < numberOfSpheresToDestroy * ((4 / 3) * PI * pow(min_sphere_dist / 1.5 + current_r, 3)))
			Change_necessarily_destroy_r();

		SpawnNewSphere();
	}
}

void AMyProjectGameMode::SpawnNewSphere()
{
	FRotator Rot(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	FLinearColor NewSphereColor = FLinearColor::MakeRandomColor();
	if (!useHiagaraSphere)
	{
		//destroy the remaining spheres on the scene 
		DestrAllGameSphere();

		//create and arrange spheres on the stage 
		for (int i = 0; i < number_of_spheres; i++)
		{
			FVector Loc = LookNewSpawnPont(i);
			AGameSphere* SpawnActor = GetWorld()->SpawnActor<AGameSphere>(ToSpawn_AGameSphere, Loc, Rot, SpawnInfo);
			//change the color of the spheres
			SpawnActor->DynMat->SetVectorParameterValue("BaseColor", NewSphereColor);
		}
	}
	else
	{
		DestrAllDisinSphere();

		//create and arrange spheres on the stage 
		for (int i = 0; i < number_of_spheres; i++)
		{
			FVector Loc = LookNewSpawnPont(i);
			ADisintegrationSphere* SpawnActor = GetWorld()->SpawnActor<ADisintegrationSphere>(ToSpawn_ADisintegrationSphere, Loc, Rot, SpawnInfo);
			//change the color of the spheres
			SpawnActor->DynMat->SetVectorParameterValue("BaseColor", NewSphereColor);
		}
	}
}

FVector AMyProjectGameMode::LookNewSpawnPont(int i)
{
	FVector SendBack(0.f, 0.f, 0.f);
	bool continueLook = true;

	//we place the first spheres in a small radius of the spawn in order to fulfill the condition for the passage of the wave 
	if (i < numberOfSpheresToDestroy)
	{
		SendBack = RandFVector(SpawnPoint, necessarily_destroy_r, min_loc_z_forSphere);
		if (i > 0)
		{
			//we change the vector of the location of the sphere until we find a suitable one for the conditions FVector
			while (continueLook)
			{
				if (!CheckPreviousSpheres(SendBack))
					SendBack = RandFVector(SpawnPoint, necessarily_destroy_r, min_loc_z_forSphere);
				else if (PointDist(SendBack, SpawnPoint) - current_r * current_r > necessarily_destroy_r * necessarily_destroy_r)
					SendBack = RandFVector(SpawnPoint, necessarily_destroy_r, min_loc_z_forSphere);
				else
					continueLook = false;
			}
		}
		else
		{
			//since this sphere is the first one, there is no need to look for other spheres in the scene 
			//check only for location in a small radius 
			while (PointDist(SendBack, SpawnPoint) - current_r * current_r > necessarily_destroy_r * necessarily_destroy_r)
			{
				SendBack = RandFVector(SpawnPoint, necessarily_destroy_r, min_loc_z_forSphere);
			}
		}
	}
	else
	{
		SendBack = RandFVector(SpawnPoint, max_spawn_r, min_loc_z_forSphere);
		if (i > 0)
		{
			while (continueLook)
			{
				if (!CheckPreviousSpheres(SendBack))
					SendBack = RandFVector(SpawnPoint, max_spawn_r, min_loc_z_forSphere);
				else if (PointDist(SendBack, SpawnPoint) - current_r * current_r > max_spawn_r * max_spawn_r)
					SendBack = RandFVector(SpawnPoint, max_spawn_r, min_loc_z_forSphere);
				else
					continueLook = false;

			}
		}
	}

	return SendBack;
}

bool AMyProjectGameMode::CheckPreviousSpheres(FVector for_check)
{
	TArray <AActor*> TA_Spheres;

	//find all spheres on the level and check the distance from each of them,
	// if the distance from one distance is less than the required one => go back and change FVector 
	if (!useHiagaraSphere)
	{
		UGameplayStatics::GetAllActorsOfClass(this, AGameSphere::StaticClass(), TA_Spheres);
		for (AActor* A_Sphere : TA_Spheres)
		{
			AGameSphere* ScoreSphere = Cast<AGameSphere>(A_Sphere);
			if (PointDist(for_check, ScoreSphere->GetActorLocation()) - current_r * 2 <= min_sphere_dist * min_sphere_dist)
				return false;
		}
	}
	else
	{
		UGameplayStatics::GetAllActorsOfClass(this, ADisintegrationSphere::StaticClass(), TA_Spheres);
		for (AActor* A_Sphere : TA_Spheres)
		{
			ADisintegrationSphere* ScoreSphere = Cast<ADisintegrationSphere>(A_Sphere);
			if (PointDist(for_check, ScoreSphere->GetActorLocation()) - current_r * 2 <= min_sphere_dist * min_sphere_dist)
				return false;
		}
	}
	return true;
}

FVector AMyProjectGameMode::RandFVector(FVector spawnpoint, float array_r, float min_z)
{
	float x = FMath::RandRange(spawnpoint.X - array_r, spawnpoint.X + array_r);
	float y = FMath::RandRange(spawnpoint.Y - array_r, spawnpoint.Y + array_r);
	float z = FMath::RandRange(min_z, spawnpoint.Z + array_r);

	return FVector(x, y, z);
}

void AMyProjectGameMode::Change_necessarily_destroy_r()
{
	necessarily_destroy_r = necessarily_destroy_r / 100 * 110;
}

float AMyProjectGameMode::PointDist(FVector one, FVector two)
{
	float answer;
	answer = ((one.X - two.X) * (one.X - two.X)) + ((one.Y - two.Y) * (one.Y - two.Y)) +
		((one.Z - two.Z) * (one.Z - two.Z));
	return answer;
}

float AMyProjectGameMode::Get_currentR()
{
	return current_r;
}

void AMyProjectGameMode::BeginPlay()
{
	Player = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	//V sphere = (4/3) * Pi * r * r * r, we divide the volume by 2, since the sphere cannot be underground.
	//There we will not be able to destroy them for the spheres that we must destroy, we take their radius +
	//(the required distance between them divided by 2) we do not take into account the air space between them, since we take a larger radius 
	while ((4 / 3) * pow(necessarily_destroy_r, 3) * PI < numberOfSpheresToDestroy * ((4 / 3) * PI *pow(min_sphere_dist / 1.5 + current_r, 3)))
		Change_necessarily_destroy_r();
	
	//Set the first spawn center for the spheres 
	SpawnPoint = Player->GetTargetLocation();


	FRotator Rot(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	if (!useHiagaraSphere)
	{
		//create and arrange spheres on the stage 
		for (int i = 0; i < number_of_spheres; i++)
		{
			FVector Loc = LookNewSpawnPont(i);
			AGameSphere* SpawnActor = GetWorld()->SpawnActor<AGameSphere>(ToSpawn_AGameSphere, Loc, Rot, SpawnInfo);
		}
	}
	else
	{
		//create and arrange spheres on the stage 
		for (int i = 0; i < number_of_spheres; i++)
		{
			FVector Loc = LookNewSpawnPont(i);
			ADisintegrationSphere* SpawnActor = GetWorld()->SpawnActor<ADisintegrationSphere>(ToSpawn_ADisintegrationSphere, Loc, Rot, SpawnInfo);
		}
	}
}
