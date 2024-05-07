#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_e_ex044_SetHeightLimit.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_e_ex044_SetHeightLimit : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_HeightLimitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPoleTurnRadius;
    
    UTresBTTask_e_ex044_SetHeightLimit();
};

