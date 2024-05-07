#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickTsPossession.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickTsPossession : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickTsPossession(const FObjectInitializer& ObjectInitializer);
};

