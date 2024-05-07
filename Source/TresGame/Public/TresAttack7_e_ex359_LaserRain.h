#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_LaserOnTimeInfoSet.h"
#include "EX359_LaserRainShotEffectTimeSet.h"
#include "TresAttack7_e_ex359_LaserRain.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack7_e_ex359_LaserRain : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_LaserOnTimeInfoSet m_LaserOnTimeInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_LaserRainShotEffectTimeSet> m_fShotEffectTimeSetArray;
    
    UTresAttack7_e_ex359_LaserRain();
};

