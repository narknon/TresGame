#pragma once
#include "CoreMinimal.h"
#include "TresBTInterface_DecoratorNativeBase.h"
#include "TresBTInterface_DecoratorNativeAngleCheck.generated.h"

UCLASS(Blueprintable)
class ATresBTInterface_DecoratorNativeAngleCheck : public ATresBTInterface_DecoratorNativeBase {
    GENERATED_BODY()
public:
    ATresBTInterface_DecoratorNativeAngleCheck(const FObjectInitializer& ObjectInitializer);
};

