#pragma once
#include "CoreMinimal.h"
#include "TresGimmickHitCountComponent.h"
#include "TresGimmickPrizeHitCountComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickPrizeHitCountComponent : public UTresGimmickHitCountComponent {
    GENERATED_BODY()
public:
    UTresGimmickPrizeHitCountComponent();
};

