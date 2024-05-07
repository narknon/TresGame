#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex305_NormalShot.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex305_NormalShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_bShotDirCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_CkMyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_CkTgtRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_CkDisableTgtDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_bShotDirCorrectionDisp;
    
public:
    UTresAttack1_e_ex305_NormalShot();
};

