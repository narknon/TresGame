#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_ScreenFilter.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_ScreenFilter : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_GradationFilter;
    
public:
    UTresUIP_ScreenFilter();
};

