#pragma once
#include "CoreMinimal.h"
#include "TresCharState_GameOver.h"
#include "TresPlayerState_GameOver.generated.h"

class ATresCameraAnim;

UCLASS(Blueprintable)
class UTresPlayerState_GameOver : public UTresCharState_GameOver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraAnim* m_Camera;
    
public:
    UTresPlayerState_GameOver();
};

