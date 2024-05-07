#pragma once
#include "CoreMinimal.h"
#include "TresGimmickDropPrizeDataUnit.h"
#include "TresGimmickDropPrizeTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickDropPrizeTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGimmickDropPrizeDataUnit> m_Prizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnRate;
    
    TRESGAME_API FTresGimmickDropPrizeTable();
};

