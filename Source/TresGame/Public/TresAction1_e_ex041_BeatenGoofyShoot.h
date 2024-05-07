#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex041_BeatenGoofyShoot.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex041_BeatenGoofyShoot : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_Immortal: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DieEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BreakBodyTime;
    
public:
    UTresAction1_e_ex041_BeatenGoofyShoot();
};

