#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickCA_TreeBase.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickCA_TreeBase : public AActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnPrizeNumOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnPrizeIntervalOnHit;
    
public:
    ATresGimmickCA_TreeBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StopPrizeShower();
    
    UFUNCTION(BlueprintCallable)
    void StartPrizeShower(float InInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartingPrizeShower() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

