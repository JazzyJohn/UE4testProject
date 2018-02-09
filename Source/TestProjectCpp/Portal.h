// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"

#include "Portal.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECTCPP_API APortal : public ATriggerBox
{
GENERATED_BODY()
	

public:
	/* Teleport Actor that triggers BeginOverlap to TargetToTeleport*/
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		AActor* TargetToTeleport;
	/*if True OnTeleport will be call on AActor */
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		bool ShouldTriggerTeleportEvent;
public:
	APortal();
	UFUNCTION(BlueprintCallable, Category = "Teleport")
		void Teleport(AActor* ActorToTeleport);
	UFUNCTION() 
		void BeginOverlap(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	
};
