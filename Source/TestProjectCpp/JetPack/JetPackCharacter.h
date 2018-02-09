// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestProjectCppCharacter.h"
#include "BaseWeapon.h"

#include "JetPackCharacter.generated.h"

UCLASS()
class TESTPROJECTCPP_API AJetPackCharacter : public ATestProjectCppCharacter
{
	GENERATED_BODY()

public:
	AJetPackCharacter(const FObjectInitializer& ObjectInitializer);

public:
	UPROPERTY(BlueprintReadWrite, Category = "Fight Logic")
		int MaxHealth;

	UPROPERTY(BlueprintReadWrite, Category = "Movement Logic")
		USceneComponent* CameraComponent;

	UPROPERTY(BlueprintReadWrite, Category = "Movement Logic")
		UBaseWeapon* BaseWeapon;

private:
	FTimerHandle MemberTimerHandle;
	int Health;
	FVector LastTeleportPosition;
	FRotator LastTeleportRotation;
public:
	// Sets default values for this character's properties
	AJetPackCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float GetJetPackCharge();
	bool GetJetPackRechrageStatus();
	int GetHealth(){return Health;}
protected:
	virtual void OnFire() override;
	virtual void Jump() override;
	virtual void StopJumping() override;
	void StartCrouch();
	void StopCrouch();
	void StopJetPack();
	bool StartBurst();
	bool IsCrouch();


protected:
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	UFUNCTION()
		/** triggers when Character is teleported by Portal */
		virtual void OnTeleport() override;
private:
	void StartFly();
};
