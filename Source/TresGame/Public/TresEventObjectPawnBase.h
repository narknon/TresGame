#pragma once
#include "CoreMinimal.h"
#include "TresEventPawnBase.h"
#include "TresEventObjectPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresEventObjectPawnBase : public ATresEventPawnBase {
    GENERATED_BODY()
public:
    ATresEventObjectPawnBase(const FObjectInitializer& ObjectInitializer);
};

