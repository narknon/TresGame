#pragma once
#include "CoreMinimal.h"
#include "TresCharState_PlaneBoss.h"
#include "TresPlayerState_PlaneBoss.generated.h"

class ATresCameraEx021;
class ATresEnemyPawn_e_ex021;

UCLASS(Blueprintable)
class UTresPlayerState_PlaneBoss : public UTresCharState_PlaneBoss {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex021* m_pObj;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraEx021* m_Camera;
    
public:
    UTresPlayerState_PlaneBoss();
};

