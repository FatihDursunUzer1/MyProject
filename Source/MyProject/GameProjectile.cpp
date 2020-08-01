// Fill out your copyright notice in the Description page of Project Settings.


#include "GameProjectile.h"

// Sets default values
AGameProjectile::AGameProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionSphere->InitSphereRadius(15.0f);
	RootComponent = CollisionSphere;
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionSphere);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = ProjectileMovementComponent->InitialSpeed;
	/*Rotation follows velocity*/
	ProjectileMovementComponent->bRotationFollowsVelocity = true; 
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.5f;

}

// Called when the game starts or when spawned
void AGameProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

