#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemy_e_ex301_TailPillarProjectileBase.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex301_TailPillarProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_InitScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScaleZMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScaleSpeedZ;
    
    ATresEnemy_e_ex301_TailPillarProjectileBase(const FObjectInitializer& ObjectInitializer);
};

