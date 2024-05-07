#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipFreeFlightTypeEnemyBase : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LimitRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnAdvanced;
    
    ATresGumiShipFreeFlightTypeEnemyBase(const FObjectInitializer& ObjectInitializer);
};

