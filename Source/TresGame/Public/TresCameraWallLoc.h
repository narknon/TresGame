#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormalLoc.h"
#include "TresCameraWallLoc.generated.h"

UCLASS(Blueprintable)
class ATresCameraWallLoc : public ATresCameraNormalLoc {
    GENERATED_BODY()
public:
    ATresCameraWallLoc(const FObjectInitializer& ObjectInitializer);
};

