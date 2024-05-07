#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresChrUniqueID.h"
#include "TresFriendIdDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresFriendIdDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID m_UniqueID;
    
    TRESGAME_API FTresFriendIdDataTable();
};

