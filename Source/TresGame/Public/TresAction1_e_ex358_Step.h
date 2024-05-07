#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "ETresEnemyStepDirectionType_e_ex358.h"
#include "TresAction1_e_ex358_Step.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex358_Step : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyStepDirectionType_e_ex358> m_DirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RootMotionScaleXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableStartTargetLocation: 1;
    
public:
    UTresAction1_e_ex358_Step();
};

