#pragma once
#include "CoreMinimal.h"
#include "TresCameraPathSplineLinkActor.h"
#include "TresCameraPathRSLocationActor.generated.h"

UCLASS(Blueprintable, Placeable)
class ATresCameraPathRSLocationActor : public ATresCameraPathSplineLinkActor {
    GENERATED_BODY()
public:
    ATresCameraPathRSLocationActor(const FObjectInitializer& ObjectInitializer);
};

