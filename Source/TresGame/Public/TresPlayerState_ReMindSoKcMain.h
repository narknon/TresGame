#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresPlayerState_ReMindSoKcMain.generated.h"

UCLASS(Blueprintable)
class UTresPlayerState_ReMindSoKcMain : public UTresStateBase {
    GENERATED_BODY()
public:
    UTresPlayerState_ReMindSoKcMain();
private:
    UFUNCTION(BlueprintCallable)
    void _OnLightWaveProjectileFinish();
    
};

