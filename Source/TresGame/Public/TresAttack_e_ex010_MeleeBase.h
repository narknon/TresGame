#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack_e_ex010_MeleeBase.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex010_MeleeBase : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_fDisableBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTractionVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStopDistance;
    
    UTresAttack_e_ex010_MeleeBase();
};

