#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionFlowAssetInfo.generated.h"

class ATresAccompanyPawnBase;

USTRUCT(BlueprintType)
struct FTresAttractionFlowAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetSubclassOf<ATresAccompanyPawnBase> m_AssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_pAsset;
    
    TRESGAME_API FTresAttractionFlowAssetInfo();
};

