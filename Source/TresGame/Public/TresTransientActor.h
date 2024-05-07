#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresTransientActor.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class ATresTransientActor : public AActor {
    GENERATED_BODY()
public:
    ATresTransientActor(const FObjectInitializer& ObjectInitializer);
};

