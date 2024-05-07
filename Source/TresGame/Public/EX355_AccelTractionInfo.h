#pragma once
#include "CoreMinimal.h"
#include "EX355_AccelTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_AccelTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fVerticalTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fMaxVerticalTractionDistance;
    
    TRESGAME_API FEX355_AccelTractionInfo();
};

