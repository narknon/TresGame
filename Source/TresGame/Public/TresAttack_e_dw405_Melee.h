#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_dw405_Base.h"
#include "TresAttack_e_dw405_Melee.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_dw405_Melee : public UTresAttack_e_dw405_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpeedAutoCorrectionRate;
    
public:
    UTresAttack_e_dw405_Melee();
};

