#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "COMMON_SHADOWMOVE_MODE_Enum.h"
#include "TresBTTask_ShadowMoveSeq.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS(Blueprintable)
class UTresBTTask_ShadowMoveSeq : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    COMMON_SHADOWMOVE_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonMoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonMoveRandomRadius;
    
    UTresBTTask_ShadowMoveSeq();
};

