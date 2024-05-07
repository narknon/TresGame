#pragma once
#include "CoreMinimal.h"
#include "TresHUD.h"
#include "TresSoKcHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATresSoKcHUD : public ATresHUD {
    GENERATED_BODY()
public:
    ATresSoKcHUD(const FObjectInitializer& ObjectInitializer);
};

