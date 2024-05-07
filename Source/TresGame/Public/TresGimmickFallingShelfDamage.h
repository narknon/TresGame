#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickFallingShelfDamage.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickFallingShelfDamage : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickFallingShelfDamage(const FObjectInitializer& ObjectInitializer);
};

