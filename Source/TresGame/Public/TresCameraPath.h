#pragma once
#include "CoreMinimal.h"
#include "TresCameraTarget.h"
#include "TresCameraPath.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraPath : public ATresCameraTarget {
    GENERATED_BODY()
public:
    ATresCameraPath(const FObjectInitializer& ObjectInitializer);
};

