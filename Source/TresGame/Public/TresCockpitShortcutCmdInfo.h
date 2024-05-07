#pragma once
#include "CoreMinimal.h"
#include "TresCockpitCmd.h"
#include "TresCockpitShortcutCmdInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresCockpitShortcutCmdInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresCockpitCmd m_cockpitCmdList[4];
    
    TRESGAME_API FTresCockpitShortcutCmdInfo();
};

