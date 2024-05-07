#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex105_EndChaosShield.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex105_EndChaosShield : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_CubeMotPlayRateNormalChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_CubeRotSpeedNormalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_CubeAtkCollEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_CubeNormalEffChangeTime;
    
public:
    UTresAttack5_e_ex105_EndChaosShield();
};

