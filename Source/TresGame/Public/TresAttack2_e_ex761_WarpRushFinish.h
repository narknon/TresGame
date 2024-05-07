#pragma once
#include "CoreMinimal.h"
#include "TresAttack2_e_ex761_WarpRushBase.h"
#include "TresAttack2_e_ex761_WarpRushFinish.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex761_WarpRushFinish : public UTresAttack2_e_ex761_WarpRushBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RushTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FinishStartDistance;
    
public:
    UTresAttack2_e_ex761_WarpRushFinish();
};

