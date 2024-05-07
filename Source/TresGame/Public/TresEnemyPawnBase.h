#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAIPawnBase.h"
#include "TresEnemyRetryVoiceData.h"
#include "ETresEnemyUniqueID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_FreeFlowKind -FallbackName=ESQEX_FreeFlowKind
#include "ESQEX_FreeFlowKind.h"
#include "RevengeAttacks.h"
#include "ETresEnemyMajorUseID.h"
#include "TresEnemyPawnBase.generated.h"

class UTresAIWeaponComponent;
class UTresEnemyCommonParam;
class ATresEnemyPawnBase;
class UObject;
class USoundBase;
class USQEXSEADSoundReferenceEnumSet;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class TRESGAME_API ATresEnemyPawnBase : public ATresAIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresEnemyPawnBase* EnemyParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawnBase*> EnemyChildren;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyUniqueID m_EnemyUniqueID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_FreeFlowKind m_FreeFlowKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AppearEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DieEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_IdlingBreakWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresEnemyCommonParam> m_EnemyCommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRevengeAttacks> m_RevengeAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresEnemyPawnBase>> m_SpawnEnemyClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableDieBodyPush: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyMajorUseID> m_eMajorUseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyRetryVoiceData> m_RetryVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_PlayerKilledVoiceData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Damage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStuckCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFallenAbyssCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRePopForStuckAndFallenAbyssCheck;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaterEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresAIWeaponComponent* m_AIWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SwirlUpEff;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_YoBindMeshScaleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WallHitIgnorePhysicsObjectMass;
    
    ATresEnemyPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetStuckCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponAttacking() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetGigas() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRevengeAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUserParam(int32 ParamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetUserData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresEnemyUniqueID GetEnemyUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAppearWait() const;
    
};

