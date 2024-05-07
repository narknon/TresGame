#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMAriel.h"
#include "TresPlayerState_DMAriel.generated.h"

class ATresDisneyMagicPawnAriel;

UCLASS(Blueprintable)
class UTresPlayerState_DMAriel : public UTresCharState_DMAriel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresDisneyMagicPawnAriel* m_pObj;
    
    UTresPlayerState_DMAriel();
};

