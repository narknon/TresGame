#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex773_ReverseFlarePillar.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_ReverseFlarePillar : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ChangeColorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ChangeColorCompTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_ChangeColor;
    
    ATresProjectile_e_ex773_ReverseFlarePillar(const FObjectInitializer& ObjectInitializer);
};

