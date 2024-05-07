#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresDlcChallengeCode.h"
#include "TresCodeMenuChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FTresCodeMenuChallengeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDlcChallengeCode m_Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_NameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_DetailId;
    
    TRESGAME_API FTresCodeMenuChallengeData();
};

