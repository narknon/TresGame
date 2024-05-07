#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "WildDanceIdleActionParam_e_ex358.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWildDanceIdleActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopTime;
    
    UWildDanceIdleActionParam_e_ex358();
};

