#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRMikeBowling.h"
#include "TresNpcState_n_mi202_FRMikeBowling.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresNpcState_n_mi202_FRMikeBowling : public UTresCharState_FRMikeBowling {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pOldTargetPawn;
    
public:
    UTresNpcState_n_mi202_FRMikeBowling();
};

