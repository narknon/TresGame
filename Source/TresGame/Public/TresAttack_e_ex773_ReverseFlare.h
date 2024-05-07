#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETres_e_ex773_Direction.h"
#include "ETresAttack_e_ex773_ReverseFlareMoveAxisType.h"
#include "TresAttack_e_ex773_ReverseFlare.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex773_ReverseFlare : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_FlareEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    ETres_e_ex773_Direction Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZDirHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareSpawnPosRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallHitHoseiRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresAttack_e_ex773_ReverseFlareMoveAxisType MoveAxisType;
    
public:
    UTresAttack_e_ex773_ReverseFlare();
};

