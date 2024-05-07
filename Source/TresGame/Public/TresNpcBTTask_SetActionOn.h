#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresNpcActionOnType.h"
#include "TresNpcBTTask_SetActionOn.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_SetActionOn : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresNpcActionOnType> m_ActionOnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActionTime;
    
    UTresNpcBTTask_SetActionOn();
};

