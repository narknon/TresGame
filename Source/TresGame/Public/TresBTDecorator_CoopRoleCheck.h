#pragma once
#include "CoreMinimal.h"
#include "ETresCoopRole.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_CoopRoleCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_CoopRoleCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCoopRole m_CoopRole;
    
    UTresBTDecorator_CoopRoleCheck();
};

