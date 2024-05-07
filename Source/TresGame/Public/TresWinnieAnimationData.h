#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresWinnieAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FTresWinnieAnimationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoop;
    
    TRESGAME_API FTresWinnieAnimationData();
};

