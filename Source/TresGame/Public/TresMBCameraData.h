#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMBModelElement.h"
#include "TresMBCameraElement.h"
#include "TresMBCurveElement.h"
#include "TresMBClipElement.h"
#include "TresMBCameraData.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresMBCameraData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMBModelElement> m_Models;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMBCameraElement> m_Cameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMBCurveElement> m_Curves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMBClipElement> m_Clips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Stop;
    
    UTresMBCameraData();
};

