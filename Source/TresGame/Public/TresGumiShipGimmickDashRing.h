#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickDashRing.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipGimmickDashRing : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickDashRing(const FObjectInitializer& ObjectInitializer);
};

