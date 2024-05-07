#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAI_EBP_PhaseChangeDelegate.h"
#include "GameplayTagContainer.h"
#include "TresAIEventBattlePoint.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresAIEventBattlePoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_EBP_PhaseChange OnPhaseChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseBattlePlayerEmotionManager;
    
    ATresAIEventBattlePoint(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetPhaseTag(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhaseTag(const FGameplayTag& InTag) const;
    
};

