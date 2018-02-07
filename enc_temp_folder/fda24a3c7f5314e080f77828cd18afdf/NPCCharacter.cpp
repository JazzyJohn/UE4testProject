// Fill out your copyright notice in the Description page of Project Settings.

#include "NPCCharacter.h"
#include "Public/TimerManager.h"

// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxHitCount = 4;
	CurrentHitCount = MaxHitCount;
	FallenTimeout = 1.0f;
}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPCCharacter::FireAtActor(AActor* target)
{
	if (MuzzleLocation)
	{
		FRotator SpawnRotation;
	
		if (ACharacter* Character = Cast<ACharacter>(target))
		{
			const FVector ToTorsoDirection = Character->GetActorLocation() + Character->GetDefaultHalfHeight() * FVector::UpVector - MuzzleLocation->GetComponentLocation();
			SpawnRotation = ToTorsoDirection.ToOrientationRotator();
		}
		else
		{
			SpawnRotation = (target->GetActorLocation() - MuzzleLocation->GetComponentLocation()).ToOrientationRotator();
		}		
		const FVector SpawnLocation = MuzzleLocation->GetComponentLocation();
		ATestProjectCppProjectile* Projectlite = GetWorld()->SpawnActor<ATestProjectCppProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		if (Projectlite)
		{
			Projectlite->SetShooter(Controller);
		}
	}
}


void ANPCCharacter::Sucide() 
{

}

void ANPCCharacter::Death()
{
	GetWorld()->SpawnActor<AActor>(DeathPickUp, GetActorLocation(), GetActorRotation());
	Destroy();
}

void ANPCCharacter::FallInGround()
{
	bIsFallen = true;
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ANPCCharacter::Death, FallenTimeout);
}

bool ANPCCharacter::IsFallen()
{
	return bIsFallen;
}

float ANPCCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{	
	if (CurrentHitCount != 0)
	{
		CurrentHitCount--;
		if (CurrentHitCount == 0)
		{
			FallInGround();
		}
	}
	return Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
}

