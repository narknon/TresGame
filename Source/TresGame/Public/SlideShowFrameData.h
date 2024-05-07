#pragma once
#include "CoreMinimal.h"
#include "SlideShowFrameData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSlideShowFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    TRESGAME_API FSlideShowFrameData();
};

