#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicAero.h"
#include "TresProj_MagicAeroCylinder.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicAeroCylinder : public ATresProj_MagicAero {
    GENERATED_BODY()
public:
    ATresProj_MagicAeroCylinder(const FObjectInitializer& ObjectInitializer);
};

