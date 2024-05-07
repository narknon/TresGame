#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_DarkGalaxyBlackSphere.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex352_DarkGalaxyBlackSphere : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DotAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PassDistance;
    
public:
    ATresProjectile_e_ex352_DarkGalaxyBlackSphere(const FObjectInitializer& ObjectInitializer);
};

