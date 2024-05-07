#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickStaticSimplicity.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickStaticSimplicity : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    ATresGimmickStaticSimplicity(const FObjectInitializer& ObjectInitializer);
};

