#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_IsInViewport.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_IsInViewport : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Target;
    
    UTresBTDecorator_IsInViewport();
};

