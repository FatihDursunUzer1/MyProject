// Fill out your copyright notice in the Description page of Project Settings.


#include "AFlameSphere.h"

// Sets default values
AAFlameSphere::AAFlameSphere()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	USphereComponent* Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Default sphere"));
	RootComponent = Sphere;
	Sphere->InitSphereRadius(10.0f);
	UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	SphereVisual->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));

	if (SphereVisualAsset.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
		SphereVisual->SetWorldScale3D(FVector(0.8f));
	}
	SphereParticle = CreateDefaultSubobject<UParticleSystemComponent> (TEXT("Particle System"));
	SphereParticle->SetupAttachment(SphereVisual);
	SphereParticle->bAutoActivate = false;
	//SphereParticle->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/M5VFXVOL2/Particles/Fire/Fire_02.Fire_02"));
	if (ParticleAsset.Succeeded())
	{
		SphereParticle->SetTemplate(ParticleAsset.Object);
	}
}

// Called when the game starts or when spawned
void AAFlameSphere::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAFlameSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAFlameSphere::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAFlameSphere::ParticleToggle()
{
	if (SphereParticle && SphereParticle->Template)
	{
		SphereParticle->ToggleActive();
	}
}
