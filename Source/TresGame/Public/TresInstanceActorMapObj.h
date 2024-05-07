#pragma once
#include "CoreMinimal.h"
#include "TresInstanceActor.h"
#include "TresInstanceActorMapObj.generated.h"

UCLASS(Blueprintable)
class ATresInstanceActorMapObj : public ATresInstanceActor {
    GENERATED_BODY()
public:
    ATresInstanceActorMapObj(const FObjectInitializer& ObjectInitializer);
};

