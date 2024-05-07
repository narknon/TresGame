#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresNpcActionDefinitionPlayCameraAnim.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresNpcActionDefinitionPlayCameraAnim : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDispWeaponCheck: 1;
    
public:
    UTresNpcActionDefinitionPlayCameraAnim();
};

