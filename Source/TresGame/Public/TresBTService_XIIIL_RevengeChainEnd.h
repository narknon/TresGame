#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_XIIIL_RevengeChainEnd.generated.h"

UCLASS(Blueprintable)
class UTresBTService_XIIIL_RevengeChainEnd : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableRevengeChainResetImmediate: 1;
    
public:
    UTresBTService_XIIIL_RevengeChainEnd();
};

