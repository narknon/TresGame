#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Swaying.h"
#include "TresPlayerState_Swaying.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_Swaying : public UTresCharState_Swaying {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pSwayPawn;
    
    UTresPlayerState_Swaying();
};

