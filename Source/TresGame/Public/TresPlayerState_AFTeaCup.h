#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFTeaCup.h"
#include "TresPlayerState_AFTeaCup.generated.h"

class ATresAttractionPawnTeaCup;
class ATresCharPawnBase;
class ATresCameraTeaCup;
class ATresCameraNormal;

UCLASS(Blueprintable)
class UTresPlayerState_AFTeaCup : public UTresCharState_AFTeaCup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    ATresAttractionPawnTeaCup* m_pCup[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraTeaCup* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_PuddingCamera;
    
    UTresPlayerState_AFTeaCup();
};

