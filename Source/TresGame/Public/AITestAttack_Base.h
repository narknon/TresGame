#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "AITestTractionParam.h"
#include "AITestAttack_Base.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UAITestAttack_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bFlyingMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAITestTractionParam m_AnimNotifyTractionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bWeaponVisible: 1;
    
public:
    UAITestAttack_Base();
};

