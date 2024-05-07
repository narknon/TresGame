#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy601Pawn.generated.h"

class UTresGumiShipAtkCollisionSetCompo;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy601Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipAtkCollisionSetCompo* m_pRushAtkCollision;
    
    ATresGumiShipEnemy601Pawn(const FObjectInitializer& ObjectInitializer);
};

