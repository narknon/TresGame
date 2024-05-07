#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Sequence.generated.h"

class UTresLevelEntitySequence;

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Sequence : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLevelEntitySequence* m_Sequence;
    
    UTresLevelEntitySequenceAction_Sequence();
};

