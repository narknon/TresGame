#pragma once
#include "CoreMinimal.h"
#include "ETresDebugMenuMotionObjectPropertyType.h"
#include "TresDebugMenuMotionObjectKeyFrame.h"
#include "TresDebugMenuMotionObjectProperty.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObjectProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDebugMenuMotionObjectPropertyType> m_PropertyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuMotionObjectKeyFrame> m_KeyFrames;
    
    TRESGAME_API FTresDebugMenuMotionObjectProperty();
};

