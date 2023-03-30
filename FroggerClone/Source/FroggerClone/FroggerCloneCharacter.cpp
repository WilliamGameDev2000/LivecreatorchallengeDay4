// Copyright Epic Games, Inc. All Rights Reserved.

#include "FroggerCloneCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include <Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h>

//////////////////////////////////////////////////////////////////////////
// AFroggerCloneCharacter

AFroggerCloneCharacter::AFroggerCloneCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFroggerCloneCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFroggerCloneCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFroggerCloneCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
}

void AFroggerCloneCharacter::MovementCooldown()
{
	if (oncooldown)
	{
		oncooldown = false;

		can_move = false;
		GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &AFroggerCloneCharacter::TimerEnd, .65f, false);
	}

}

void AFroggerCloneCharacter::TimerEnd()
{
	can_move = true;
	oncooldown = true;
}


void AFroggerCloneCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		if (FMath::Abs(Value) > 0.3 && can_move)
		{
			Value *= 240;

			MovementCooldown();
			const FVector Direction = FVector(Value, 0, 300);
			LaunchCharacter(Direction, true, true);
		}
	}
}

void AFroggerCloneCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		if (FMath::Abs(Value) > 0.3 && can_move)
		{
			Value *= 240;

			MovementCooldown();
			const FVector Direction = FVector(0, Value, 300);
			LaunchCharacter(Direction, true, true);
		}
	}
}
