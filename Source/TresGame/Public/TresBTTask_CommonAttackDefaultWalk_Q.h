#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialAttackProcess.h"
#include "TresBTTask_CommonAttackDefaultWalk_Q.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS(Blueprintable)
class UTresBTTask_CommonAttackDefaultWalk_Q : public UTresBTTask_SequentialAttackProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CommonUpdateTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ItemSpace;
    
    UTresBTTask_CommonAttackDefaultWalk_Q();
};

