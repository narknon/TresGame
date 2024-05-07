#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack4_n_ex010_FigaDive.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_n_ex010_FigaDive : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDiveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEndTime;
    
    UTresAttack4_n_ex010_FigaDive();
};

