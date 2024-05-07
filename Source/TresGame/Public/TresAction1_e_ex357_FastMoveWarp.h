#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_Base.h"
#include "TresAction1_e_ex357_FastMoveWarp.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex357_FastMoveWarp : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpInStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableActionAbortWait: 1;
    
public:
    UTresAction1_e_ex357_FastMoveWarp();
};

