#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresCoopAction1_e_ex202_Absorption.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAction1_e_ex202_Absorption : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AppearAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* m_JumpStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_JumpLoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckAngle;
    
public:
    UTresCoopAction1_e_ex202_Absorption();
};

