#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresDecoratorVectorValueModifierMethod.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_OverrideBlackboardVectorValueModifier.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_OverrideBlackboardVectorValueModifier : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDecoratorVectorValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseBlackboard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UTresBTDecorator_OverrideBlackboardVectorValueModifier();
};

