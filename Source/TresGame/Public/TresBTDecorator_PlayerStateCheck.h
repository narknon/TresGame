#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresBTPlayerStateCkeck.h"
#include "TresBTDecorator_PlayerStateCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_PlayerStateCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBTPlayerStateCkeck m_PlayerStateCheck;
    
    UTresBTDecorator_PlayerStateCheck();
};

