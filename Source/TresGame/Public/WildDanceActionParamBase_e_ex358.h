#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WildDanceActionParamBase_e_ex358.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UWildDanceActionParamBase_e_ex358 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableLockonPriorityDown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableActionAbortTiming: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionAbortTimingNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableActionAbortTimingAir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionAbortTimingNumberAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableActionAbortTimingNotAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionAbortTimingNumberNotAction;
    
    UWildDanceActionParamBase_e_ex358();
};

