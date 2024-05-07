#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Idle.h"
#include "TresPlayerState_Idle.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_Idle : public UTresCharState_Idle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pLookAtTargetPawn;
    
    UTresPlayerState_Idle();
};

