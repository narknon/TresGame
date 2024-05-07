#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex046_ModeChange.generated.h"

class UAnimSequenceBase;
class ATresCharPawnBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex046_ModeChange : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCharPawnBase> m_ModeChangePawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FallSpeed;
    
public:
    UTresAction1_e_ex046_ModeChange();
};

