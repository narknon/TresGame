#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresThornWavingDummyMeshAttachInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex721.generated.h"

class ATresSkeletalMesh_e_ex721_WoodsJail;
class ATresSkeletalMesh_e_ex721_ThornWavingDummyActor;
class ATresActorManager_e_ex725;
class AActor;
class ATresProjectileBase;
class USQEX_ParticleAttachDataAsset;
class ATresAIPoint_e_ex721_WarpDestination;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex721 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresSkeletalMesh_e_ex721_WoodsJail> m_WoodsJailAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AddTowerYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TowerOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TowerLimitLockOnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TowerOffLockOnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SendDarkSceneEventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SendBrightSceneEventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DoReturnNormalModePearsentHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitEyeRotateSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_LandScapeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_TowerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresSkeletalMesh_e_ex721_WoodsJail*> m_WoodsJails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ThornChainMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActorManager_e_ex725* m_ThornChainManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresSkeletalMesh_e_ex721_ThornWavingDummyActor> m_ThornWavingDummyMeshAsset;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresThornWavingDummyMeshAttachInfo m_ThornWavingDummyMeshAttachInfo[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BlowProjectileAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_TossProjectileAsset;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    ATresSkeletalMesh_e_ex721_ThornWavingDummyActor* m_ThornWavingDummyMeshActors[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresAIPoint_e_ex721_WarpDestination* m_WarpDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_CallBombProjectile;
    
    ATresEnemyPawn_e_ex721(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowerMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReturnNormalMode() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetExistThornChainNum();
    
    UFUNCTION(BlueprintCallable)
    float GetEscapeLastWoodsJailElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCaptureTargetThornChainNum();
    
    UFUNCTION(BlueprintCallable)
    float GetCapturedPlayerElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDashNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetEyeRotateValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetEyeRotateRateValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimOffsetRate() const;
    
};

