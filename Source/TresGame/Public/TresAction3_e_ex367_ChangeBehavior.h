#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex367_ChangeBehavior.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class UTresAction3_e_ex367_ChangeBehavior : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ChangeMine;
    
    UTresAction3_e_ex367_ChangeBehavior();
};

