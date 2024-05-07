#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAttackElementResistance.h"
#include "TresGumiShipHitEffectInfo.h"
#include "TresGumiShipBodyCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBodyCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipAttackElementResistance m_ElementResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHitEffectInfo m_EffectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDontUseGrazeCollision;
    
    TRESGAME_API FTresGumiShipBodyCollisionParam();
};

