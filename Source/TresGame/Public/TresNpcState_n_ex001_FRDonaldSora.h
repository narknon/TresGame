#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresNpcState_n_ex001_FRDonaldSora.generated.h"

class UTresLockonTargetComponent;

UCLASS(Blueprintable)
class UTresNpcState_n_ex001_FRDonaldSora : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_LockonTarget;
    
    UTresNpcState_n_ex001_FRDonaldSora();
};

