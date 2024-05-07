#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex047_ProjectileBase.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex047_ProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FireTurnHomingTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FireTurnHomingMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FireTurnHomingTurnMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FireTurnAfterHomingMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FireTurnAfterHomingTurnMax;
    
    ATresEnemy_e_ex047_ProjectileBase(const FObjectInitializer& ObjectInitializer);
};

