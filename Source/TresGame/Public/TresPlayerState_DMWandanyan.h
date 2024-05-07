#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMWandanyan.h"
#include "TresPlayerState_DMWandanyan.generated.h"

class ATresDisneyMagicPawnWandanyan;

UCLASS(Blueprintable)
class UTresPlayerState_DMWandanyan : public UTresCharState_DMWandanyan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresDisneyMagicPawnWandanyan* m_pObj;
    
    UTresPlayerState_DMWandanyan();
};

