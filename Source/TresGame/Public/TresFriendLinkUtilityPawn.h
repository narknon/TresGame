#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkUtilityPawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresFriendLinkUtilityPawn : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    ATresFriendLinkUtilityPawn(const FObjectInitializer& ObjectInitializer);
};

