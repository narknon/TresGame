#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_SpawnTarHandBase.h"
#include "TresAttack7_e_ex701_SpawnTarHandDispersion.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack7_e_ex701_SpawnTarHandDispersion : public UTresAttack_e_ex701_SpawnTarHandBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_UpdateTargetLocationTime;
    
public:
    UTresAttack7_e_ex701_SpawnTarHandDispersion();
};

