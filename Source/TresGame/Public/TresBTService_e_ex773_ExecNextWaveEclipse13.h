#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_e_ex773_ExecNextWaveEclipse13.generated.h"

UCLASS(Blueprintable)
class UTresBTService_e_ex773_ExecNextWaveEclipse13 : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReserveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyJustInCase;
    
    UTresBTService_e_ex773_ExecNextWaveEclipse13();
};

