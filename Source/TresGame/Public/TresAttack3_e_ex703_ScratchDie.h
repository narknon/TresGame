#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex703_Base.h"
#include "TresAttack3_e_ex703_ScratchDie.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex703_ScratchDie : public UTresAttack_e_ex703_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
public:
    UTresAttack3_e_ex703_ScratchDie();
};

