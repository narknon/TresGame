#pragma once
#include "CoreMinimal.h"
#include "ETresMBCurveInterp.h"
#include "TresMBCurveKeyElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBCurveKeyElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresMBCurveInterp> m_Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Right;
    
    TRESGAME_API FTresMBCurveKeyElement();
};

