#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "ETresActorSpecificActionID.h"
#include "TresAction_EnemyShipBase_SendSpecificActionEvent.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_SendSpecificActionEvent : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresActorSpecificActionID> m_BeginSpecificActionID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresActorSpecificActionID> m_EndSpecificActionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConditionInvincible;
    
    UTresAction_EnemyShipBase_SendSpecificActionEvent();
};

