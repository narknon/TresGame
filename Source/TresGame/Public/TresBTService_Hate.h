#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ETresHateModifier.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "TresBTService_Hate.generated.h"

UCLASS(Blueprintable)
class UTresBTService_Hate : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresHateModifier::Type> m_HateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_TargetActor;
    
    UTresBTService_Hate();
};

