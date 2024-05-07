#pragma once
#include "CoreMinimal.h"
#include "TresTheaterMapInfo.generated.h"

class UTresTexturePump;

USTRUCT(BlueprintType)
struct FTresTheaterMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresTexturePump> TexturePump;
    
    TRESGAME_API FTresTheaterMapInfo();
};

