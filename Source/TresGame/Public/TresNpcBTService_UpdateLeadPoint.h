#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTService_UpdateLeadPoint.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTService_UpdateLeadPoint : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_LeadTarget;
    
    UTresNpcBTService_UpdateLeadPoint();
};

