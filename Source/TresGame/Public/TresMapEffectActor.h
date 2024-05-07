#pragma once
#include "CoreMinimal.h"
#include "TresEffectActor.h"
#include "TresMapEffectActor.generated.h"

UCLASS(Blueprintable)
class ATresMapEffectActor : public ATresEffectActor {
    GENERATED_BODY()
public:
    ATresMapEffectActor(const FObjectInitializer& ObjectInitializer);
};

