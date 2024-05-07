#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraShooterMode.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraShooterMode : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraShooterMode(const FObjectInitializer& ObjectInitializer);
};

