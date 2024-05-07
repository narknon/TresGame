#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex361_DarkHand_ShockWaveAtkCol.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex361_DarkHand_ShockWaveAtkCol : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FallDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FallDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FallDownDist;
    
    ATresProjectile_e_ex361_DarkHand_ShockWaveAtkCol(const FObjectInitializer& ObjectInitializer);
};

