#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_CutDownTractionInfo.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "TresAttack9_e_ex359_FinalBrake_CutDown.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_CutDownTractionInfo m_TractionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnimStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AnimMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWhiteOut;
    
    UTresAttack9_e_ex359_FinalBrake_CutDown();
};

