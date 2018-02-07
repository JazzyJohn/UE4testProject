// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestProjectCppHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"
#include "JetPack/JetPackCharacter.h"

#define LOCTEXT_NAMESPACE "JetPack" 

ATestProjectCppHUD::ATestProjectCppHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshairTexObj.Object;
}


void ATestProjectCppHUD::DrawHUD()
{
	Super::DrawHUD();

	// Draw very simple crosshair

	// find center of the Canvas
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	// offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
	const FVector2D CrosshairDrawPosition( (Center.X),
										   (Center.Y + 20.0f));

	// draw the crosshair
	FCanvasTileItem TileItem( CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem( TileItem );
	

	
	if (AJetPackCharacter* jetPackController = Cast<AJetPackCharacter>(GetOwningPlayerController()->GetCharacter()))
	{
		FCanvasTextItem TextItem(FVector2D(0.0f,0.0f), FText::Format(LOCTEXT("JetPackCharge", "JetPack Charge: {0}"), FText::AsNumber(jetPackController->GetJetPackCharge())), GEngine->GetLargeFont(), FLinearColor::Green);
		Canvas->DrawItem(TextItem);
	}
}
