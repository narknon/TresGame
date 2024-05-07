#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMSimba.h"
#include "TresPlayerState_DMSimba.generated.h"

class ATresDisneyMagicPawnSimba;
class ATresCameraDMSimba;

UCLASS(Blueprintable)
class UTresPlayerState_DMSimba : public UTresCharState_DMSimba {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresDisneyMagicPawnSimba* m_pObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraDMSimba* m_Camera;
    
    UTresPlayerState_DMSimba();
};

