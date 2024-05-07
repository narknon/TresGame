#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunBehaviorDynamic.h"
#include "TresBTTask_RunBehaviorDynamic.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_RunBehaviorDynamic : public UBTTask_RunBehaviorDynamic {
    GENERATED_BODY()
public:
    UTresBTTask_RunBehaviorDynamic();
};

