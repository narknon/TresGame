#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw407_DarkHoming.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_dw407_DarkHoming : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FadeoutTime;
    
public:
    ATresProjectile_e_dw407_DarkHoming(const FObjectInitializer& ObjectInitializer);
};

