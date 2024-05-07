#pragma once
#include "CoreMinimal.h"
#include "ETresEnemydw407Region.h"
#include "TresEnemyDarkSidePawnBase_LockOnParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyDarkSidePawnBase_LockOnParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemydw407Region> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneOffset;
    
    TRESGAME_API FTresEnemyDarkSidePawnBase_LockOnParam();
};

