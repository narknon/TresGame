#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TeleportTypes_e_ex367.h"
#include "TresAction1_e_ex367_Teleport.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class UTresAction1_e_ex367_Teleport : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<TeleportTypes_e_ex367> m_PramTeleportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_PlayerHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_LockOnContinue;
    
public:
    UTresAction1_e_ex367_Teleport();
};

