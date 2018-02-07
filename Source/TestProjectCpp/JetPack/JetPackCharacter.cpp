// Fill out your copyright notice in the Description page of Project Settings.

#include "JetPackCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JetPackMovementComponent.h"
#include "Public/TimerManager.h"


// Sets default values
AJetPackCharacter::AJetPackCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UJetPackMovementComponent>(CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJetPackCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJetPackCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AJetPackCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AJetPackCharacter::StartCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AJetPackCharacter::StopCrouch);
	
}


void AJetPackCharacter::StopJetPack()
{
	if (UJetPackMovementComponent* MovementComponent = Cast<UJetPackMovementComponent>(GetCharacterMovement()))
	{
		MovementComponent->StopFly();
	}
}

bool AJetPackCharacter::StartBurst()
{
	if (UJetPackMovementComponent* MovementComponent = Cast<UJetPackMovementComponent>(GetCharacterMovement()))
	{

		return MovementComponent->Burst();
	}
	return false;
}

void AJetPackCharacter::StartFly()
{
	if (UJetPackMovementComponent* MovementComponent = Cast<UJetPackMovementComponent>(GetCharacterMovement()))
	{
		MovementComponent->TryFly();
	}
}

float AJetPackCharacter::GetJetPackCharge()
{
	if (UJetPackMovementComponent* MovementComponent = Cast<UJetPackMovementComponent>(GetCharacterMovement()))
	{
		return MovementComponent->GetJetPackCharge();
	}
	return 0.0f;
}

bool AJetPackCharacter::IsCrouch()
{
	if (UJetPackMovementComponent* MovementComponent = Cast<UJetPackMovementComponent>(GetCharacterMovement()))
	{
		return MovementComponent->IsCrouching();
	}
	return false;
}

void AJetPackCharacter::OnFire()
{
	if (BaseWeapon)
	{
		BaseWeapon->StartShot();
	}
	else
	{
		Super::OnFire();
	}
}

void AJetPackCharacter::StartCrouch()
{
	Crouch();
}

void AJetPackCharacter::StopCrouch()
{
	UnCrouch();
}

void AJetPackCharacter::Jump()
{
	if (IsCrouch())
	{
		if (StartBurst())
		{
			UnCrouch();
			Super::Jump();
			
		}
	}
	else
	{
		if (GetCharacterMovement()->IsFalling())
		{
			StartFly();
		}
		else
		{
			Super::Jump();
		}

	}
}

void AJetPackCharacter::StopJumping()
{
	Super::StopJumping();
	StopJetPack();

}
