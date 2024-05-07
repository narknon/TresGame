#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIILEPawnBase.h"
#include "TresEx353HitEffectInfo.h"
#include "TresEx353HitEffectManager.h"
#include "TresEx353EveryDirectionShotReserveWorker.h"
#include "ETresEnemyEx353ThornWildDanceEvent.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex353.generated.h"

class UTresProjectileManager_e_ex353_ThornBeam;
class UParticleSystem;
class ATresStaticMesh_e_ex353_Shield;
class ATresProjectileBase;
class UParticleSystemComponent;
class USQEX_ParticleAttachDataAsset;
class UObject;
class USoundBase;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex353 : public ATresEnemyXIIILEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresEx353HitEffectInfo m_HitEffectInfos[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx353HitEffectManager> m_HitEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresProjectileManager_e_ex353_ThornBeam* m_ThornBeamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresStaticMesh_e_ex353_Shield> m_ShieldActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThornWildDanceDarkAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThornWildDanceFlushAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EveryDirectionShotAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_LaserShotProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_LaserShotIgnoreGuardProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_LaserShotMissProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsEveryDirectionShotAfterSpawnStunProjectile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_StunProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_EveryDirectionShotRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EveryDirectionShotDeployDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnStunProjectileTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ThornWildDanceDarkCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_EveryDirectionShotEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx353EveryDirectionShotReserveWorker> m_EveryDirectionShotReserveWorkerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_Ex353EffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_DeadEndStartVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_DeadEndFinishVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_SpawnShieldVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NextPlayVoiceSpawnShieldTime;
    
    ATresEnemyPawn_e_ex353(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void ThornWildDanceSendEvent(UObject* WorldContextObject, ETresEnemyEx353ThornWildDanceEvent EventType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDebugFnishBlow(bool bEnable);
    
    UFUNCTION()
    void OnDtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable)
    bool IsThornBeamMoveShield();
    
    UFUNCTION(BlueprintCallable)
    bool IsThornBeamLoopCancel();
    
    UFUNCTION(BlueprintCallable)
    bool IsHitAerialComboAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsDuringThornWildDance();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugFnishBlow();
    
    UFUNCTION(BlueprintCallable)
    int32 GetShieldNum();
    
    UFUNCTION(BlueprintCallable)
    void GetShieldList(TArray<AActor*>& OutList);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCenterActor();
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackGuarded();
    
    UFUNCTION(BlueprintCallable)
    void BP_FinishThornWildDance();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndHandCharging();
    
};

