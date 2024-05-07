#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnBeginActorRideDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGimmickOnBeginActorRide, AActor*, RideActor, UPrimitiveComponent*, Component, const FName, BoneName);

