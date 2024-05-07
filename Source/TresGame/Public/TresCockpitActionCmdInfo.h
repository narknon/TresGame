#pragma once
#include "CoreMinimal.h"
#include "TresCockpitActionCmdInfo.generated.h"

class UTresUICommandInfoBase;

USTRUCT(BlueprintType)
struct FTresCockpitActionCmdInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUICommandInfoBase* m_pUICommandInfo;
    
    TRESGAME_API FTresCockpitActionCmdInfo();
};

