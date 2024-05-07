#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickBlockadeStaticBase.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickBlockadeStaticBase : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    ATresGimmickBlockadeStaticBase(const FObjectInitializer& ObjectInitializer);
};

