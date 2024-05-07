#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex732_MirageWolfAppear.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex732_MirageWolfAppear : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAppearAnim;
    
    UTresAction1_e_ex732_MirageWolfAppear();
};

