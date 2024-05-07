#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_And.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_And : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTresLevelEntitySequenceCondition*> m_Conditions;
    
    UTresLevelEntitySequenceCondition_And();
};

