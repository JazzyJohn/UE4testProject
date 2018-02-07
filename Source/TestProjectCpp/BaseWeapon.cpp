// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "Classes/Components/PrimitiveComponent.h"

// Sets default values for this component's properties
UBaseWeapon::UBaseWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	WeaponRange = 200.0f;
	DamageAmount = 60.0f;
}


// Called when the game starts
void UBaseWeapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Controller = GetWorld()->GetFirstLocalPlayerFromController()->GetPlayerController(GetWorld());
	check(Controller);
}


// Called every frame
void UBaseWeapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBaseWeapon::StartShot()
{
	FVector ViewPosition;
	FRotator CastDiretcion;

	Controller->GetPlayerViewPoint(ViewPosition, CastDiretcion);

	GenerateRotation(CastDiretcion);
	const FVector CastDirection = CastDiretcion.Vector();
	const FVector StartTrace = ViewPosition;
	const FVector EndTrace = StartTrace + CastDirection*WeaponRange;

	FCollisionQueryParams TraceParams(FName("UBaseWeapon"), true, this->GetOwner());

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECollisionChannel::ECC_WorldDynamic, TraceParams);

	ApplyLogic(Hit);
}

void UBaseWeapon::GenerateRotation(FRotator& adjustRotation) const
{
	const float Yaw = FMath::RandRange(-SpreadAngle, SpreadAngle);
	const float Pitch = FMath::RandRange(-SpreadAngle, SpreadAngle);
	adjustRotation = adjustRotation + FRotator(Pitch, Yaw, 0.0f);
}

void UBaseWeapon::ApplyLogic(FHitResult& inHit)
{
	if (AActor* target = inHit.GetActor())
	{
		// Create a damage event  
		TSubclassOf<UDamageType> const ValidDamageTypeClass = TSubclassOf<UDamageType>(UDamageType::StaticClass());
		FDamageEvent DamageEvent(ValidDamageTypeClass);

		target->TakeDamage(DamageAmount, DamageEvent, Controller, this->GetOwner());
		
		if (HitObject)
		{
			FRotator NormalRotator = inHit.Normal.Rotation();
			AActor* result = GetWorld()->SpawnActor(HitObject, &inHit.ImpactPoint, &NormalRotator);
		}

		if (target->IsRootComponentMovable())
		{
			if (UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(target->GetRootComponent()))
			{
				mesh->AddImpulse(inHit.ImpactNormal *(-ForceOfImpact), NAME_None, true);
			}
		}
	}
}

