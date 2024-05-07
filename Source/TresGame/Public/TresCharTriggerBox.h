#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresCharTriggerBox.generated.h"

UCLASS(Blueprintable)
class ATresCharTriggerBox : public ATresTriggerBox {
    GENERATED_BODY()
public:
    ATresCharTriggerBox(const FObjectInitializer& ObjectInitializer);
};

