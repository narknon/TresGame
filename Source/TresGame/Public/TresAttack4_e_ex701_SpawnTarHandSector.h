#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_SpawnTarHandBase.h"
#include "TresAttack4_e_ex701_SpawnTarHandSector.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex701_SpawnTarHandSector : public UTresAttack_e_ex701_SpawnTarHandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UpdateTargetLocationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_CriteriaEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CriteriaEQSIntervalTime;
    
public:
    UTresAttack4_e_ex701_SpawnTarHandSector();
};

