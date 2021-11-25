// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSphere.h"
#include "MyProjectGameMode.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
AGameSphere::AGameSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Body = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructableSphere"));
	check(Body);
	SetRootComponent(Body);
	Body->SetNotifyRigidBodyCollision(true);
	Body->SetSimulatePhysics(false);
	Body->SetEnableGravity(true);

	StatMaterial = CreateDefaultSubobject<UMaterial>(TEXT("StaticMaterial"));
	DynMat = CreateDefaultSubobject<UMaterialInstanceDynamic>(TEXT("DynamicMaterial"));
	static ConstructorHelpers::FObjectFinder<UMaterial>MatToUse(TEXT("/Game/MyMaterial/ForSphere.ForSphere"));
	if (MatToUse.Succeeded())
	{
		StatMaterial = MatToUse.Object;
	}

	isDestoyed = false;
}

// Called when the game starts or when spawned
void AGameSphere::BeginPlay()
{
	Super::BeginPlay();

	AMyProjectGameMode* const MyMode = GetWorld()->GetAuthGameMode<AMyProjectGameMode>();
	float current_r = MyMode->current_r;

	//resizes the sphere only visually. Didn't find a function to resize the collision grid. 
	//creating a collision around the object and then resizing it did not work either
	//Do you know how I can make it?
	Body->SetWorldScale3D(FVector(current_r, current_r, current_r));

	if (StatMaterial)
		DynMat = UMaterialInstanceDynamic::Create(StatMaterial, nullptr);

	Body->SetMaterial(0, DynMat);

	Body->OnComponentHit.AddDynamic(this, &AGameSphere::OnComponentHit);
	
}

void AGameSphere::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	if (!isDestoyed)
	{
		Body->ApplyDamage(1.f, Hit.Location, NormalImpulse, 1);
		//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, __FUNCTION__);
		isDestoyed = true;

		Body->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		//set the countdown to the life of the sphere, after hitting 
		SetLifeSpan(1.f);

		AMyProjectGameMode* const MyMode = GetWorld()->GetAuthGameMode<AMyProjectGameMode>();
		MyMode->OnGameSphereDestroyed(this);
	}
}

// Called every frame
void AGameSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

