#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_InterpretPlayerIntent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UTresBTService_InterpretPlayerIntent : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PlayerIntentWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NotMovingTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PlayerNotMovingTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ForwardPreferencePlayerNotMovingCurve;
    
    UTresBTService_InterpretPlayerIntent();
};

