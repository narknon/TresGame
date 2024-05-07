#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresDebugTask.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresDebugTask : public UTresTaskBase {
    GENERATED_BODY()
public:
    UTresDebugTask();
};

