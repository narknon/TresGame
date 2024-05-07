#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresFzAvalanche.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresFzAvalanche : public AActor {
    GENERATED_BODY()
public:
    ATresFzAvalanche(const FObjectInitializer& ObjectInitializer);
};

