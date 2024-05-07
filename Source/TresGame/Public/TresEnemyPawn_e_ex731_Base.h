#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex731_Base.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex731_Base : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    ATresEnemyPawn_e_ex731_Base(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    static void OnReceiveRemoteEvent(FName inEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollisionChange(bool inEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool NotifyIceRevengerDamage(float inDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNowHiding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWolfNum() const;
    
};

