// Fill out your copyright notice in the Description page of Project Settings.

#include "JetPackMovementComponent.h"
#include "Public/DrawDebugHelpers.h"
#include "Components/AudioComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Kismet/GameplayStatics.h"

template<typename TEnum>
static FORCEINLINE FString GetEnumValueAsString(const FString& Name, TEnum Value)
{
	const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, *Name, true);
	if (!enumPtr)
	{
		return FString("Invalid");
	}
	return enumPtr->GetNameByValue((int64)Value).ToString();
}

UJetPackMovementComponent::UJetPackMovementComponent()
{
	CastSize = 50.0f;
	BurstVerticalFactor = 1.0f;
	IsJetPackRechargeable = true;
}

void UJetPackMovementComponent::Serialize(FArchive& Archive)
{
	Super::Serialize(Archive);
	CurrentCharge = MaxCharge;
	DefaultAirControl = AirControl;	
}

bool UJetPackMovementComponent::Burst() 
{
	if (CurrentJetPackStatus == EJetPackStatus::None && !IsFalling())
	{
		if (CurrentCharge >= BurstCharge)
		{
			CurrentCharge -= BurstCharge;

			CurrentJetPackStatus = EJetPackStatus::Burst;
			UGameplayStatics::PlaySoundAtLocation(this, BurstSound, GetActorLocation());
			FVector location = GetOwner()->GetActorLocation();
			FRotator rotator = GetOwner()->GetActorRotation();
			GetWorld()->SpawnActor(BurstObject, &location, &rotator);
			return true;
		}
	}
	return false;
}
void UJetPackMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	switch (CurrentJetPackStatus)
	{
	case EJetPackStatus::None:
		GravityScale = 1.0f;
		if (!IsFalling())
		{
			if (CurrentCharge < MaxCharge && IsJetPackRechargeable)
			{
				if (bRechargeOnTouch)
					CurrentCharge = MaxCharge;
				else
					CurrentCharge += DeltaTime;

				CurrentCharge = FMath::Clamp(CurrentCharge, 0.0f, MaxCharge);
			}

			if (IsCrouching())
			{
				Velocity = Velocity.GetClampedToMaxSize2D(MaxWalkSpeedCrouched);
			}
			else
			{
				Velocity = Velocity.GetClampedToMaxSize2D(MaxWalkSpeed);
			}
			if (AudioComponent)
			{
				AudioComponent->Stop();
			}

		}
		break;
	case EJetPackStatus::Fly:
		Flying(DeltaTime);
		if (!IsFalling())
		{
			AirControl = DefaultAirControl;
			CurrentJetPackStatus = EJetPackStatus::None;
		}
		break;
	case EJetPackStatus::WallRun:
		WallRun(DeltaTime);
		break;
	case EJetPackStatus::Burst:
		if (!IsFalling())
		{
			AirControl = 0.0f;
			CurrentJetPackStatus = EJetPackStatus::BurstFly; 
			FVector Direction = Velocity;
			if (Direction.SizeSquared() == 0.0f)
			{
				Direction = GetOwner()->GetActorRotation().Vector();
			}
			else
			{
				Direction.Normalize();
			}
			
			Direction += BurstVerticalFactor * FVector::UpVector;
			Direction.Normalize();
			Velocity = Direction * BurstSpeed;
			Launch(Velocity);	
			
		}
	case EJetPackStatus::BurstFly:
		if (!IsFalling() && PendingLaunchVelocity.Z == 0.0f)
		{
			AirControl = DefaultAirControl;
			CurrentJetPackStatus = EJetPackStatus::None;
		}
		break;
	}
#if !UE_BUILD_SHIPPING
	DrawDebugString(this->GetWorld(), GetOwner()->GetActorLocation() +FVector::UpVector*50.0f + GetOwner()->GetActorRotation().Vector(),
		*FString::Printf(TEXT("Status %s , Wall %s, Unreal Mode %s"), 
		*GetEnumValueAsString<EJetPackStatus>("EJetPackStatus",CurrentJetPackStatus),
		*GetEnumValueAsString<EWallRun>("EWallRun",WallRunType),
		*GetEnumValueAsString<EMovementMode>("EMovementMode", MovementMode)),
		NULL, FColor(0,255,0), 0.0, false);
#endif //!UE_BUILD_SHIPPING
}

void UJetPackMovementComponent::StopFly()
{
	if (CurrentJetPackStatus == EJetPackStatus::Fly)
	{
		AirControl = DefaultAirControl;
		CurrentJetPackStatus = EJetPackStatus::None;
		if (AudioComponent)
		{
			AudioComponent->Stop();
		}
	}
}
float UJetPackMovementComponent::GetMaxSpeed() const
{
	switch (CurrentJetPackStatus)
	{
	case EJetPackStatus::BurstFly:
	case EJetPackStatus::Burst:
		return MaxCustomMovementSpeed;
		break;
	}
	return Super::GetMaxSpeed();
}
void UJetPackMovementComponent::Flying(float DeltaTime)
{
	if (CurrentCharge > 0.0f)
	{
		CurrentCharge -= DeltaTime * FlyChargePerSecond;
	}
	else
	{
		StopFly();
	}
	
	Velocity.Z = FlySpeed ;
	CheckWall();

}

