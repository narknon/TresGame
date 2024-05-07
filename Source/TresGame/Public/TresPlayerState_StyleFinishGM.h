#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishGM.generated.h"

class ATresStylePawnGMGate;

UCLASS(Blueprintable)
class UTresPlayerState_StyleFinishGM : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresStylePawnGMGate* m_pGate;
    
public:
    UTresPlayerState_StyleFinishGM();
};

