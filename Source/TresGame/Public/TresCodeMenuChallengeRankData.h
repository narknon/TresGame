#pragma once
#include "CoreMinimal.h"
#include "ETresDlcChallengeRank.h"
#include "Engine/DataTable.h"
#include "TresCodeMenuChallengeRankData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeRankData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDlcChallengeRank m_Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> m_IconAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_RankName;
    
    TRESGAME_API FTresCodeMenuChallengeRankData();
};

