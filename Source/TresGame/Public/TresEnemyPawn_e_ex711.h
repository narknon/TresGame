#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex711.generated.h"

class UCurveFloat;
class ATresProjectileBase;
class ATresGimmick_e_ex711_PhysicsActorManager;
class USQEX_ParticleAttachDataAsset;
class UTresSkeletalMeshComponent;
class AActor;
class UParticleSystemComponent;
class UTresParam_e_ex711;
class UParticleSystem;
class AStaticMeshActor;
class ATresEnemyPawn_e_ex711_Head;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex711 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_RadioTowerOpenCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_RadioTowerCloseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGimmick_e_ex711_PhysicsActorManager> m_pro_PhysicsActorManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGimmick_e_ex711_PhysicsActorManager* m_PhysicsActorManager;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_MissileArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pWeatherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_WeatherFirstEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_WeatherSecondEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_WeatherThirdEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresParam_e_ex711> m_CommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_PhysicsActorResetEff;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_PhysicsActorResetEffData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pPlayerPushCollActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex711_Head> m_HeadPawnClass;
    
public:
    ATresEnemyPawn_e_ex711(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SetCommonCounterZero();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerFloorBoss();
    
    UFUNCTION(BlueprintCallable)
    bool IsOutputRise();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalMissileMotBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadioTowerRotXRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadioTowerRFRotX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadioTowerRBRotX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadioTowerLFRotX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadioTowerLBRotX() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerHopActorGroupNo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerAthleticFlowGroupNo();
    
    UFUNCTION(BlueprintCallable)
    float GetOutputRiseTimer();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCommonCounter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAntennaRotRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAntennaRotR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAntennaRotL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAntennaRot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimSlotHeadBlendRate() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugOpenRadioTower();
    
    UFUNCTION(BlueprintCallable)
    void DebugCloseRadioTower();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddCommonCounter();
    
};

