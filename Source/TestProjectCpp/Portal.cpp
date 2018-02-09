// Fill out your copyright notice in the Description page of Project Settings.
#include "Portal.h"

#include "Components/ShapeComponent.h"
#include "TestProjectCppCharacter.h"

APortal::APortal()
{
	GetCollisionComponent()->OnComponentBeginOverlap.AddDynamic(this, &APortal::BeginOverlap);
}

void APortal::BeginOverlap(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	Teleport(OtherActor);
}

void APortal::Teleport(AActor* ActorToTeleport)
{
	if (ActorToTeleport && TargetToTeleport)
	{
		ActorToTeleport->TeleportTo(TargetToTeleport->GetActorLocation(), TargetToTeleport->GetActorRotation());

		if (ShouldTriggerTeleportEvent)
		{
			if (ATestProjectCppCharacter* charatcer = Cast<ATestProjectCppCharacter>(ActorToTeleport))
			{
				charatcer->OnTeleport();
			}
		}
	}
}