#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAction7_e_ex035_CarriageShoot.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction7_e_ex035_CarriageShoot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxShotCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CarriageFixBoneName;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UAnimSequenceBase* m_AnimDataList[3];
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBeginWithTurn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttachEndMotion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEndMotionEnableGravityTime;
    
    UTresAction7_e_ex035_CarriageShoot();
};

