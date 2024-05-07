#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresCoopRunningStatus.h"
#include "TresBTDecorator_CoopStatusCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_CoopStatusCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCoopRunningStatus m_CoopStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferenceFromTeam;
    
    UTresBTDecorator_CoopStatusCheck();
};

