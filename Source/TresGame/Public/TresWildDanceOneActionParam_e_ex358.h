#pragma once
#include "CoreMinimal.h"
#include "TresWildDanceOneActionParam_e_ex358.generated.h"

class UWildDanceActionParamBase_e_ex358;

USTRUCT(BlueprintType)
struct FTresWildDanceOneActionParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWildDanceActionParamBase_e_ex358* ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWildDanceActionParamBase_e_ex358* AirActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirActionExecuteTargetHeight;
    
    TRESGAME_API FTresWildDanceOneActionParam_e_ex358();
};

