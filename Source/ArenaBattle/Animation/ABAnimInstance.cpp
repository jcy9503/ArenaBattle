// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/ABAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UABAnimInstance::UABAnimInstance() : GroundSpeed(0),
                                     bIsIdle(0),
                                     MovingThreshold(3.f),
                                     bIsFalling(0),
                                     bIsJumping(0),
                                     JumpingThreshold(100.f) {}

void UABAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Owner = Cast<ACharacter>(GetOwningActor());
	if (Owner)
	{
		Movement = Owner->GetCharacterMovement();
	}
}

void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (Movement)
	{
		Velocity    = Movement->Velocity;
		GroundSpeed = Velocity.Size2D();
		bIsIdle     = GroundSpeed < MovingThreshold;
		bIsFalling  = Movement->IsFalling();
		bIsJumping  = bIsFalling & (Velocity.Z > JumpingThreshold);
	}
}