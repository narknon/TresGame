#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_ex357_PhantomBlitzBase.h"
#include "TresAttack3_e_ex357_PhantomBlitzShort.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex357_PhantomBlitzShort : public UTresAttack3_e_ex357_PhantomBlitzBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndAnimRootMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndTargetOvertakeDistance;
    
public:
    UTresAttack3_e_ex357_PhantomBlitzShort();
};

