#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackSlotAnimation.h"
#include "ETresCharEquipPart.h"
#include "TresInterpTrackWeaponAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackWeaponAnimation : public UTresInterpTrackSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCharEquipPart Part;
    
    UTresInterpTrackWeaponAnimation();
};

