#pragma once
#include "CoreMinimal.h"
#include "TresGameModeBase.h"
#include "TresGameMode.generated.h"

class UTresGameModeLoadAsset;
class ATresPlayerStart;
class ATresGameState;
class ATresAtkCollManager;
class ATresProjectileManager;
class ATresAICoordinator;
class UTresNavMapShowManager;
class UObject;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ATresGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresGameState* m_pTresGameState;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresAtkCollManager* m_AtkCollManager;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresProjectileManager* m_ProjectileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGameModeLoadAsset* m_LoadAsset;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresAICoordinator* m_AICoordinator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresPlayerStart* m_AutoSavePoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsShowMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsWakeupShowMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_StopShowMapNameSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresNavMapShowManager* m_pNavMapShowManager;
    
public:
    ATresGameMode(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresAICoordinator* GetAICoordinator() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowTresCollManagerInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowProjectileManagerInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowAtkCollManagerInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableHitStop(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OverrideMapJumpPath(UObject* From, int32 InFadeKind, const FName& InMapName, const FName& InPlayerStartTag, FName& OutMapName, FName& OutPlayerStartTag);
    
};

