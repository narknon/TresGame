#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex082_ModeChange.generated.h"

class UAnimSequenceBase;
class ATresCharPawnBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex082_ModeChange : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableMission: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MissionAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MissionOvertakeDistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCharPawnBase> m_ModeChangePawnClass;
    
public:
    UTresAction1_e_ex082_ModeChange();
};

