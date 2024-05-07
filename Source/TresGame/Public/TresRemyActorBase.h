#pragma once
#include "CoreMinimal.h"
#include "TresSharedActor.h"
#include "TresRemyActorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresRemyActorBase : public ATresSharedActor {
    GENERATED_BODY()
public:
    ATresRemyActorBase(const FObjectInitializer& ObjectInitializer);
};

