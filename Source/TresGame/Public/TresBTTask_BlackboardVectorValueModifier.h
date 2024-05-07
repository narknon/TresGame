#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_BlackboardValueModifierBase.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardVectorValueModifier.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_BlackboardVectorValueModifier : public UTresBTTask_BlackboardValueModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UTresBTTask_BlackboardVectorValueModifier();
};

