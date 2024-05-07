#pragma once
#include "CoreMinimal.h"
#include "ETresStateID.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIILPawnBase.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract, Blueprintable)
class ATresEnemyXIIILPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableRevengeChain: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_RevengeChainBaseDataTableIDNameList;
    
    ATresEnemyXIIILPawnBase(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION()
    void OnDtorStateEvent_XIIIL(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerStyleFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerShootLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDisneyMagic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerAttractionFlow() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableRevengeChain() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRevengeChainNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastWaterCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastThunderCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastFireCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastCureCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastBlizzardCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastAttackMagicCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastAeroCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCenterLocation() const;
    
};

