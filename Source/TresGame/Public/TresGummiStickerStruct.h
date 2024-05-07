#pragma once
#include "CoreMinimal.h"
#include "TresGummiStickerStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresGummiStickerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pStickerTexture;
    
    TRESGAME_API FTresGummiStickerStruct();
};

