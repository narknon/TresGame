#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraAirplane.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraAirplane : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraAirplane(const FObjectInitializer& ObjectInitializer);
};

