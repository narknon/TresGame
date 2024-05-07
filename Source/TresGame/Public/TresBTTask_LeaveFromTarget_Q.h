#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LEAVE_FROM_TARGET_MODE_Enum.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_LeaveFromTarget_Q.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS(Blueprintable)
class UTresBTTask_LeaveFromTarget_Q : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    LEAVE_FROM_TARGET_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FirstUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FirstTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonOnRingAngle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ItemSpace;
    
    UTresBTTask_LeaveFromTarget_Q();
};

