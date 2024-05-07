#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "ETresEnemyXIIIPhaseType.h"
#include "TresDecoPartsComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresScreenEffectPriority -FallbackName=ETresScreenEffectPriority
#include "TresEnemyPawn_e_ex773.generated.h"

class ATresProjectileGenerator_e_ex773_LivelyFlarePillar;
class ATresProjectileGenerator_e_ex773_FlareShotHvn;
class ATresProjectileGenerator_e_ex773_EncloseFlare;
class ATresActor_e_ex773_UpdraftEffect;
class ATresProjectileGenerator_e_ex773_EncloseFlareHvn;
class ATresProjectileGenerator_e_ex773_FlareShot;
class USoundBase;
class ATresProjectileGenerator_e_ex773_FlareShotTornado;
class ATresProjectileGenerator_e_ex773_FlareTornado;
class ATresActor_e_ex773_HvnEnvEffect;
class ATresProjectile_e_ex773_SwordJoint;
class USQEX_ParticleAttachDataAsset;
class UTresEnemyPawn_e_ex773_EclipseManagerComponent;
class UTresParam_e_ex773_Common;
class UTresParam_e_ex773_Eclipse13;
class UTresParam_e_ex773_TerrainCrushing;
class ATresProjectile_e_ex773_HeavenlyPillar;
class ATresProjectile_e_ex773_FlarePillarOmen;
class ATresActor_e_ex773_Updraft;
class ATresCameraNormal;
class UTresParam_e_ex773_HeavenlyPillar;
class AStaticMeshActor;
class ATresEnemyPawnBase;
class AActor;
class UTresStateBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex773 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex773_EncloseFlare> m_pro_EncloseFlareGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex773_EncloseFlareHvn> m_pro_EncloseFlareHvnGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareShot> m_pro_FlareShotGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareShotHvn> m_pro_FlareShotHvnGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareShotTornado> m_pro_FlareShotTornadoGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex773_FlareTornado> m_pro_FlareTornadoGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex773_LivelyFlarePillar> m_pro_LivelyFlarePillarGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex773_UpdraftEffect> m_pro_UpdraftEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex773_HvnEnvEffect> m_pro_HvnEnvEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex773_UpdraftEffect> m_pro_bt04UpdraftEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex773_SwordJoint> SwordJointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_PCEffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventNameForFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitZ_ForOneHeart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEnemyPawn_e_ex773_EclipseManagerComponent* EclipseManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresParam_e_ex773_Common* CommonParameterAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresParam_e_ex773_Eclipse13* ParameterEclipse13_Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SwordJointForceAnimationNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex773_EncloseFlareHvn* m_EncloseFlareHvnGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex773_FlareShot* m_FlareShotGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex773_FlareShotHvn* m_FlareShotHvnGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex773_FlareShotTornado* m_FlareShotTornadoGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex773_FlareTornado* m_FlareTornadoGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresParam_e_ex773_TerrainCrushing> m_TerrainCrushingParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex773_HeavenlyPillar* m_HeavenlyPillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex773_FlarePillarOmen* m_AimFlarePillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex773_LivelyFlarePillar* m_LivelyFlarePillarGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex773_Updraft* m_HeavenlyUpdraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresParam_e_ex773_HeavenlyPillar> m_HeavenlyPillarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresParam_e_ex773_HeavenlyPillar> m_HeavenlyPillarBT04Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex773_UpdraftEffect* m_HvnUpdraftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex773_HvnEnvEffect* m_HvnEnvEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex773_UpdraftEffect* m_bt04UpdraftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pPlFloorColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_WarpVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_HvnFlareShotVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeWarpVoiceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeFlarePillarVoiceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpVoiceDisableTime;
    
public:
    ATresEnemyPawn_e_ex773(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartUpdraftEffect();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPhaseDifferenceActor(TSubclassOf<ATresEnemyPawnBase> PawnClass, ETresEnemyXIIIPhaseType phase);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficientDefault(float InTransitionTime, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetEncloseFlareHitTime(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool RedyHeavenlyPillarPhase4();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartFlareTornadoEscape();
    
    UFUNCTION(BlueprintCallable)
    bool IsSecondBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase4();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase3();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase2();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillarPhase1();
    
    UFUNCTION(BlueprintCallable)
    bool IsHeavenlyPillar();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlareTornadoPhase2();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlareTornadoPhase1();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlareTornado();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsEncloseFlare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEclipse13WaveComplete();
    
    UFUNCTION(BlueprintCallable)
    bool IsEclipse13();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFlareTornadoNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFlareShotTornadoNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFlareShotNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEncloseFlareNum();
    
    UFUNCTION(BlueprintCallable)
    float GetEncloseFlareHitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresEnemyPawn_e_ex773_EclipseManagerComponent* GetEclipseManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEclipse13NowWaveNum();
    
    UFUNCTION(BlueprintCallable)
    void ExecNextWaveEclipse13(float ReserveTime, bool bNotifyJustInCase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StepHeavenlyPillarExplosion(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StepHeavenlyPillar(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StepEclipse13(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_IsCancelStateFRPromiseWings(UTresStateBase* State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ExecutePromiseWings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CreateHeavenlyPillarExplosionEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CreateHeavenlyPillarEffect();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeTransparentMode(bool mode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BpDestroyEquipment();
    
};

