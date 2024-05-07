#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicFire.h"
#include "TresProj_MagicDarkFiragaCore.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicDarkFiragaCore : public ATresProj_MagicFire {
    GENERATED_BODY()
public:
    ATresProj_MagicDarkFiragaCore(const FObjectInitializer& ObjectInitializer);
};

