#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "ETresEffectCustomAreaCode.h"
#include "TresEffectCustomAreaTriggerBox.generated.h"

UCLASS(Blueprintable)
class ATresEffectCustomAreaTriggerBox : public ATresTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEffectCustomAreaCode> m_CostomEffectAreaCode;
    
    ATresEffectCustomAreaTriggerBox(const FObjectInitializer& ObjectInitializer);
};

