#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex354_NoAppearOnRevengeWarp.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex354_NoAppearOnRevengeWarp : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOutDisable;
    
    UTresBTDecorator_e_ex354_NoAppearOnRevengeWarp();
};

