#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_Action.h"
#include "TresBTTask_e_bx901_ResetActionKey.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_e_bx901_ResetActionKey : public UTresBTTask_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActionKeName;
    
    UTresBTTask_e_bx901_ResetActionKey();
};

