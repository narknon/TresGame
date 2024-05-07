#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy615Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy615Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mode;
    
    ATresGumiShipEnemy615Pawn(const FObjectInitializer& ObjectInitializer);
};

