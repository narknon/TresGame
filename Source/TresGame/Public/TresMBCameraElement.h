#pragma once
#include "CoreMinimal.h"
#include "TresMBCameraElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBCameraElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InterestIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FOV;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 m_CurveIndex[2];
    
    TRESGAME_API FTresMBCameraElement();
};

