#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex004_WaterUpper.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex004_WaterUpper : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AtkColStTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AtkColEndTime;
    
    ATresProjectile_e_ex004_WaterUpper(const FObjectInitializer& ObjectInitializer);
};

