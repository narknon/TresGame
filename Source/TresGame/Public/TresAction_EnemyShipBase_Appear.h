#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction_EnemyShipBase_Appear.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_Appear : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetAttackColImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetBodyColImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetBodyPushPowerLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetWarpOutFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetDamageCount;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_InitSpeedRange;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_FacingYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AppearParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitAppearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitAfterAppear;
    
public:
    UTresAction_EnemyShipBase_Appear();
};

