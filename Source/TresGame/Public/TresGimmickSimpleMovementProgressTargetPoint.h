#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleMovementProgressStraight.h"
#include "TresGimmickSimpleMovementProgressTargetPoint.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresGimmickSimpleMovementProgressTargetPoint : public UTresGimmickSimpleMovementProgressStraight {
    GENERATED_BODY()
public:
    UTresGimmickSimpleMovementProgressTargetPoint();
};

