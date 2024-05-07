#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "TresCameraSnowChase.generated.h"

UCLASS(Blueprintable)
class ATresCameraSnowChase : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
    ATresCameraSnowChase(const FObjectInitializer& ObjectInitializer);
};

