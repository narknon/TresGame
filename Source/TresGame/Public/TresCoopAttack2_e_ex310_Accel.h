#pragma once
#include "CoreMinimal.h"
#include "WaveSet_e_ex310.h"
#include "TresAttackDefinitionBase.h"
#include "TresAccelAttackInfo_e_ex310.h"
#include "TresCoopAttack2_e_ex310_Accel.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAttack2_e_ex310_Accel : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveSet_e_ex310 m_WaveSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinTurnToTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxTurnToTargetOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAccelAttackInfo_e_ex310> m_AttackInfoArray;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iOffsetDeterminParam;
    
    UTresCoopAttack2_e_ex310_Accel();
};

