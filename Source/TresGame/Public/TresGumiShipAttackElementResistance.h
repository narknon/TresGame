#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAttackElementResistance.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipAttackElementResistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpecial;
    
    TRESGAME_API FTresGumiShipAttackElementResistance();
};

