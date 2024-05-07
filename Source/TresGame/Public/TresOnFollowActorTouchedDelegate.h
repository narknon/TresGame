#pragma once
#include "CoreMinimal.h"
#include "TresOnFollowActorTouchedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresOnFollowActorTouched, int32, groupNumber);

