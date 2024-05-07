#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresEditorOnlyGeneratorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEditorOnlyGeneratorBase : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
    ATresEditorOnlyGeneratorBase(const FObjectInitializer& ObjectInitializer);
};

