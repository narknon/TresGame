#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntitySequenceConditionalAction.h"
#include "TresLevelEntitySequence.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequence : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresLevelEntitySequenceConditionalAction> m_ConditionalActions;
    
    UTresLevelEntitySequence();
};

