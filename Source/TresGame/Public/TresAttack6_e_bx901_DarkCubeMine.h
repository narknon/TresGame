#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "BX901_DarkCubeMineSpawnInfo.h"
#include "TresAttack6_e_bx901_DarkCubeMine.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack6_e_bx901_DarkCubeMine : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_DarkCubeMineSpawnInfo m_ProjSpawnInfo;
    
    UTresAttack6_e_bx901_DarkCubeMine();
};

