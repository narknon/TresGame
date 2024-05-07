#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AI/Navigation/NavigationTypes.h"
#include "TresAutoNavLinkExclusiveVolumeInfo.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FTresAutoNavLinkExclusiveVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentSelector SupportedAgents;
    
    TRESGAME_API FTresAutoNavLinkExclusiveVolumeInfo();
};

