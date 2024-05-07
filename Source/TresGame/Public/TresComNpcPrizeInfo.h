#pragma once
#include "CoreMinimal.h"
#include "TresComNpcPrizeInfo.generated.h"

class UTresGimmickDropPrizeSet;

USTRUCT(BlueprintType)
struct FTresComNpcPrizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGimmickDropPrizeSet* m_pPrizeDataAsset;
    
    TRESGAME_API FTresComNpcPrizeInfo();
};

