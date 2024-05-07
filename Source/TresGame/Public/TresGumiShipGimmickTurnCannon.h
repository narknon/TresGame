#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickTurnCannon.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipGimmickTurnCannon : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PrizeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickTurnCannon(const FObjectInitializer& ObjectInitializer);
};

