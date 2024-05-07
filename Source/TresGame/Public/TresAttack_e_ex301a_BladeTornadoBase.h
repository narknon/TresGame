#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresBladeTornadoInfo_e_ex301a.h"
#include "TresAttack_e_ex301a_BladeTornadoBase.generated.h"

class ATresProjectile_XIIIE_BladeTornadoForTackle;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex301a_BladeTornadoBase : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_XIIIE_BladeTornadoForTackle> m_BladeTornadoForTackleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBladeTornadoInfo_e_ex301a m_Phase1Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBladeTornadoInfo_e_ex301a m_Phase2Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBladeTornadoInfo_e_ex301a m_Phase3Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MissCameraExcludeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsSpawnMaxNum: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsRush: 1;
    
    UTresAttack_e_ex301a_BladeTornadoBase();
};

