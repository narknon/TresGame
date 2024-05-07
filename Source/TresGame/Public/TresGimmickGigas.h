#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickGigas.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickGigas : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    ATresGimmickGigas(const FObjectInitializer& ObjectInitializer);
};

