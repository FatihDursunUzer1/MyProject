// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"
#include "AFlameSphere.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraOfCharacter = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera of Character"));
	CameraOfCharacter->SetupAttachment(GetCapsuleComponent());
	//CameraOfCharacter->SetRelativeLocation(FVector(0.0f, 0.0f,50.0f+BaseEyeHeight));
	//Allow the pawn to control camera rotation.
	CameraOfCharacter->bUsePawnControlRotation = true;
	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	CharacterMesh->SetupAttachment(CameraOfCharacter);
	/* Only the owning player sees this mesh.*/ /*Eklenen meshi sadece oyuncu görür*/
	CharacterMesh->SetOnlyOwnerSee(true);
	CharacterMesh->bCastDynamicShadow = false;
	CharacterMesh->CastShadow = false;
	/*The owning player doesn't see the regular (third-person) body mesh.*/ /*Oyuncu third person vücut aðýný göremez*/
	GetMesh()->SetOwnerNoSee(true);

}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	/*Character can move forward and back. if Player want move character to forward Player can press 'W'
	else if Player want move character to back Player can press 'S'*/
	PlayerInputComponent->BindAxis("MoveForward", this, &AGameCharacter::MoveForward);
	/*Character can move left and move right. if Player want move character to left Player can press 'A' on keyboard
	else if Player want move character to right Player can press 'D' on keyboard */
	PlayerInputComponent->BindAxis("MoveRight", this, &AGameCharacter::MoveRight);
	/*If Player press 'Mouse X' button character turns with around herself*/
	PlayerInputComponent->BindAxis("Turn", this, &ACharacter::AddControllerYawInput);
	/*If Player press 'Mouse Y' button character looks up*/
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacter::AddControllerPitchInput);
	/*If Player Press 'Space Bar' on keyboard  character  jumps*/
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AGameCharacter::Jump);
	// If Player Press '1' on keyboard Particle Toggle becomes active
	//PlayerInputComponent->BindAction("ParticleToggle", IE_Pressed, this, &AGameCharacter::ParticleToggle);

}

void AGameCharacter::MoveForward(float Value)
{
	FVector Director = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Director, Value);
}

void AGameCharacter::MoveRight(float Value)
{
	FVector Director = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Director, Value);
}

/*void AGameCharacter::ParticleToggle()
{
	if (OurParticleSystem && OurParticleSystem->Template)
	{
		OurParticleSystem->ToggleActive();
	}
}*/


