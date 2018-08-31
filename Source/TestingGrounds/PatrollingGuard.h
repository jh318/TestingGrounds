// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrolRoute.h"
#include "PatrollingGuard.generated.h"

/**
 * A "route card" to help AI choose their next waypoint
 */
UCLASS()
class TESTINGGROUNDS_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
	
public: 
	UPROPERTY (EditInstanceOnly, Category = "Guard")
	TArray<AActor*> PatrolPointsCPP;
};
