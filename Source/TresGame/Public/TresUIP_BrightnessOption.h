#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_BrightnessOption.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_BrightnessOption : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pBrightSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pBrightDecideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pBrightCancelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pBrightDescriptionText;
    
public:
    UTresUIP_BrightnessOption();
};

