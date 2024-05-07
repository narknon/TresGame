#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickBxCarManagerActor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmickBxCarManagerActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
    ATresGimmickBxCarManagerActor(const FObjectInitializer& ObjectInitializer);
};

