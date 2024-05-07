#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceConditionalAction.generated.h"

class UTresLevelEntitySequenceCondition;
class UTresLevelEntitySequenceAction;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLevelEntitySequenceConditionalAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UTresLevelEntitySequenceCondition* m_Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UTresLevelEntitySequenceAction* m_Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Abandonable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLevelEntitySequenceCondition* m_AbandonCondition;
    
    FTresLevelEntitySequenceConditionalAction();
};

