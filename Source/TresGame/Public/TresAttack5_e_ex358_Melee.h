#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex358_Base.h"
#include "MeleeRootMotionScaleParam_e_ex358.h"
#include "TresAttack5_e_ex358_Melee.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex358_Melee : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableAttackHitResetRootMotionScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
public:
    UTresAttack5_e_ex358_Melee();
};

