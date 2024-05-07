#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_Mercuna_MoveTo.generated.h"

UCLASS()
class MERCUNA_API UBTTask_Mercuna_MoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float EndDistance;
    
    UPROPERTY()
    uint32 bObserveBlackboardValue: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 bAllowPartialPath: 1;
    
    UBTTask_Mercuna_MoveTo();
};

