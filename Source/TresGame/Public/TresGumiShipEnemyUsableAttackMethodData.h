#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyStateID.h"
#include "TresGumiShipEnemyUsableAttackMethodData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyUsableAttackMethodData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemyStateID m_eAttackStateID;
    
    TRESGAME_API FTresGumiShipEnemyUsableAttackMethodData();
};

