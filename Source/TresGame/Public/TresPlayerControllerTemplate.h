#pragma once
#include "CoreMinimal.h"
#include "TresPlayerControllerBase.h"
#include "TresPlayerControllerTemplate.generated.h"

UCLASS(Blueprintable)
class ATresPlayerControllerTemplate : public ATresPlayerControllerBase {
    GENERATED_BODY()
public:
    ATresPlayerControllerTemplate(const FObjectInitializer& ObjectInitializer);
};

