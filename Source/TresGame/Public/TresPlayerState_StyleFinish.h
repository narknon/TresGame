#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_Attack.h"
#include "TresPlayerState_StyleFinish.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_StyleFinish : public UTresPlayerState_Attack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pCatchPawn;
    
    UTresPlayerState_StyleFinish();
};

