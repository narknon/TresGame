#pragma once
#include "CoreMinimal.h"
#include "ETres_e_ex352_DarkMineKind.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_DarkMine.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex352_DarkMine : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETres_e_ex352_DarkMineKind m_DMKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DMExplosionProjectileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DotAngle;
    
public:
    ATresProjectile_e_ex352_DarkMine(const FObjectInitializer& ObjectInitializer);
};

