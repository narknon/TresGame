#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresInstanceActor.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresInstanceActor : public AActor {
    GENERATED_BODY()
public:
    ATresInstanceActor(const FObjectInitializer& ObjectInitializer);
};

