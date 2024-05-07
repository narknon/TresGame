#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresTransientGimmickGeneratorBase.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class ATresTransientGimmickGeneratorBase : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
    ATresTransientGimmickGeneratorBase(const FObjectInitializer& ObjectInitializer);
};

