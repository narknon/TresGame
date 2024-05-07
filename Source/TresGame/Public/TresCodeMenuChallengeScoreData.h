#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresCodeMenuChallengeScoreInfo.h"
#include "TresUIGameFlagData.h"
#include "TresCodeMenuChallengeScoreData.generated.h"

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeScoreData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_NameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCodeMenuChallengeScoreInfo> m_Scores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_SecretOpenEnable;
    
    TRESGAME_API FTresCodeMenuChallengeScoreData();
};

