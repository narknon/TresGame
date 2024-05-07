#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_StoleTrapN.h"
#include "ETresEnemyUniqueID.h"
#include "TresAction_EnemyShipBase_ChangingToLargeShip.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_ChangingToLargeShip : public UTresAction_EnemyShipBase_StoleTrapN {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyUniqueID m_SpawnEnemyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverwriteSuicideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpeedDeclRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpOutWaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnLargeShipWaitTimer;
    
public:
    UTresAction_EnemyShipBase_ChangingToLargeShip();
};

