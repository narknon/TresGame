#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawn_e_ex731_Base.h"
#include "EX734_FallInfo.h"
#include "DarkRainInfo_e_ex734.h"
#include "TresEnemyPawn_e_ex734.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex734 : public ATresEnemyPawn_e_ex731_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX734_FallInfo m_FallInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDarkRainInfo_e_ex734 m_DarkRainInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iRequiredWolfKillNum;
    
    ATresEnemyPawn_e_ex734(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeGimmickPause(bool bPause);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMyRequiredWolfKillNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMyMaxFallTime();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDarkRainRate(int32 Rate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChangeGimmickPause(bool bPause);
    
};

