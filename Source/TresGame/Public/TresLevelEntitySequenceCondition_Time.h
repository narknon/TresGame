#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_Time.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Time : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RandMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RandMax;
    
    UTresLevelEntitySequenceCondition_Time();
};

