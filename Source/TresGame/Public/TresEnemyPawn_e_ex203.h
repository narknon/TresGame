#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex203.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex203 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SuctionAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EatCheckComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CoopTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_CoopAttachSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawnBase> m_CoopAppearPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsMediumSize: 1;
    
public:
    ATresEnemyPawn_e_ex203(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnableIKinema(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndAttackCoopPawns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlapMotionBlendRate() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSpawnCoopPawn();
    
};

