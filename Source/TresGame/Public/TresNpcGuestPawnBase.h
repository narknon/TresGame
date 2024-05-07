#pragma once
#include "CoreMinimal.h"
#include "TresNpcPawnBase.h"
#include "TresNpcGuestPawnBase.generated.h"

UCLASS(Blueprintable)
class ATresNpcGuestPawnBase : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    ATresNpcGuestPawnBase(const FObjectInitializer& ObjectInitializer);
};

