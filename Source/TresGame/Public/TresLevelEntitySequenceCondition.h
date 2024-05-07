#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntitySequenceCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MonitoringGroup;
    
    UTresLevelEntitySequenceCondition();
};

