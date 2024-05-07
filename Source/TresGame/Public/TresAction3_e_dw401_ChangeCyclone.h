#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_dw401_ChangeCyclone.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresAction3_e_dw401_ChangeCyclone : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_FallGroundEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_FallGroundBlurEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_AppearGroundEffData;
    
public:
    UTresAction3_e_dw401_ChangeCyclone();
};

