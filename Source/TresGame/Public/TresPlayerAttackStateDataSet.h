#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPlayerAttackStateDataSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresPlayerAttackStateDataSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pAttackStateParameter;
    
public:
    UTresPlayerAttackStateDataSet();
};

