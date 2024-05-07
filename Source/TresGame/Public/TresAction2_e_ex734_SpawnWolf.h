#pragma once
#include "CoreMinimal.h"
#include "WolfSpawnInfo_e_ex734.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex734_SpawnWolf.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex734_SpawnWolf : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWolfSpawnInfo_e_ex734 m_WolfSpawnInfo;
    
    UTresAction2_e_ex734_SpawnWolf();
};

