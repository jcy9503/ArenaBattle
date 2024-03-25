// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterControlData.h"

UABCharacterControlData::UABCharacterControlData(): bUseControllerRotationYaw(0),
                                                    bOrientRotationToMovement(0),
                                                    bUseControllerDesiredRotation(0),
                                                    TargetArmLength(400.f),
                                                    bUsePawnControlRotation(0),
                                                    bInheritPitch(0), bInheritYaw(0),
                                                    bInheritRoll(0),
                                                    bDoCollisionTest(0) {}