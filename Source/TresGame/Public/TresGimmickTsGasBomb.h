#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickTsGasBomb.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickTsGasBomb : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    ATresGimmickTsGasBomb(const FObjectInitializer& ObjectInitializer);
};

