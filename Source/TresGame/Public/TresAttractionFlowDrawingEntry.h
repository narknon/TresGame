#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresAttractionFlowDrawingEntry.generated.h"

USTRUCT(BlueprintType)
struct FTresAttractionFlowDrawingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresCommandKind> m_Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Weight;
    
    TRESGAME_API FTresAttractionFlowDrawingEntry();
};

