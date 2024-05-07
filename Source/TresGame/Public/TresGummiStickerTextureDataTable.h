#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiStickerTextureDataTable.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresGummiStickerTextureDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_nTexture;
    
    TRESGAME_API FTresGummiStickerTextureDataTable();
};

