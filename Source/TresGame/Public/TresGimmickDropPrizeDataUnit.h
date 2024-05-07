#pragma once
#include "CoreMinimal.h"
#include "ETresDropItemID.h"
#include "TresGimmickDropPrizeDataUnit.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickDropPrizeDataUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDropItemID m_Prize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnPlusNum;
    
    TRESGAME_API FTresGimmickDropPrizeDataUnit();
};

