#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTimelinePlayer.generated.h"

class UTresTimelineData;
class UTresTimelineDataSection;

UCLASS(Blueprintable, Transient)
class UTresTimelinePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresTimelineData* m_Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresTimelineDataSection*> m_ActiveSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_GCGuard;
    
    UTresTimelinePlayer();
};

