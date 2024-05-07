#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresCommunicationStation.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresCommunicationStation : public AActor {
    GENERATED_BODY()
public:
    ATresCommunicationStation(const FObjectInitializer& ObjectInitializer);
};

