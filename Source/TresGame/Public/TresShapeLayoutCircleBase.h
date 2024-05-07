#pragma once
#include "CoreMinimal.h"
#include "TresShapeLayoutObjectBase.h"
#include "TresShapeLayoutCircleBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresShapeLayoutCircleBase : public ATresShapeLayoutObjectBase {
    GENERATED_BODY()
public:
    ATresShapeLayoutCircleBase(const FObjectInitializer& ObjectInitializer);
};

