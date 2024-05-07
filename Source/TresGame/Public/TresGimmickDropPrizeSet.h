#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGimmickDropPrizeTable.h"
#include "TresGimmickDropPrizeSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresGimmickDropPrizeSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGimmickDropPrizeTable> m_PrizeDatas;
    
public:
    UTresGimmickDropPrizeSet();
};

