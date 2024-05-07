#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction1_e_ex113_Warp.generated.h"

class UAnimSequenceBase;
class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex113_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_WarpStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_WarpEndAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_RevengeEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction1_e_ex113_Warp();
};

