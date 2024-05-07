#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_he902_Hate.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_he902_Hate : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLoopTime;
    
    UTresAction1_e_he902_Hate();
};

