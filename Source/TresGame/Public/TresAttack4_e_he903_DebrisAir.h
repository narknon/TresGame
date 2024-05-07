#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "DebrisDetails_e_he903_DebrisAir.h"
#include "TresAttack4_e_he903_DebrisAir.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_he903_DebrisAir : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebrisDetails_e_he903_DebrisAir> m_DebrisDetailArray;
    
    UTresAttack4_e_he903_DebrisAir();
};

