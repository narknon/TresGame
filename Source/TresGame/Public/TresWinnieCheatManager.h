#pragma once
#include "CoreMinimal.h"
#include "TresSharedCheatManager.h"
#include "TresWinnieCheatManager.generated.h"

UCLASS(Blueprintable)
class UTresWinnieCheatManager : public UTresSharedCheatManager {
    GENERATED_BODY()
public:
    UTresWinnieCheatManager();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleUnitsVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleUnitsInfoListVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleUnitsCoord();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleUMGDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleRaycastHitResult();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieTogglePlayerUnitDebugInfoVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleDebugFixedCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleBoundLine();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleBombTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieToggleBombInterfereUnits();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSwitchPuzzleForceMode(int32 modeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetLimitTime(float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetIsForbidAutoInvokeCharacterBonus(int32 isForbid);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetDebugInfoBGAlpha(int32 Percentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetComboValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetCharacterBonusInvokedTimesBySingle(int32 Times);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetCharacterBonusInvokedTimesByAdditional(int32 Times);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetCharacterBonusGaugeType(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetCharacterBonusGaugePercentage(int32 Percentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieSetCharacterBonusGaugeAlwaysDecreasable(int32 decreasable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieRandomInvokeBound(int32 isAdditionalInvocation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieRandomInvokeBomb(int32 isAdditionalInvocation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieRandomEarnUnits(int32 earnedUnitsNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieInvokeDecrease(int32 isAdditionalInvocation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieInvokeBoundWithStyleIdx(int32 styleIdx, int32 isAdditionalInvocation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieInvokeBombWithID(int32 unitIDA, int32 unitIDB, int32 unitIDC, int32 Success);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieIncreaseHoneypotGaugeValue(int32 IncreaseValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceSetShootNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceRetry();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceInvokeSameKindRemoving();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceIncrease();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceFailed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceCharacterBonusGaugeMax(int32 isMax);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieForceAutoPlay(int32 shootUnitsNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieEarnUnitsByType(int32 unitTypeID, int32 earnedUnitsNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieChangePlayerUnitType(int32 unitTypeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieAddScorePerTurn(int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieAddScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieAddElapsedTime(float Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieAddCharacterBonusGaugePercentage(int32 Percentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WinnieAddChallengeModeLimitTime(float Time);
    
};

