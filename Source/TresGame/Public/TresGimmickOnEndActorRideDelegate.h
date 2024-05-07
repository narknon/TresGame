#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnEndActorRideDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGimmickOnEndActorRide, AActor*, RideActor, UPrimitiveComponent*, Component, const FName, BoneName);

