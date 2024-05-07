#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyAnimationType.h"
#include "TresRemyAnimationDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyAnimationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName;
    
    TRESGAME_API FTresRemyAnimationDataTable();
};

