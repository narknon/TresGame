#pragma once
#include "CoreMinimal.h"
#include "ETresHologramSubAnimReplaceType.h"
#include "TresHologramSubAnimReplaceDef.generated.h"

USTRUCT(BlueprintType)
struct FTresHologramSubAnimReplaceDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresHologramSubAnimReplaceType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    TRESGAME_API FTresHologramSubAnimReplaceDef();
};

