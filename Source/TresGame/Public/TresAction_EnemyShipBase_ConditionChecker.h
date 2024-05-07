#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyShipCondition.h"
#include "TresAction_EnemyShipBase_ConditionChecker.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_ConditionChecker : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyShipCondition::Type> m_ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BBName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWithoutLargeShip;
    
    UTresAction_EnemyShipBase_ConditionChecker();
};

