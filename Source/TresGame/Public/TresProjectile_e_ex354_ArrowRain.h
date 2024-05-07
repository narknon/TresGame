#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ArrowRain.generated.h"

class UCurveFloat;
class UCurveVector;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_ArrowRain : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AtkCollRotPitchOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_AtkCollPosOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDisp;
    
    ATresProjectile_e_ex354_ArrowRain(const FObjectInitializer& ObjectInitializer);
};

