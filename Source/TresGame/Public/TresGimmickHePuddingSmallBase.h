#pragma once
#include "CoreMinimal.h"
#include "TresGimmickHePuddingBase.h"
#include "TresGimmickHePuddingSmallBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmickHePuddingSmallBase : public ATresGimmickHePuddingBase {
    GENERATED_BODY()
public:
    ATresGimmickHePuddingSmallBase(const FObjectInitializer& ObjectInitializer);
};

