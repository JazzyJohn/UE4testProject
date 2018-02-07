// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseWeapon.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTPROJECTCPP_API UBaseWeapon : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Weapon Logic")
		float ForceOfImpact;
	UPROPERTY(EditAnywhere, Category = "Weapon Logic")
		float WeaponRange;
	UPROPERTY(EditAnywhere, Category = "Weapon Logic")
		float DamageAmount;
	/*Spread are generating by generating direction with picth and yaw random in range -SpreadAngle:SpreadAngle*/
	UPROPERTY(EditAnywhere, Category = "Weapon Logic", meta = (ClampMin = "0.0", ClampMax = "90.0", UIMin = "0.0", UIMax = "90.0"))
		float SpreadAngle;
	UPROPERTY(EditAnywhere, Category = "Weapon Logic")
	TSubclassOf<AActor> HitObject;

	APlayerController* Controller;
public:	
	// Sets default values for this component's properties
	UBaseWeapon();

	virtual void StartShot();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void ApplyLogic(FHitResult& inHit );
	void GenerateRotation(FRotator& adjustRotation) const;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
