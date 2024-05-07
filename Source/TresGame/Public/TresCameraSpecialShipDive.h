#pragma once
#include "CoreMinimal.h"
#include "TresCameraSpecialShip.h"
#include "TresCameraSpecialShipDive.generated.h"

UCLASS(Blueprintable)
class ATresCameraSpecialShipDive : public ATresCameraSpecialShip {
    GENERATED_BODY()
public:
    ATresCameraSpecialShipDive(const FObjectInitializer& ObjectInitializer);
};

