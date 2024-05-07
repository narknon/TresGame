#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAttack5_e_ex043_SpinSlash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex043_SpinSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableShockwaveCollisionSingleHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionCancelParam_e_ex043 m_CancelParam1_Attack;
    
    UTresAttack5_e_ex043_SpinSlash();
};

