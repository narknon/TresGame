#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresAccompanyProjectileBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresAccompanyProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresAccompanyProjectileBase(const FObjectInitializer& ObjectInitializer);
};

