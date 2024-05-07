#pragma once
#include "CoreMinimal.h"
#include "TresAttack_n_ex023_ComboBase.h"
#include "TresAttack1_n_ex023_LandCombo.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_n_ex023_LandCombo : public UTresAttack_n_ex023_ComboBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGroundVerticalSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGroundTripleSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAerialTripleSlashAttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGroundComboFinishAttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAerialComboFinishAttackableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAerialComboRouteBranchThresholdHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugForceBranchAerialComboRoute: 1;
    
public:
    UTresAttack1_n_ex023_LandCombo();
};

