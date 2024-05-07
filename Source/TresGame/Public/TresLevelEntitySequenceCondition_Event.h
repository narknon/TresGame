#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_Event.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Event : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EventName;
    
    UTresLevelEntitySequenceCondition_Event();
};

