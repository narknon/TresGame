#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresAnims_e_ex113_Move2_UpDown.h"
#include "TresMove2_e_ex113_UpDown.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove2_e_ex113_UpDown : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAnims_e_ex113_Move2_UpDown m_UpAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAnims_e_ex113_Move2_UpDown m_DownAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotSpeed;
    
public:
    UTresMove2_e_ex113_UpDown();
};

