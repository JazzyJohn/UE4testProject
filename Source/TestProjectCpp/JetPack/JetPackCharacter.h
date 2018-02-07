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
	UPROPERTY(BlueprintReadWrite, Category = "Movement Logic")
		USceneComponent* CameraComponent;

	UPROPERTY(BlueprintReadWrite, Category = "Movement Logic")
		UBaseWeapon* BaseWeapon;

private:
	FTimerHandle MemberTimerHandle;
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
private:
	void StartFly();
};
