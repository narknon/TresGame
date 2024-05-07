#pragma once
#include "CoreMinimal.h"
#include "TresCardActionParam_e_ex307.h"
#include "TresCardAction_e_ex307.generated.h"

USTRUCT(BlueprintType)
struct FTresCardAction_e_ex307 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 ActionType;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresCardActionParam_e_ex307 ActionParam[4];
    
    TRESGAME_API FTresCardAction_e_ex307();
};

