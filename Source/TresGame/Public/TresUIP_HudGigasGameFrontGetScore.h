#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_HudGigasGameFrontGetScore.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudGigasGameFrontGetScore : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_GetScoreAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_GetScoreDigitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_GetScoreNumber;
    
public:
    UTresUIP_HudGigasGameFrontGetScore();
};

