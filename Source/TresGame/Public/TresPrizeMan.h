#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPrizeMan.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class ATresPrizeMan : public AActor {
    GENERATED_BODY()
public:
    ATresPrizeMan(const FObjectInitializer& ObjectInitializer);
};

