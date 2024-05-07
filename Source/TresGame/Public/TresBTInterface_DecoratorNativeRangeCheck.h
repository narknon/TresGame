#pragma once
#include "CoreMinimal.h"
#include "TresBTInterface_DecoratorNativeBase.h"
#include "TresBTInterface_DecoratorNativeRangeCheck.generated.h"

UCLASS(Blueprintable)
class ATresBTInterface_DecoratorNativeRangeCheck : public ATresBTInterface_DecoratorNativeBase {
    GENERATED_BODY()
public:
    ATresBTInterface_DecoratorNativeRangeCheck(const FObjectInitializer& ObjectInitializer);
};

