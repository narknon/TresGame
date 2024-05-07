#pragma once
#include "CoreMinimal.h"
#include "WildDanceActionParamBase_e_ex358.h"
#include "WildDanceRushActionParam_e_ex358.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWildDanceRushActionParam_e_ex358 : public UWildDanceActionParamBase_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableHoming: 1;
    
    UWildDanceRushActionParam_e_ex358();
};

