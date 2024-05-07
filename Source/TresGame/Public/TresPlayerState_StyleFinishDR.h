#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishDR.generated.h"

class ATresStylePawnDRClock;

UCLASS(Blueprintable)
class UTresPlayerState_StyleFinishDR : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresStylePawnDRClock* m_pClock;
    
public:
    UTresPlayerState_StyleFinishDR();
};

