#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresE_dw405AttackParam.generated.h"

class UTresAttack_e_dw405_Base;

USTRUCT(BlueprintType)
struct FTresE_dw405AttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAttack_e_dw405_Base> AttackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableOverrideAppearOffsetAngle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearOffsetAngle;
    
    TRESGAME_API FTresE_dw405AttackParam();
};

