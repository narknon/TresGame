#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresEnemyShip.h"
#include "TresEnemyShipBTDecorator_IsAliveShipCore.generated.h"

UCLASS(Blueprintable)
class UTresEnemyShipBTDecorator_IsAliveShipCore : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyShip::Type> m_LocType;
    
    UTresEnemyShipBTDecorator_IsAliveShipCore();
};

