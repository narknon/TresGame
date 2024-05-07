#pragma once
#include "CoreMinimal.h"
#include "TresMapSetData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresMapSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Load;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ignore;
    
    FTresMapSetData();
};

