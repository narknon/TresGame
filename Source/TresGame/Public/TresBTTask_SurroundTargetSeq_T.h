#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "COMMON_SURROUNDTARGET_MODE_Enum.h"
#include "TresBTTask_SurroundTargetSeq_T.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS(Blueprintable)
class UTresBTTask_SurroundTargetSeq_T : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    COMMON_SURROUNDTARGET_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonMoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonMoveRadiusWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonMoveWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonTurnRadio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonUpdateTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ItemSpace;
    
    UTresBTTask_SurroundTargetSeq_T();
};

