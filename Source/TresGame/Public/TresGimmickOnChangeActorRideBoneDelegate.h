#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnChangeActorRideBoneDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGimmickOnChangeActorRideBone, AActor*, RideActor, UPrimitiveComponent*, Component, const FName, BoneName);

