#pragma once
#include "CoreMinimal.h"
#include "EX359_RemoteEventID.h"
#include "TresEnemyXIIILDPawnBase.h"
#include "EX359_EffectGroupID.h"
#include "ETresBodyCollReactionType.h"
#include "VoiceSet_e_ex359.h"
#include "TresEnemyPawn_e_ex359.generated.h"

class USplineComponent;
class UParticleSystem;
class UParticleSystemComponent;
class ATresWeaponBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex359 : public ATresEnemyXIIILDPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionTypeWhileStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionTypeWhileFinalBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreBodyReacyionNotifyWhileFinalBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionTypeWhileArmorMode;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEX359_EffectGroupID m_GroupID[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_SplineComp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBonamikResetBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WhiteOutParticleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_WhiteOutParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_FinalBrakeFloorParticleClass;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEX359_RemoteEventID m_RemoteEventIDArray[6];
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmorBrakeBlowPower;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmorBrakeBlowDamageStartBrakeTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmorBrakeBlowDamageVelocityZ;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVoiceSet_e_ex359 m_VoiceGroupSetArray[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAccelVoiceProhibitTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWeaponBase* m_pWeaponKeyBlade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWeaponBase* m_pWeaponClaymore;
    
public:
    ATresEnemyPawn_e_ex359(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNowFinalBrake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNowBerserkCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNowAirCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalBrakeEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalBrakeArmorBrakeSucceeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastMoveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageBodyReactionCoroutineFinished() const;
    
};

