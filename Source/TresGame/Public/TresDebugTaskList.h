#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresDebugTaskList.generated.h"

class UTresDebugDisplayTask;
class UTresTaskBase;

UCLASS(Blueprintable)
class UTresDebugTaskList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresDebugDisplayTask>> DebugDisplayClassArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresTaskBase>> DebugTaskList;
    
    UTresDebugTaskList();
};

