#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresFzSnowSlideBaseTask.generated.h"

class ATresPlacePrizeBase;

UCLASS(Abstract, Blueprintable)
class UTresFzSnowSlideBaseTask : public UTresTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainBonusSec_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainBonusCountMax_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainBonusUpRate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainBonusCountSpan_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TreasureGotIndices_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresPlacePrizeBase*> m_storeChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInGameCreate_;
    
    UTresFzSnowSlideBaseTask();
    UFUNCTION(BlueprintCallable)
    void SetSnowCurlingTreasure();
    
    UFUNCTION(BlueprintCallable)
    void SetSnowCurlingScore(int32 Score, float fTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestSnowCurlingResetChain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnowCurlingSavedTreasure(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    ATresPlacePrizeBase* GetStoreChildrenPrize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSnowCurlingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSnowCurlingScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSnowCurlingSavedTreasureCount();
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllPrize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetDummySec(float sec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSetCurrentScore(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    float AddSnowCurlingScore();
    
    UFUNCTION(BlueprintCallable)
    void AddDelayInitializePrize(ATresPlacePrizeBase* pPlz, int32 totalNum, int32 generateNumPerFrame);
    
};

