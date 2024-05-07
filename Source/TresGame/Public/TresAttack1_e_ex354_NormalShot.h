#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EEX354_NormalShotDistanceType.h"
#include "TresAttack1_e_ex354_NormalShot.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex354_NormalShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseTurnToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAirReverseShotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEX354_NormalShotDistanceType m_AirReverseShotDistanceType;
    
public:
    UTresAttack1_e_ex354_NormalShot();
};

