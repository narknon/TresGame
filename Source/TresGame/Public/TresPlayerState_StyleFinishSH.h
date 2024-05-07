#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_StyleFinish.h"
#include "TresPlayerState_StyleFinishSH.generated.h"

class ATresCameraNormal;
class ATresStylePawnSHPegasus;
class ATresStylePawnSHChariot;
class ATresCameraFix;
class ATresStylePawnSHFryingpan;

UCLASS(Blueprintable)
class UTresPlayerState_StyleFinishSH : public UTresPlayerState_StyleFinish {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresStylePawnSHPegasus* m_pPegasus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresStylePawnSHChariot* m_pChariot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraFix* m_CameraFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresStylePawnSHFryingpan* m_pFryingpan;
    
public:
    UTresPlayerState_StyleFinishSH();
};

