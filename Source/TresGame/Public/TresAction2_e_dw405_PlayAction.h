#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAction_e_dw405_Base.h"
#include "TresE_dw405ActionParam.h"
#include "TresAction2_e_dw405_PlayAction.generated.h"

class UTresStateBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_dw405_PlayAction : public UTresAction_e_dw405_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_dw405ActionParam> m_ActionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableAvaatarLockonCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_ActionDefClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RespawnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShootLockIncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugEnableAppear: 1;
    
public:
    UTresAction2_e_dw405_PlayAction();
};

