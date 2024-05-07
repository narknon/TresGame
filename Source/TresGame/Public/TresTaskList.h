#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresTaskList.generated.h"

class UTresTaskBase;

UCLASS(Blueprintable)
class UTresTaskList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresTaskBase>> GameTaskList;
    
    UTresTaskList();
};

