#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresLgRxReactionData.h"
#include "TresLgRxPhaseData.h"
#include "ETresChrUniqueID.h"
#include "TresLgRxManager.generated.h"

class USoundBase;
class UParticleSystem;
class ATresLgRxPawnBase;
class ATresCameraNormal;
class ATresProjectileBase;
class ATresPlayerControllerBase;
class UParticleSystemComponent;
class AEmitterCameraLensEffectBase;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresLgRxManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresLgRxPawnBase>> m_AssetsLgF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresLgRxPawnBase>> m_AssetsLgB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresLgRxPawnBase>> m_AssetsRx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> m_AssetsCameraNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_AssetsProjGuardCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectGuardLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectAttackRelfect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectAttackSpark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectLgHeavyEndOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectLgHeavyEndAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectLgRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectRushGuardHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectKeyHole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AssetEffectBgLens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_AssetVoiceMickey1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_AssetVoiceMickey2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Param_LgMaxHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_GuardTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_GuardStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_CmdPointGuardCounterAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_CmdPointGuardCounterOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_RushStartActionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Param_FocusChrNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_GameClearGameSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresLgRxReactionData> m_ReactData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresLgRxPhaseData> m_PhaseData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerControllerBase* m_PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresLgRxPawnBase*> m_PawnListLgF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresLgRxPawnBase*> m_PawnListLgB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresLgRxPawnBase*> m_PawnListRx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pGuardEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pRushGuardHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pLgRingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pKeyHoleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEmitterCameraLensEffectBase* m_pBgLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_CameraNoteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresLgRxPawnBase*> m_ReactPawnListLg;
    
public:
    ATresLgRxManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void BP_SpawnLgRingEffect();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFocusLgPawn(ETresChrUniqueID InChrUniqueID);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFocusChangeEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEventEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAllVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void BP_PrepareAppear();
    
    UFUNCTION(BlueprintCallable)
    bool BP_PlayInterruptVoice(ETresChrUniqueID InChrUniqueID, USoundBase* InVoiceAsset, FName InLipAnimName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsPlayInterruptVoice(ETresChrUniqueID InChrUniqueID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCharPawnBase* BP_GetLgPawn(ETresChrUniqueID InChrUniqueID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresChrUniqueID BP_GetFocusLgChrUniqueID() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* BP_GetCameraNote(ETresChrUniqueID InChrUniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_CanSpawnRushCamera() const;
    
};

