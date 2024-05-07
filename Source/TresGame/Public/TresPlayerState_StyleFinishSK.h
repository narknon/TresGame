#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishSK.generated.h"

class ATresStylePawnSKChandelier;

UCLASS(Blueprintable)
class UTresPlayerState_StyleFinishSK : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresStylePawnSKChandelier* m_pChandelier;
    
public:
    UTresPlayerState_StyleFinishSK();
};

