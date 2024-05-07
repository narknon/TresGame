#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresRemyPawnBase.generated.h"

UCLASS(Blueprintable)
class ATresRemyPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    ATresRemyPawnBase(const FObjectInitializer& ObjectInitializer);
};

