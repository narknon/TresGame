#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "ETresForwardDirection.h"
#include "TresProj_LaserTemplate.generated.h"

UCLASS(Blueprintable)
class ATresProj_LaserTemplate : public ATresProjectileBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnShutDown);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresForwardDirection> m_eEffectForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScaleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLifeOverIfTakeDamage;
    
public:
    ATresProj_LaserTemplate(const FObjectInitializer& ObjectInitializer);
};

