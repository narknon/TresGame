#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresChrSEDataTable.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresChrSEDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_Asset;
    
    TRESGAME_API FTresChrSEDataTable();
};

