#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresBattleLevelFromName.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresBattleLevelFromName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleLevel;
    
    FTresBattleLevelFromName();
};

