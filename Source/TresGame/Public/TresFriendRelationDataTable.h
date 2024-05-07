#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresChrUniqueID.h"
#include "TresFriendRelationDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresFriendRelationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID m_UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_BodySize;
    
    TRESGAME_API FTresFriendRelationDataTable();
};

