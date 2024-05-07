#pragma once
#include "CoreMinimal.h"
#include "SlideShowIconData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSlideShowIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Code;
    
    TRESGAME_API FSlideShowIconData();
};

