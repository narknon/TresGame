#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresMove1_e_ex113_Warp.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, HideDropdown)
class UTresMove1_e_ex113_Warp : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_WarpStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_WarpEndAnimData;
    
public:
    UTresMove1_e_ex113_Warp();
};

