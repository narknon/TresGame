#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresMagnaStormTractionInfo_e_ex355.generated.h"

USTRUCT(BlueprintType)
struct FTresMagnaStormTractionInfo_e_ex355 {
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
    
    TRESGAME_API FTresMagnaStormTractionInfo_e_ex355();
};

