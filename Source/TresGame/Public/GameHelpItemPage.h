#pragma once
#include "CoreMinimal.h"
#include "GameHelpItemPage.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FGameHelpItemPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextNamespaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> TextNamespaceKeyPlatform;
    
    TRESGAME_API FGameHelpItemPage();
};

