#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTargetCtrl.h"
#include "TresCameraSnowCurling.generated.h"

UCLASS(Blueprintable)
class ATresCameraSnowCurling : public ATresCameraRotTargetCtrl {
    GENERATED_BODY()
public:
    ATresCameraSnowCurling(const FObjectInitializer& ObjectInitializer);
};

