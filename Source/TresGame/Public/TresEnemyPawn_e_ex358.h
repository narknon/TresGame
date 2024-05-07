#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILBCoopPawnBase.h"
#include "TresEnemyNotifyInterface_e_ex358.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyEnvQueryBindParamFloat_ex358.h"
#include "TresEnemyPawn_e_ex358.generated.h"

class UEnvQuery;
class UTresProjectileManagerComponent_e_ex358_Jinrai;
class ATresEnemyPawn_e_ex358;
class UParticleSystem;
class UTresActionDefinitionBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex358 : public ATresEnemyXIIILBCoopPawnBase, public ITresEnemyNotifyInterface_e_ex358 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresProjectileManagerComponent_e_ex358_Jinrai* MyProjectileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex358> m_AvatarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAvatar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableSyncAttractionHitPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WildDanceDisappearDamageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WildDanceDisappearDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WildDanceWarpOutDisableLockonDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WildDanceDamageDisableLockonStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableWildDaanceChangeManualLockonOtherAvatar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThunderStepParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThunderStepEndParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThunderStepAuraParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ThunderStepEffectColorChangeInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_ThunderStepEffectColorChangeStartColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_ThunderStepEffectColorChangeEndColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresActionDefinitionBase>> m_AvatarWildDanceActionClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_AvatarWildDanceLandEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_AvatarWildDanceAirEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEnvQueryBindParamFloat_ex358> m_FindAttackLocationBindParamFloatList;
    
public:
    ATresEnemyPawn_e_ex358(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDebugAvatarWildDanceIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsJinraiBeforeAttackHit() const;
    
    UFUNCTION(BlueprintCallable)
    void EndWildDanceDarkMode();
    
    
    // Fix for true pure virtual functions not being implemented
};

