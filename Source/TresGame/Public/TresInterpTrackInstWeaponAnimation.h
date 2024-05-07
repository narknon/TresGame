#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackInstSlotAnimation.h"
#include "TresInterpTrackInstWeaponAnimation.generated.h"

class ATresWeaponBase;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstWeaponAnimation : public UTresInterpTrackInstSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWeaponBase* Weapon;
    
    UTresInterpTrackInstWeaponAnimation();
};

