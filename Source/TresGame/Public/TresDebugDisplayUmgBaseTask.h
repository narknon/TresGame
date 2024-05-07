#pragma once
#include "CoreMinimal.h"
#include "TresDebugDisplayTask.h"
#include "TresDebugDisplayUmgBaseTask.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresDebugDisplayUmgBaseTask : public UTresDebugDisplayTask {
    GENERATED_BODY()
public:
    UTresDebugDisplayUmgBaseTask();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DeleteWidget();
    
};

