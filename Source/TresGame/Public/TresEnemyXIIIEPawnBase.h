#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresEnemyXIIIEPlayVoiceKind.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyXIIIEPawnBase.generated.h"

class ATresEnemyManager_XIIIE;
class USoundBase;

UCLASS(Blueprintable)
class ATresEnemyXIIIEPawnBase : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugActiveSecondAnnihilation: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAreaEPawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyXIIIEPlayVoiceKind m_RevengePlayVoiceKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_RevengeVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyManager_XIIIE> m_ManagerAsset;
    
public:
    ATresEnemyXIIIEPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsStartFirstAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    bool IsMyAnnihilationAttackTurn();
    
    UFUNCTION(BlueprintCallable)
    bool IsLeaderPawn();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    bool IsDuringWarp();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringLeaderChangeOrFatalAttackCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringLeaderChangeCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringFatalAttackCooldown();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugActiveSecondAnnihilation();
    
    UFUNCTION(BlueprintCallable)
    bool IsActivatedFirstAnnihilation();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetLeader(int32 SetLeaderNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool CanUseLeaderChange();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool CanUseFatalAttack();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool CanUseAnnihilation();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool CanStartLeaderChangeOrFatalAttack();
    
};

