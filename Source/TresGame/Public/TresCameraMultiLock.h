#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraMultiLock.generated.h"

UCLASS(Blueprintable)
class ATresCameraMultiLock : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraMultiLock(const FObjectInitializer& ObjectInitializer);
};

