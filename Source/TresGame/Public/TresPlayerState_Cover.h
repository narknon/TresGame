#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Cover.h"
#include "TresPlayerState_Cover.generated.h"

class ATresCameraNormal;
class UTresLockonTargetComponent;

UCLASS(Blueprintable)
class UTresPlayerState_Cover : public UTresCharState_Cover {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_pCamera;
    
    UTresPlayerState_Cover();
};

