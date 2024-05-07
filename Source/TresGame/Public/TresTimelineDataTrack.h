#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTimelineDataTrack.generated.h"

class UTresTimelineDataSection;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API UTresTimelineDataTrack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_SubTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    TArray<UTresTimelineDataSection*> m_Sections;
    
    UTresTimelineDataTrack();
};

