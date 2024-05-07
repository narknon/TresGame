#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresDecoratorValueModifierMethod.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_OverrideBlackboardFloatValueModifier.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_OverrideBlackboardFloatValueModifier : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDecoratorValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Value;
    
    UTresBTDecorator_OverrideBlackboardFloatValueModifier();
};

