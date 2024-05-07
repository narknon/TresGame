#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BeginSimulationDefaultDeltaSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndSimulationDefaultDeltaSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyToChildren;
    
    UTresAnimNotifyState_KBD_ChangeHighFpsEvaluationSimulationDefaultDeltaSeconds();
};

