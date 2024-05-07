#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "TresAction_e_ex357_ActionInterface.h"
#include "TresAction_e_ex357_Base.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class UTresAction_e_ex357_Base : public UTresAction_XIIILB_Base, public ITresAction_e_ex357_ActionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_AnimStartTimeList;
    
public:
    UTresAction_e_ex357_Base();
    
    // Fix for true pure virtual functions not being implemented
};

