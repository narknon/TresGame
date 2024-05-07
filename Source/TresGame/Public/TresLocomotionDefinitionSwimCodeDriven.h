#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionSwim.h"
#include "TresLocomotionDefinitionSwimCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionSwimCodeDriven : public UTresLocomotionDefinitionSwim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SwimmingStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SwimmingLoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SwimmingEndAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SharpTurnLAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SharpTurnRAnimData;
    
public:
    UTresLocomotionDefinitionSwimCodeDriven();
};

