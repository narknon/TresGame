#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickPokaponFighter.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickPokaponFighter : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickPokaponFighter(const FObjectInitializer& ObjectInitializer);
};

