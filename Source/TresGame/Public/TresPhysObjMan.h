#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPhysObjMan.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class ATresPhysObjMan : public AActor {
    GENERATED_BODY()
public:
    ATresPhysObjMan(const FObjectInitializer& ObjectInitializer);
};

