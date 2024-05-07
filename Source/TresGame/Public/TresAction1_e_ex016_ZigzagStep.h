#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex016_ZigzagStep.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex016_ZigzagStep : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 m_ZigzagNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckDistance;
    
public:
    UTresAction1_e_ex016_ZigzagStep();
};

