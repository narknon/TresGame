#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresBadStatusType.h"
#include "TresBTDecorator_BadStatusCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_BadStatusCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBadStatusType m_BadStatus;
    
    UTresBTDecorator_BadStatusCheck();
};

