#pragma once
#include "CoreMinimal.h"
#include "TresNpcAILeadEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresNpcAILeadEnd, FName, LeadID);

