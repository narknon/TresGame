#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraShootFlow.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraShootFlow : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraShootFlow(const FObjectInitializer& ObjectInitializer);
};

