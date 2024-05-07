#pragma once
#include "CoreMinimal.h"
#include "TresCockpitCmd.h"
#include "TresCockpitCmdInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCockpitCmdInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCockpitCmd> m_cockpitCmdAry;
    
    TRESGAME_API FTresCockpitCmdInfo();
};

