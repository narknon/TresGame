#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawn_e_ex731_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex731.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex731 : public ATresEnemyPawn_e_ex731_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_BattleAreaActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSmallDamageTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlowDamageTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ForceStrondDamageAttackIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBlowAsParabolaDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkipBlowLoopAnim;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pBattleAreaActor;
    
public:
    ATresEnemyPawn_e_ex731(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ValidateStep(FVector inRootTransOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutOfBattleArea();
    
};

