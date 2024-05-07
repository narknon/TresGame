#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TressEnemyEx021BlurParamater.h"
#include "ETresEnemyEx021ActionMode.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex021.generated.h"

class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;
class UTresAttackDefinitionWeaponBase;
class UTresReactorComponent;
class ATresCameraEx021;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex021 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_Reactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraEx021> m_PlayerCameraEx021;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAttackDefinitionWeaponBase> m_RevengeAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ShotgunFireProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BBPearlShotgunFireProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_BBpearlBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_GlideMagicProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pFireBreathReflectEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_FireBreathReflectEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_RotatingExplosiveProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LongStunnedTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DoLongStunnedPearsentHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTressEnemyEx021BlurParamater> m_BlurParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NormalToAccelerationBlurParamTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccelerationToNormalBlurParamTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DoShakeOffPearsentHP;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugEx021: 1;
    
    ATresEnemyPawn_e_ex021(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool ValidateBoardedRapidMove();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShakeOff();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionMode(ETresEnemyEx021ActionMode mode);
    
private:
    UFUNCTION(BlueprintCallable)
    float GetMoveThornsElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    float GetBoardedElapsedTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableImmediatelyShakeOff();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableLongStunned(bool bEnableLongStunned);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_DebugShakeOff();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
    UFUNCTION(BlueprintCallable)
    bool BP_DebugRapidAccel();
    
    UFUNCTION(BlueprintCallable)
    bool BP_DebugFireBreath();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugEndWeaponAttack();
    
};

