#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEmitterPoolChild.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class ATresEmitterPoolChild : public AActor {
    GENERATED_BODY()
public:
    ATresEmitterPoolChild(const FObjectInitializer& ObjectInitializer);
};

