#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresStyleProjSHThunder.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresStyleProjSHThunder : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresStyleProjSHThunder(const FObjectInitializer& ObjectInitializer);
};

