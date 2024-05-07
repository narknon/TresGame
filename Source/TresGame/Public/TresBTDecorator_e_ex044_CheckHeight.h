#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex044_CheckHeight.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_e_ex044_CheckHeight : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCheckHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPoleTurnRadius;
    
    UTresBTDecorator_e_ex044_CheckHeight();
};

