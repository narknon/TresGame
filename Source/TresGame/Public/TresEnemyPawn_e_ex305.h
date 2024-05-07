#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex305.generated.h"

class ATresProjectile_e_ex305_WarpArm;
class USoundBase;
class ATresEnemyPawn_e_ex313;
class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectileBase;
class ATresEnemyXIIIAManager;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex305 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFlyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex313* e_ex313Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyXIIIPawnBase* e_ex316Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_PartnerDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_TestPartnerDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BattleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_BattleEndHitPointPer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_ArrowRainSkyEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ArrowRainSkyEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_pArrowRain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex305_WarpArm* m_WarpArmLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex305_WarpArm* m_WarpArmRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_MagazineNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_ClusterShotMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_ArrowRainMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_ClusterShotVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_ClusterShotCoopVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceSocketName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyXIIIAManager> m_pro_XIIIAManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyXIIIAManager* m_XIIIAManager;
    
public:
    ATresEnemyPawn_e_ex305(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsZeroMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsWarpShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsReflectDamageShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsPartnerDead();
    
    UFUNCTION(BlueprintCallable)
    bool IsNormalShotMagazine();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringWalkCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringArrowRainCooldown();
    
    UFUNCTION(BlueprintCallable)
    bool IsClusterShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsArrowRainMagazine();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool CanUseArrowRain();
    
};

