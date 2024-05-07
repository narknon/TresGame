#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCommandData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresCommandData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_CommandKindData;
    
    UTresCommandData();
};

