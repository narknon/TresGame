#pragma once
#include "CoreMinimal.h"
#include "TresCharState_StyleChange.h"
#include "TresPlayerState_StyleChange.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_StyleChange : public UTresCharState_StyleChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UTresPlayerState_StyleChange();
};

