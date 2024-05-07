#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_DarkBarrageBlackSphereExplode.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex352_DarkBarrageBlackSphereExplode : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitHomingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxHomingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StopHomingTargetSpeed;
    
    ATresProjectile_e_ex352_DarkBarrageBlackSphereExplode(const FObjectInitializer& ObjectInitializer);
};

