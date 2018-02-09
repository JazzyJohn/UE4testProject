// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JetPackMovementComponent.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EJetPackStatus : uint8
{
	None,
	Burst,
	BurstFly,
	Fly,
	WallRun
};
UENUM(BlueprintType)
enum class EWallRun : uint8
{
	None,
	Up,
	Right,
	Left,
};

UCLASS()
class TESTPROJECTCPP_API UJetPackMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float MaxCharge;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float BurstCharge;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float BurstSpeed;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float BurstVerticalFactor;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float FlyChargePerSecond;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float FlySpeed;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float WallJumpSpeed;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float MaxWallJumpBurst;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float WallRunChargePerSecond;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float WallRunSpeed;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float WallSpeedVerticalVelocity;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		float CastSize;
	UPROPERTY(EditAnywhere, Category = "Jet Pack")
		bool bRechargeOnTouch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jet Pack")
		UAudioComponent* AudioComponent;
	/** Sound to play each time we Burst */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* BurstSound;
	/** Particles to sapwn each time we Burst */
	UPROPERTY(EditAnywhere, Category = "Weapon Logic")
		TSubclassOf<AActor> BurstObject;
private:
	float CurrentCharge;
	float DefaultAirControl;
	EJetPackStatus CurrentJetPackStatus;
	EWallRun WallRunType;
	FVector WallNormal;
	bool IsJetPackRechargeable;

public:
	UJetPackMovementComponent();

    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	virtual void Serialize(FArchive& Archive) override;
	virtual float GetMaxSpeed() const override;

	bool Burst();
	float GetJetPackCharge();
	void TryFly();
	void Flying(float DeltaTime);
	void StopFly();
	void StartFly();
	void CheckWall();
	bool TraceWall(FVector location, FRotator Direction, FHitResult& Hit);
	void WallRun(float DeltaTime);
	void StopWall();
	/** Set state of recharge of jetPAck over time, when set to flase, jet pack recharging only by picking fuel cell**/
	UFUNCTION(BlueprintCallable, Category = "Jet Pack")
		void SetRechargeOfJetPack(bool state) { IsJetPackRechargeable = state; }

	bool GetRechargeOfJetPack() { return IsJetPackRechargeable; }
	/** Set JetPack Chrage at Max**/
	UFUNCTION(BlueprintCallable, Category = "Jet Pack")
		void RechargeJetPack() { CurrentCharge = MaxCharge;  }


};
