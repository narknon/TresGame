#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPawnBase.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSplinePathMoveTypeEnemyBase : public ATresGumiShipEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    ATresGumiShipSplinePathMoveTypeEnemyBase(const FObjectInitializer& ObjectInitializer);
};

