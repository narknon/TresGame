#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_BlackboardValueModifierBase.h"
#include "ETresArithmeticModifierSource.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardArithmeticModifier.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_BlackboardArithmeticModifier : public UTresBTTask_BlackboardValueModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresArithmeticModifierSource::Type> ValueTypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBlackboardB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePropertyOrFunctionB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLiteralB: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKeyB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyNameB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LiteralValueB;
    
    UTresBTTask_BlackboardArithmeticModifier();
};

