#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraNormalLoc.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraNormalLoc : public ATresCameraNormal {
    GENERATED_BODY()
public:
    ATresCameraNormalLoc(const FObjectInitializer& ObjectInitializer);
};

