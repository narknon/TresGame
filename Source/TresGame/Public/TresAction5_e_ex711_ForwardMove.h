#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex711_ForwardMove.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction5_e_ex711_ForwardMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_MoveAddSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_MoveMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_MoveHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UpMoveSpeed;
    
public:
    UTresAction5_e_ex711_ForwardMove();
};

