#pragma once
#include "CoreMinimal.h"
#include "EX355_RushAwayTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_RushAwayTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFinalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsePawnDir;
    
    TRESGAME_API FEX355_RushAwayTractionInfo();
};

