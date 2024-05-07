#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "EX731_DashEffectInfo.h"
#include "TresMove2_e_ex731_Dash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove2_e_ex731_Dash : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBodyReactionResetTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEX731_DashEffectInfo m_DashEffectInfoArray[2];
    
    UTresMove2_e_ex731_Dash();
};

