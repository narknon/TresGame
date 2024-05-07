#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_LockTargetSelection.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_LockTargetSelection : public UBTDecorator {
    GENERATED_BODY()
public:
    UTresBTDecorator_LockTargetSelection();
};

