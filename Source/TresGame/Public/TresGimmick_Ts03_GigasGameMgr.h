#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresUIGigasGameResultRank.h"
#include "ETresUIGigasGameStartSignalType.h"
#include "Engine/LatentActionManager.h"
#include "TresGimmick_Ts03_GigasGameMgr.generated.h"

class UObject;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmick_Ts03_GigasGameMgr : public AActor {
    GENERATED_BODY()
public:
    ATresGimmick_Ts03_GigasGameMgr(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void UnregistGimmickHudMarker(USceneComponent* pComp);
    
    UFUNCTION(BlueprintCallable)
    void UnregistAllGimmickHudMarker();
    
    UFUNCTION(BlueprintCallable)
    void ShowReadyStart(ETresUIGigasGameStartSignalType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeRecord(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetHighScore(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void RegistGimmickHudMarker(USceneComponent* pComp);
    
    UFUNCTION(BlueprintCallable)
    void OpenTitle(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void OpenResult(const UObject* WorldContextObject, float ClearMilliSec, int32 totalScore, ETresUIGigasGameResultRank ClearRank, bool bNewRecord, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClosedUITitle(bool bGameStart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClosedUIResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDebugRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugContinuousChain() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeHud();
    
    UFUNCTION(BlueprintCallable)
    void GetTitleResult(bool& StartGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRecord() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresUIGigasGameResultRank GetDebugRank() const;
    
    UFUNCTION(BlueprintCallable)
    void FinalizeHud();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetSec(float sec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetContinuousChain(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetChain(int32 chain);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearGame();
    
    UFUNCTION(BlueprintCallable)
    void AddAward(const FString& LocalizeKey, int32 Score);
    
};

