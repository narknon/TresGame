#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ETresRandomDistributionType.h"
#include "ETresControlledRandomPeriod.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTComposite_BlackboardRandom.generated.h"

UCLASS(Blueprintable)
class UTresBTComposite_BlackboardRandom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailOnAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresRandomDistributionType::Type> Distribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresControlledRandomPeriod::Type> Randomness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackboardKeySelector> Weights;
    
    UTresBTComposite_BlackboardRandom();
};

