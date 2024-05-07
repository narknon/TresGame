#pragma once
#include "CoreMinimal.h"
#include "TresBTInterface_DecoratorNativeBase.h"
#include "TresBTInterface_DecoratorNativeGetTimeMoving.generated.h"

UCLASS(Blueprintable)
class ATresBTInterface_DecoratorNativeGetTimeMoving : public ATresBTInterface_DecoratorNativeBase {
    GENERATED_BODY()
public:
    ATresBTInterface_DecoratorNativeGetTimeMoving(const FObjectInitializer& ObjectInitializer);
};

