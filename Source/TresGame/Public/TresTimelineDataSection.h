#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTimelineDataSection.generated.h"

UCLASS(Abstract, Blueprintable)
class TRESGAME_API UTresTimelineDataSection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Duration;
    
    UTresTimelineDataSection();
};

