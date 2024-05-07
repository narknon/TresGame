#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFMerryGoRound.h"
#include "TresPlayerState_AFMerryGoRound.generated.h"

class ATresAttractionPawnMerryGoRound;

UCLASS(Blueprintable)
class UTresPlayerState_AFMerryGoRound : public UTresCharState_AFMerryGoRound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresAttractionPawnMerryGoRound* m_pObj;
    
public:
    UTresPlayerState_AFMerryGoRound();
};

