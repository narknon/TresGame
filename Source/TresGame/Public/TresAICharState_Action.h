#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresAICharState_Action.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresAICharState_Action : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActionNumber;
    
    UTresAICharState_Action();
};

