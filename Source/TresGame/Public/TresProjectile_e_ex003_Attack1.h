#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex003_Attack1.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex003_Attack1 : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxScale;
    
    ATresProjectile_e_ex003_Attack1(const FObjectInitializer& ObjectInitializer);
};

