#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
#include "TresAction5_e_ex358_RunAction.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, HideDropdown)
class UTresAction5_e_ex358_RunAction : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_RunStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_RunLoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_RunEndLeftAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_RunEndRightAnimData;
    
public:
    UTresAction5_e_ex358_RunAction();
};

