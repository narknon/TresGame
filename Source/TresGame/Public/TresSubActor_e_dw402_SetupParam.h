#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSubActor_e_dw402_SetupParam.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresSubActor_e_dw402_SetupParam : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShadowEffectLimitRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_DevilRiseLimitRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_DevilDiveLimitRadius;
    
    ATresSubActor_e_dw402_SetupParam(const FObjectInitializer& ObjectInitializer);
};

