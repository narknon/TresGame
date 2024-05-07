#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex353_AerialComboBase.h"
#include "TresAttack1_e_ex353_AerialComboMedium.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex353_AerialComboMedium : public UTresAttack1_e_ex353_AerialComboBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RootMotionMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RootMotionMaxScale;
    
    UTresAttack1_e_ex353_AerialComboMedium();
};

