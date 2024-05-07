#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ETresCustomCompositeReturnCondition.h"
#include "TresBTComposite_Custom.generated.h"

UCLASS(Blueprintable)
class UTresBTComposite_Custom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresCustomCompositeReturnCondition::Type> ReturnCondition;
    
    UTresBTComposite_Custom();
};

