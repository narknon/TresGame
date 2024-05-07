#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiStickerDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiStickerDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_nTextureName;
    
    TRESGAME_API FTresGummiStickerDataTable();
};