void UJetPackMovementComponent::WallRun(float DeltaTime)
{
	FRotator Direction = GetOwner()->GetActorRotation();
	FVector direction;
	AirControl = 0.0f;
	switch (WallRunType)
	{
		case EWallRun::Up:
			Velocity = FVector::UpVector * WallRunSpeed;
			break;
		case EWallRun::Left:
			direction = -FVector::CrossProduct(FVector::UpVector,WallNormal);
			Velocity = direction * WallRunSpeed + FVector::UpVector * WallSpeedVerticalVelocity;
			break;
		case EWallRun::Right:
			direction = FVector::CrossProduct(FVector::UpVector, WallNormal);
			Velocity = direction * WallRunSpeed + FVector::UpVector * WallSpeedVerticalVelocity;;
			break;
		case EWallRun::None:
			StopWall();
			break;
	}
	
	if (CurrentCharge > 0.0f)
	{
		CurrentCharge -= DeltaTime * WallRunChargePerSecond;
		CheckWall();
	}
	else
	{
		CurrentCharge = 0.0f;
		StopWall ();
	}
	

}

void UJetPackMovementComponent::StopWall()
{
	
	AirControl = DefaultAirControl;
	CurrentJetPackStatus = EJetPackStatus::None;
	if (AudioComponent)
	{
		AudioComponent->Stop();
	}
}

void UJetPackMovementComponent::CheckWall()
{
	//Forward
	FVector StartTrace = GetOwner()->GetActorLocation();
	FRotator Direction = GetOwner()->GetActorRotation();

	FRotator DirectionOldNormal;
	if (WallRunType != EWallRun::None)
	{
		DirectionOldNormal = (-WallNormal).Rotation();
	}
	
	FRotator DirectionLeft = Direction + FRotator(0.0f, -90.0f, 0.0f);
	FRotator DirectionRight = Direction + FRotator(0.0f, 90.0f, 0.0f);

	FHitResult Hit(ForceInit);
	//We want to up run take over over old wall, but we don't want to player to be able to do turnaround so secondly we check old normal
	if (TraceWall(StartTrace, Direction, Hit))
	{
		WallNormal = Hit.ImpactNormal;
		WallRunType = EWallRun::Up;
		
	}
	else if (WallRunType != EWallRun::None && TraceWall(StartTrace, DirectionOldNormal, Hit))
	{
		WallNormal = Hit.ImpactNormal;
	}
	else if (TraceWall(StartTrace, DirectionLeft, Hit))
	{
		WallNormal = Hit.ImpactNormal;
		WallRunType = EWallRun::Left;
	}
	else if (TraceWall(StartTrace, DirectionRight, Hit))
	{
		WallNormal = Hit.ImpactNormal;
		WallRunType = EWallRun::Right;
	}	
	else
	{
		WallRunType = EWallRun::None;
	}

	if (WallRunType != EWallRun::None)
	{
		CurrentJetPackStatus = EJetPackStatus::WallRun;
	}
	
	
}

bool UJetPackMovementComponent::TraceWall(FVector location, FRotator Direction, FHitResult& Hit)
{
	const FVector StartTrace = location;
	const FVector EndTrace = location + Direction.Vector() * CastSize;

	FCollisionQueryParams TraceParams(FName("WallCast"), true, this->GetOwner());


	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECollisionChannel::ECC_WorldDynamic, TraceParams);

	return Hit.GetActor() != nullptr && Hit.Component.IsValid() && Hit.Component.Get()->CanCharacterStepUp(GetPawnOwner());
}


float UJetPackMovementComponent::GetJetPackCharge()
{
	return CurrentCharge;
}

void UJetPackMovementComponent::StartFly()
{
	GravityScale = 0.0;
	AirControl = 1.0f;
	CurrentJetPackStatus = EJetPackStatus::Fly;
	if (AudioComponent)
	{
		AudioComponent->Play();
	}
}

void UJetPackMovementComponent::TryFly()
{
	
	switch (CurrentJetPackStatus)
	{
		case EJetPackStatus::None:
			if (CurrentCharge > 0.0)
			{
				StartFly();
			}
		break;
		case EJetPackStatus::WallRun:
			if (CurrentCharge <= 0.0f)
			{
				CurrentJetPackStatus = EJetPackStatus::None;
				return;
			}

			float JumpSpeed = WallJumpSpeed;
			if (CurrentCharge < MaxWallJumpBurst)
			{
				JumpSpeed *= CurrentCharge / MaxWallJumpBurst;
				CurrentJetPackStatus = EJetPackStatus::None;
				CurrentCharge = 0.0f;
			}
			else
			{
				CurrentCharge -= MaxWallJumpBurst;
				StartFly();
			}

			Velocity = (WallNormal + FVector::UpVector) * JumpSpeed;
			break;
	}
	
}
