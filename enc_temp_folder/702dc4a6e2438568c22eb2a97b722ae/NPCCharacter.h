// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestProjectCppProjectile.h"

#include "NPCCharacter.generated.h"

UCLASS()
class TESTPROJECTCPP_API ANPCCharacter : public ACharacter
{
	GENERATED_BODY()
public:
		/** Max Amount of hit NPC could take before go into Fallen state*/
		UPROPERTY(BlueprintReadWrite, Category = "Fight Logic")
		int MaxHitCount;
		/** Time NPC spent in fallen state before they die*/
		UPROPERTY(BlueprintReadWrite, Category = "Fight Logic")
		float FallenTimeout;
		/** Radius in which we hit targtes with damage on explosion*/
		UPROPERTY(BlueprintReadWrite, Category = "Fight Logic")
		float ExplosionRadius;
		/** Object to  Spawn On NPCExplosion*/
		UPROPERTY(EditAnywhere, Category = "Fight Logic")
		TSubclassOf<AActor> ExplosionObject;
		/** Objetc that we spawn on NPC place after he dies*/
		UPROPERTY(EditAnywhere, Category = "Fight Logic")
		TSubclassOf<AActor> DeathPickUp;
		/** Muzzle location to shoot projectile */
		UPROPERTY(BlueprintReadWrite, Category = "Fight Logic")
		class USceneComponent* MuzzleLocation;
		/** Projectile class to spawn */
		UPROPERTY(EditDefaultsOnly, Category = "Fight Logic")
		TSubclassOf<class ATestProjectCppProjectile> ProjectileClass;

private:

	int CurrentHitCount;
	bool bIsFallen;
	FTimerHandle MemberTimerHandle;
public:
	// Sets default values for this character's properties
	ANPCCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION(BlueprintCallable, Category = "Fight Logic")
		virtual void FireAtActor(AActor* target);

	UFUNCTION(BlueprintCallable, Category = "Fight Logic")
		virtual void Sucide();

	UFUNCTION(BlueprintCallable, Category = "Fight Logic")
		bool IsFallen();
	
	void Death();
	virtual void FallInGround();
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};
