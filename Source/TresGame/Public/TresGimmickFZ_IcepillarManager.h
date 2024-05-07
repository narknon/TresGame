#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickFZ_IcepillarManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickFZ_IcepillarManager : public ATresGimmickActor {
    GENERATED_BODY()
public:
    ATresGimmickFZ_IcepillarManager(const FObjectInitializer& ObjectInitializer);
};

