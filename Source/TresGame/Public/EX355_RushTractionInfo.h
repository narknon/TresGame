#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX355_RushTractionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_RushTractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector vTractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fMaxTractionDistance;
    
    TRESGAME_API FEX355_RushTractionInfo();
};

