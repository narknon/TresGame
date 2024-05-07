#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemy_e_ex054_BattleStyle.h"
#include "TresAction7_e_ex054_Subsided.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction7_e_ex054_Subsided : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemy_e_ex054_BattleStyle> m_pro_BattleStyle;
    
    UTresAction7_e_ex054_Subsided();
};

