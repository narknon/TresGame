#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresGimmickBxFlashTracerCourse.h"
#include "ETresUIHudBaymaxResult.h"
#include "TresGimmick_Bx_FlashTracerMgr.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmick_Bx_FlashTracerMgr : public AActor {
    GENERATED_BODY()
public:
    ATresGimmick_Bx_FlashTracerMgr(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetHighScore(ETresGimmickBxFlashTracerCourse Course, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void SetClearTime(ETresGimmickBxFlashTracerCourse Course, float Time);
    
    UFUNCTION(BlueprintCallable)
    void OpenResult(float Time, int32 Score, int32 Bonus, ETresUIHudBaymaxResult rankKind, bool RecordTime, bool RecordScore, ETresGimmickBxFlashTracerCourse Course);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClosedResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDebugRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighScore(ETresGimmickBxFlashTracerCourse Course) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresUIHudBaymaxResult GetDebugRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClearTime(ETresGimmickBxFlashTracerCourse Course) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetSec(float sec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugForceFinish();
    
};

