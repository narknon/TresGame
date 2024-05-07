#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex313_DarkBiteShadow.h"
#include "TresNotifyInterface.h"
#include "TresProjectile_e_ex352_DarkBiteShadow.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex352_DarkBiteShadow : public ATresProjectile_e_ex313_DarkBiteShadow, public ITresNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ShadowEffDataForAppearDarkMatter;
    
public:
    ATresProjectile_e_ex352_DarkBiteShadow(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

