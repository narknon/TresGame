#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_UseItem.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresCharState_UseItem : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UTresCharState_UseItem();
};

