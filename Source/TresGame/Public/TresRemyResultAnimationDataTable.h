#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyCookingGameType.h"
#include "RemyResultAnimationType.h"
#include "TresRemyResultAnimationDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyResultAnimationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyCookingGameType GameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyResultAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName;
    
    TRESGAME_API FTresRemyResultAnimationDataTable();
};

