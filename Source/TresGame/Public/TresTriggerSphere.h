#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "TresNotifyInterface.h"
#include "TresTriggerSphere.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresTriggerSphere : public ATriggerSphere, public ITresNotifyInterface {
    GENERATED_BODY()
public:
    ATresTriggerSphere(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

