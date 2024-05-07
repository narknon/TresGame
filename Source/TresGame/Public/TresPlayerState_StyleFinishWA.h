#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishWA.generated.h"

class ATresStylePawnWATower;

UCLASS(Blueprintable)
class UTresPlayerState_StyleFinishWA : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresStylePawnWATower* m_pTower;
    
public:
    UTresPlayerState_StyleFinishWA();
};

