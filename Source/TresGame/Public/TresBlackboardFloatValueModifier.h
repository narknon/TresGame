#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "TresBlackboardFloatValueModifier.generated.h"

USTRUCT(BlueprintType)
struct FTresBlackboardFloatValueModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresValueModifierMethod::Type> ValueModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TRESGAME_API FTresBlackboardFloatValueModifier();
};

