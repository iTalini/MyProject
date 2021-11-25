// Fill out your copyright notice in the Description page of Project Settings.


#include "DisintegrationSphere.h"
#include "MyProjectGameMode.h"

// Sets default values
ADisintegrationSphere::ADisintegrationSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>("Root Sphere");
	RootComponent = SphereMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshToUse(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (MeshToUse.Succeeded())
		SphereMesh->SetStaticMesh(MeshToUse.Object);

	SphereMesh->SetNotifyRigidBodyCollision(true);
	SphereMesh->SetSimulatePhysics(false);
	SphereMesh->SetEnableGravity(true);

	StatMaterial = CreateDefaultSubobject<UMaterial>(TEXT("StaticMaterial"));
	DynMat = CreateDefaultSubobject<UMaterialInstanceDynamic>(TEXT("DynamicMaterial"));
	static ConstructorHelpers::FObjectFinder<UMaterial>MatToUse(TEXT("/Game/MyMaterial/M_ForSphere_Disint.M_ForSphere_Disint"));
	if (MatToUse.Succeeded())
	{
		StatMaterial = MatToUse.Object;
	}

	isDestoyed = false;

	SphereMesh->OnComponentHit.AddDynamic(this, &ADisintegrationSphere::OnComponentHit);

	time_for_disin = 1.f;
	for_changeMat = 0.0f;
}

// Called when the game starts or when spawned
void ADisintegrationSphere::BeginPlay()
{
	Super::BeginPlay();
	AMyProjectGameMode* const MyMode = GetWorld()->GetAuthGameMode<AMyProjectGameMode>();
	float current_r = MyMode->current_r;

	//resizes the sphere only visually. Didn't find a function to resize the collision grid. 
	//creating a collision around the object and then resizing it did not work either
	//Do you know how I can make it?
	//BodySphere->SetWorldScale3D(FVector(current_r, current_r, current_r));
	SphereMesh->SetRelativeScale3D(FVector(current_r, current_r, current_r));

	if (StatMaterial)
		DynMat = UMaterialInstanceDynamic::Create(StatMaterial, nullptr);

	FTimerDelegate TimerDel;
	FTimerHandle TimerHandle;

	TimerDel.BindUFunction(this, FName("ChangeMaterial"));
	GetWorldTimerManager().SetTimer(TimerHandle, TimerDel, time_for_disin, false);

	SphereMesh->SetMaterial(0, DynMat);
	
}

void ADisintegrationSphere::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!isDestoyed)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, __FUNCTION__);
		isDestoyed = true;

		SphereMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		//set the countdown to the life of the sphere, after hitting 
		//SetLifeSpan(time_for_disin);

		//MyMode->OnSphereDisintegration(this);
	}
}

void ADisintegrationSphere::ChangeMaterial()
{
	DynMat->SetScalarParameterValue("Amount(S)", for_changeMat);
	for_changeMat += 0.01f;
	AMyProjectGameMode* const MyMode = GetWorld()->GetAuthGameMode<AMyProjectGameMode>();
	if (for_changeMat >= 0.99)
	{
		MyMode->OnSphereDisintegration(this);
		Destroy();
	}
}

// Called every frame
void ADisintegrationSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isDestoyed)
		ChangeMaterial();
}

