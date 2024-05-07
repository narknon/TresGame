#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex771.generated.h"

class ATresProjectileGenerator_e_ex771_FlareTornado;
class ATresProjectileGenerator_e_ex771_EncloseFlare;
class ATresProjectileGenerator_e_ex771_LivelyFlarePillar;
class ATresCameraNormal;
class ATresActor_e_ex771_HvnEnvEffect;
class ATresProjectileGenerator_e_ex771_EncloseFlareHvn;
class ATresProjectileGenerator_e_ex771_FlareShot;
class ATresActor_e_ex771_Updraft;
class ATresProjectileGenerator_e_ex771_FlareShotHvn;
class ATresProjectileGenerator_e_ex771_FlareShotTornado;
class ATresActor_e_ex771_UpdraftEffect;
class USQEX_ParticleAttachDataAsset;
class AStaticMeshActor;
class APawn;
class UTresParam_e_ex771_TerrainCrushing;
class ATresProjectile_e_ex771_HeavenlyPillar;
class ATresProjectile_e_ex771_FlarePillarOmen;
class UTresParam_e_ex771_HeavenlyPillar;
class USoundBase;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex771 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex771_EncloseFlare> m_pro_EncloseFlareGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex771_EncloseFlareHvn> m_pro_EncloseFlareHvnGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareShot> m_pro_FlareShotGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareShotHvn> m_pro_FlareShotHvnGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareShotTornado> m_pro_FlareShotTornadoGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex771_FlareTornado> m_pro_FlareTornadoGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileGenerator_e_ex771_LivelyFlarePillar> m_pro_LivelyFlarePillarGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex771_UpdraftEffect> m_pro_UpdraftEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex771_HvnEnvEffect> m_pro_HvnEnvEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex771_UpdraftEffect> m_pro_bt04UpdraftEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> m_pro_HeavenlyPillarCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_PCEffDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_pAtkPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex771_EncloseFlare* m_EncloseFlareGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex771_EncloseFlareHvn* m_EncloseFlareHvnGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex771_FlareShot* m_FlareShotGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex771_FlareShotHvn* m_FlareShotHvnGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex771_FlareShotTornado* m_FlareShotTornadoGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex771_FlareTornado* m_FlareTornadoGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresParam_e_ex771_TerrainCrushing> m_TerrainCrushingParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex771_HeavenlyPillar* m_HeavenlyPillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex771_FlarePillarOmen* m_AimFlarePillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileGenerator_e_ex771_LivelyFlarePillar* m_LivelyFlarePillarGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex771_Updraft* m_HeavenlyUpdraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresParam_e_ex771_HeavenlyPillar> m_HeavenlyPillarParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresParam_e_ex771_HeavenlyPillar> m_HeavenlyPillarBT04Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex771_UpdraftEffect* m_HvnUpdraftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex771_HvnEnvEffect* m_HvnEnvEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex771_UpdraftEffect* m_bt04UpdraftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_pPlFloorColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> m_pro_PlFloorCollClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_WarpVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_HvnFlareShotVoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpVoiceDisableTime;
    
public:
    ATresEnemyPawn_e_ex771(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartUpdraftEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetEncloseFlareHitTime(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool RedyHeavenlyPillarPhase4();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartFlareTornadoEscape();
    
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
    bool IsEncloseFlare();
    
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
    
};

