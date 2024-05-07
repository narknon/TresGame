#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "BX901_NeedleRainInfo.h"
#include "TresAttack12_e_bx901_BurstNeedle.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack12_e_bx901_BurstNeedle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_NeedleRainInfo m_NeedleRainInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxNeedleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWingContractPer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkipEndAnim;
    
    UTresAttack12_e_bx901_BurstNeedle();
};

