#pragma once
#include "CoreMinimal.h"
#include "TresPrizeBase.h"
#include "TresPrizeBox.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresPrizeBox : public ATresPrizeBase {
    GENERATED_BODY()
public:
    ATresPrizeBox(const FObjectInitializer& ObjectInitializer);
};

