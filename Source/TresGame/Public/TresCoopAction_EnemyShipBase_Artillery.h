#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_Artillery.h"
#include "TresCoopAction_EnemyShipBase_Artillery.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAction_EnemyShipBase_Artillery : public UTresAction_EnemyShipBase_Artillery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetAttackColImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetBodyColImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AppearParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitAppearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RunningTime;
    
public:
    UTresCoopAction_EnemyShipBase_Artillery();
};

