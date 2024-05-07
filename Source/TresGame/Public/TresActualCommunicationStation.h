#pragma once
#include "CoreMinimal.h"
#include "TresCommunicationStation.h"
#include "TresActualCommunicationStation.generated.h"

UCLASS(Blueprintable)
class ATresActualCommunicationStation : public ATresCommunicationStation {
    GENERATED_BODY()
public:
    ATresActualCommunicationStation(const FObjectInitializer& ObjectInitializer);
};

