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
	spheres_in_game = number_of_spheres;

	numberOfSpheresToDestroy = 10;

	perc_more_NumberOfSpheres = 10;

	perc_more_RSpawnSpheres = 5;

	SpheresColor = FLinearColor::Black;

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
	spheres_in_game--;
	AMyProjectHUD* InGameHUD = Cast<AMyProjectHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
		InGameHUD->UpdateScore((int)chars_score);

	V_SpheresLocation.Remove(A_Sphere->GetActorLocation());
	float pointdist = PointDist(A_Sphere->GetTargetLocation(), SpawnPoint);


	if (pointdist - current_r * current_r <= necessarily_destroy_r * necessarily_destroy_r)
	{
		wasDestroySphereInArray++;

		//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Magenta, FString::FromInt(wasDestroySphereInArray));
	}


	if (wasDestroySphereInArray >= numberOfSpheresToDestroy)
	{
		V_SpheresLocation.Empty();
		waveNum++;
		if (InGameHUD)
			InGameHUD->UpdateWaveNum((int)waveNum);

		wasDestroySphereInArray = 0;

		SpawnPoint = Player->GetTargetLocation();


		current_r = (current_r / 100) * (100 - percent_next_r_less);
		number_of_spheres = (number_of_spheres / 100) * (100 + perc_more_NumberOfSpheres);
		spheres_in_game = number_of_spheres;
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

	SpheresColor = FLinearColor::MakeRandomColor();

	DestrAllDisinSphere();

	//create and arrange spheres on the stage 
	for (int i = 0; i < number_of_spheres; i++)
	{
		FVector Loc = LookNewSpawnPont(i);
		ADisintegrationSphere* SpawnActor = GetWorld()->SpawnActor<ADisintegrationSphere>(ToSpawn_ADisintegrationSphere, Loc, Rot, SpawnInfo);
		//change the color of the spheres
		SpawnActor->DynMat->SetVectorParameterValue("BaseColor", SpheresColor);

		V_SpheresLocation.Add(Loc);
		//UE_LOG(LogTemp, Warning, TEXT("Spheres0: %i"), V_Spheres.Num());
	}
	//UE_LOG(LogTemp, Warning, TEXT("Spheres1: %i"), V_Spheres.Num());
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
	//find all spheres on the level and check the distance from each of them,
	// if the distance from one distance is less than the required one => go back and change FVector 
	TArray <AActor*> TA_Spheres;

	UGameplayStatics::GetAllActorsOfClass(this, ADisintegrationSphere::StaticClass(), TA_Spheres);
	for (AActor* A_Sphere : TA_Spheres)
	{
		ADisintegrationSphere* ScoreSphere = Cast<ADisintegrationSphere>(A_Sphere);
		if (ScoreSphere)
		{
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

void AMyProjectGameMode::SaveMode(UMySaveGame* Saver)
{
	Saver->SG_chars_score = chars_score;
	Saver->SG_current_r = current_r;
	Saver->SG_max_spawn_r = max_spawn_r;
	Saver->SG_min_loc_z_forSphere = min_loc_z_forSphere;
	Saver->SG_min_r = min_r;
	Saver->SG_min_sphere_dist = min_sphere_dist;
	Saver->SG_necessarily_destroy_r = necessarily_destroy_r;
	Saver->SG_numberOfSpheresToDestroy = numberOfSpheresToDestroy;
	Saver->SG_number_of_spheres = number_of_spheres;
	Saver->SG_percent_next_r_less = percent_next_r_less;
	Saver->SG_perc_more_NumberOfSpheres = perc_more_NumberOfSpheres;
	Saver->SG_perc_more_RSpawnSpheres = perc_more_RSpawnSpheres;
	Saver->SG_score = score;
	Saver->SG_SpawnPoint = SpawnPoint;
	Saver->SG_start_r = start_r;
	Saver->SG_V_SpheresLocation = V_SpheresLocation;
	Saver->SG_wasDestroy = wasDestroy;
	Saver->SG_wasDestroySphereInArray = wasDestroySphereInArray;
	Saver->SG_waveNum = waveNum;
	Saver->SG_spheres_in_game = spheres_in_game;
	Saver->SG_SpheresColor = SpheresColor;
}

void AMyProjectGameMode::LoadMode(UMySaveGame* Load)
{
	FActorSpawnParameters SpawnInfo;
	FRotator Rot(0.0f, 0.0f, 0.0f);

	chars_score = Load->SG_chars_score;
	current_r = Load->SG_current_r;
	max_spawn_r = Load->SG_max_spawn_r;
	min_loc_z_forSphere = Load->SG_min_loc_z_forSphere;
	min_r = Load->SG_min_r;
	min_sphere_dist = Load->SG_min_sphere_dist;
	necessarily_destroy_r = Load->SG_necessarily_destroy_r;
	numberOfSpheresToDestroy = Load->SG_numberOfSpheresToDestroy;
	number_of_spheres = Load->SG_number_of_spheres;
	percent_next_r_less = Load->SG_percent_next_r_less;
	perc_more_NumberOfSpheres = Load->SG_perc_more_NumberOfSpheres;
	perc_more_RSpawnSpheres = Load->SG_perc_more_RSpawnSpheres;
	score = Load->SG_score;
	SpawnPoint = Load->SG_SpawnPoint;
	start_r = Load->SG_start_r;
	wasDestroy = Load->SG_wasDestroy;
	wasDestroySphereInArray = Load->SG_wasDestroySphereInArray;
	waveNum = Load->SG_waveNum;
	spheres_in_game = Load->SG_spheres_in_game;
	SpheresColor = Load->SG_SpheresColor;

	AMyProjectHUD* InGameHUD = Cast<AMyProjectHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
		InGameHUD->UpdateScore((int)chars_score);
	if (InGameHUD)
		InGameHUD->UpdateWaveNum((int)waveNum);

	DestrAllDisinSphere();

	V_SpheresLocation.Empty();

	V_SpheresLocation = Load->SG_V_SpheresLocation;
	
	for (int i = 0; i < Load->SG_V_SpheresLocation.Num(); i++)
	{

		ADisintegrationSphere* SpawnActor = GetWorld()->SpawnActor<ADisintegrationSphere>(ToSpawn_ADisintegrationSphere, Load->SG_V_SpheresLocation[i], Rot, SpawnInfo);
		SpawnActor->DynMat->SetVectorParameterValue("BaseColor", SpheresColor);

	}
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

	SpheresColor = FLinearColor::MakeRandomColor();

	FRotator Rot(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

		//create and arrange spheres on the stage 
	for (int i = 0; i < number_of_spheres; i++)
	{
		FVector Loc = LookNewSpawnPont(i);
		ADisintegrationSphere* SpawnActor = GetWorld()->SpawnActor<ADisintegrationSphere>(ToSpawn_ADisintegrationSphere, Loc, Rot, SpawnInfo);
		SpawnActor->numberInVector = i;
		V_SpheresLocation.Add(Loc);
	}
}
