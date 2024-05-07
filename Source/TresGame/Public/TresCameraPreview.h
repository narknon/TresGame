#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraPreview.generated.h"

UCLASS(Blueprintable)
class ATresCameraPreview : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraPreview(const FObjectInitializer& ObjectInitializer);
};

