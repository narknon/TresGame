#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "BX901_DarkCubeMineSpawnInfo.h"
#include "TresAttack5_e_bx901_DrakCubeShotMulti.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_bx901_DrakCubeShotMulti : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBX901_DarkCubeMineSpawnInfo> m_ProjSpawnInfoArray;
    
    UTresAttack5_e_bx901_DrakCubeShotMulti();
};

