#pragma once
#include "CoreMinimal.h"
#include "TresAccompanyPawnBase.h"
#include "TresFriendLinkPawnBase.generated.h"

UCLASS(Blueprintable)
class ATresFriendLinkPawnBase : public ATresAccompanyPawnBase {
    GENERATED_BODY()
public:
    ATresFriendLinkPawnBase(const FObjectInitializer& ObjectInitializer);
};

