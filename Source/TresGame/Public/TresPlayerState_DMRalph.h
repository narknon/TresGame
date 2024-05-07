#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMRalph.h"
#include "TresPlayerState_DMRalph.generated.h"

class ATresDisneyMagicPawnRalph;
class ATresCameraNormal;

UCLASS(Blueprintable)
class UTresPlayerState_DMRalph : public UTresCharState_DMRalph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresDisneyMagicPawnRalph* m_pObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_Camera;
    
    UTresPlayerState_DMRalph();
};

