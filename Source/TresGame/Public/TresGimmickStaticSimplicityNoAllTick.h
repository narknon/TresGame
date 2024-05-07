#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticSimplicity.h"
#include "TresGimmickStaticSimplicityNoAllTick.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmickStaticSimplicityNoAllTick : public ATresGimmickStaticSimplicity {
    GENERATED_BODY()
public:
    ATresGimmickStaticSimplicityNoAllTick(const FObjectInitializer& ObjectInitializer);
};

