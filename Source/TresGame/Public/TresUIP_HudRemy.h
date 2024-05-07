#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudRemy.generated.h"

UCLASS(Blueprintable)
class UTresUIP_HudRemy : public UTresUIParts {
    GENERATED_BODY()
public:
    UTresUIP_HudRemy();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

