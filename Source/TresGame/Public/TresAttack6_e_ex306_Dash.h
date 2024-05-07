#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "WaveOneCollInfo_e_ex310.h"
#include "TresAttack6_e_ex306_Dash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack6_e_ex306_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxLoopCoount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOneCollInfo_e_ex310 m_OneCollInfo;
    
    UTresAttack6_e_ex306_Dash();
};

