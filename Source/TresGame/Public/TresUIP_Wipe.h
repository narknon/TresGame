#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Wipe.generated.h"

UCLASS(Blueprintable)
class UTresUIP_Wipe : public UTresUIParts {
    GENERATED_BODY()
public:
    UTresUIP_Wipe();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

