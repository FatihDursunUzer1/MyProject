// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "AFlameSphere.generated.h"

UCLASS()
class MYPROJECT_API AAFlameSphere : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAFlameSphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY()
		class UParticleSystemComponent* SphereParticle;
	/*UPROPERTY()
		USphereComponent* Sphere;*/
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION()
		void ParticleToggle();

	
};
