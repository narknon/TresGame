#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex357_Base.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction1_e_ex357_Warp.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex357_Warp : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableActionAbortWait: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsWarpInActionEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableWarpOutActionAbort: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_RevengeEnvQueryMaxRadiusList;
    
public:
    UTresAction1_e_ex357_Warp();
};

