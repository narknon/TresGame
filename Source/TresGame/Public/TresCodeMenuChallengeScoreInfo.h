#pragma once
#include "CoreMinimal.h"
#include "ETresDlcChallengeScoreID.h"
#include "TresCodeMenuChallengeScoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeScoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDlcChallengeScoreID m_Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_NameIds;
    
    TRESGAME_API FTresCodeMenuChallengeScoreInfo();
};

