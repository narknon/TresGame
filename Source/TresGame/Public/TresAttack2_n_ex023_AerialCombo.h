#pragma once
#include "CoreMinimal.h"
#include "TresAttack_n_ex023_ComboBase.h"
#include "TresAttack2_n_ex023_AerialCombo.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_n_ex023_AerialCombo : public UTresAttack_n_ex023_ComboBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAerialVerticalSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAerialTripleSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAerialComboFinishAttackableDistance;
    
public:
    UTresAttack2_n_ex023_AerialCombo();
};

