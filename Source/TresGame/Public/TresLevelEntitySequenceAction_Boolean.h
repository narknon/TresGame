#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Boolean.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Boolean : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Value;
    
    UTresLevelEntitySequenceAction_Boolean();
};

