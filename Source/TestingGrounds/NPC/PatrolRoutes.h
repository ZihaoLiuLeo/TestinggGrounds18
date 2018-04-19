// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolRoutes.generated.h"

/**
* A "route card" to help Ai choose their next waypoint
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUNDS_API UPatrolRoutes : public UActorComponent
{
	GENERATED_BODY()

public:	
	TArray<AActor*> GetPatrolPoints() const;

private:
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPoints;
	
};
