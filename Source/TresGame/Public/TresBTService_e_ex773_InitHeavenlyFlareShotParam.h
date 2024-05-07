#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_e_ex773_InitHeavenlyFlareShotParam.generated.h"

UCLASS(Blueprintable)
class UTresBTService_e_ex773_InitHeavenlyFlareShotParam : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartNotify;
    
    UTresBTService_e_ex773_InitHeavenlyFlareShotParam();
};

