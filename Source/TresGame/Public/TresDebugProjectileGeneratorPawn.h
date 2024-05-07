#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresDebugProjectileGeneratorPawn.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ATresDebugProjectileGeneratorPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pro_ShootingRideAddScoreColorRateCurve;
    
public:
    ATresDebugProjectileGeneratorPawn(const FObjectInitializer& ObjectInitializer);
};

