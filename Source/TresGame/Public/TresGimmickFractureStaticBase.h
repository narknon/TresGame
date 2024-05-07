#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickFractureStaticBase.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickFractureStaticBase : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    ATresGimmickFractureStaticBase(const FObjectInitializer& ObjectInitializer);
};

