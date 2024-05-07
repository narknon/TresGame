#pragma once
#include "CoreMinimal.h"
#include "AITestAttack_Base.h"
#include "AITestAttack_Melee.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UAITestAttack_Melee : public UAITestAttack_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bHitTractionXYStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bHitTractionZUpStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bHitTractionZDownStop: 1;
    
public:
    UAITestAttack_Melee();
};

