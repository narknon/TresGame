#pragma once
#include "CoreMinimal.h"
#include "TresSlidePhotoWork.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresSlidePhotoWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* pTexture;
    
    TRESGAME_API FTresSlidePhotoWork();
};

