#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRMickeyChain.h"
#include "TresPlayerState_FRMickeyChain.generated.h"

class ATresEnemyPawn_e_dw401;

UCLASS(Blueprintable)
class UTresPlayerState_FRMickeyChain : public UTresCharState_FRMickeyChain {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_dw401* m_pDevilWavePawn;
    
public:
    UTresPlayerState_FRMickeyChain();
};

