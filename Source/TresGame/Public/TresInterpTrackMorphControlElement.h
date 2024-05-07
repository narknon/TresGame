#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "TresInterpTrackMorphControlElement.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackMorphControlElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend m_AlphaBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndValue;
    
    TRESGAME_API FTresInterpTrackMorphControlElement();
};

