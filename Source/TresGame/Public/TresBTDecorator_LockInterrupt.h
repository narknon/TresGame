#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_LockInterrupt.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_LockInterrupt : public UBTDecorator {
    GENERATED_BODY()
public:
    UTresBTDecorator_LockInterrupt();
};

