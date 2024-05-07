#pragma once
#include "CoreMinimal.h"
#include "TresCharState_DMStitch.h"
#include "TresPlayerState_DMStitch.generated.h"

class ATresDisneyMagicPawnStitch;
class ATresCameraForceLockon;

UCLASS(Blueprintable)
class UTresPlayerState_DMStitch : public UTresCharState_DMStitch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresDisneyMagicPawnStitch* m_pObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraForceLockon* m_Camera;
    
    UTresPlayerState_DMStitch();
};

