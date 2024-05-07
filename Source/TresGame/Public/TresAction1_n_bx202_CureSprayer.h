#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAction1_n_bx202_CureSprayer.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_n_bx202_CureSprayer : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StopDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotTime;
    
    UTresAction1_n_bx202_CureSprayer();
};

