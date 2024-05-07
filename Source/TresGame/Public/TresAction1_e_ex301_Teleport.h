#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TeleportTypes_e_ex301.h"
#include "TresAction1_e_ex301_Teleport.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex301_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<TeleportTypes_e_ex301> m_PramTeleportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpTime;
    
public:
    UTresAction1_e_ex301_Teleport();
};

