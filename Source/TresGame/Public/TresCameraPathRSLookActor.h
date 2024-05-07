#pragma once
#include "CoreMinimal.h"
#include "TresCameraPathRSLocationActor.h"
#include "TresCameraPathRSLookActor.generated.h"

UCLASS(Blueprintable)
class ATresCameraPathRSLookActor : public ATresCameraPathRSLocationActor {
    GENERATED_BODY()
public:
    ATresCameraPathRSLookActor(const FObjectInitializer& ObjectInitializer);
};

