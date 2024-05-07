#pragma once
#include "CoreMinimal.h"
#include "ETresWorldCode.h"
#include "TresUIWorldIconName.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresUIWorldIconName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldNameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> IconAsset;
    
    TRESGAME_API FTresUIWorldIconName();
};

