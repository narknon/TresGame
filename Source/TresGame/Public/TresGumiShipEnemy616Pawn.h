#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy616Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy616Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Damaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AppearEnd;
    
    ATresGumiShipEnemy616Pawn(const FObjectInitializer& ObjectInitializer);
};

