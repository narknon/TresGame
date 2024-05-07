#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction7_e_ex761_BattleMemberForceWarpIn.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction7_e_ex761_BattleMemberForceWarpIn : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NotBattleMemberForceWarpInTargetDistance;
    
public:
    UTresAction7_e_ex761_BattleMemberForceWarpIn();
};

