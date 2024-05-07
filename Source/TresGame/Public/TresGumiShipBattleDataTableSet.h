#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipBattleDataTableSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresGumiShipBattleDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pBaseParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pAttackMethodParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pEnemyUniqueParameterDataTable;
    
public:
    UTresGumiShipBattleDataTableSet();
};

