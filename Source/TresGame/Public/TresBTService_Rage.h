#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ETresValueModifierMethod.h"
#include "TresBTService_Rage.generated.h"

UCLASS(Blueprintable)
class UTresBTService_Rage : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ValueRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Interval;
    
    UTresBTService_Rage();
};

