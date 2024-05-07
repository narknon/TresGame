#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntitySequenceConditionDistanceSelector.h"
#include "TresLevelEntitySequenceCondition.h"
#include "ETresLevelEntitySequenceConditionDistanceCompare.h"
#include "TresLevelEntitySequenceCondition_Distance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Distance : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresLevelEntitySequenceConditionDistanceCompare> m_Compare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresLevelEntitySequenceConditionDistanceSelector> m_Selector;
    
    UTresLevelEntitySequenceCondition_Distance();
};

