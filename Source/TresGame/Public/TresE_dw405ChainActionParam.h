#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresE_dw405ChainActionParam.generated.h"

class UTresAction_e_dw405_Base;

USTRUCT(BlueprintType)
struct FTresE_dw405ChainActionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAction_e_dw405_Base> ActionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAngle;
    
    TRESGAME_API FTresE_dw405ChainActionParam();
};

