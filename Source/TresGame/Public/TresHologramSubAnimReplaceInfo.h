#pragma once
#include "CoreMinimal.h"
#include "TresHologramSubAnimReplaceDef.h"
#include "TresHologramSubAnimReplaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresHologramSubAnimReplaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ValidSlotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresHologramSubAnimReplaceDef> m_ReplaceDefList;
    
    TRESGAME_API FTresHologramSubAnimReplaceInfo();
};

