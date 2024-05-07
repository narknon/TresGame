#pragma once
#include "CoreMinimal.h"
#include "TresPhantomBlitzQuickTurnaroundExecuteParam.generated.h"

USTRUCT(BlueprintType)
struct FTresPhantomBlitzQuickTurnaroundExecuteParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> QuickTurnaroundExecuteNumList;
    
    TRESGAME_API FTresPhantomBlitzQuickTurnaroundExecuteParam();
};

