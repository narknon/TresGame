#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCA_ChimneyBase.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickCA_ChimneyBase : public AActor {
    GENERATED_BODY()
public:
    ATresGimmickCA_ChimneyBase(const FObjectInitializer& ObjectInitializer);
};

