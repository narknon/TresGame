#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "TresEnemyBigDealParamEx_e_ex356.h"
#include "TresEnemyBigDealCardSpawnParam_e_ex356.h"
#include "TresAction4_e_ex356_BigDeal.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction4_e_ex356_BigDeal : public UTresAction_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StunEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyBigDealCardSpawnParam_e_ex356 m_BigDealCardSpawnParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyBigDealParamEx_e_ex356 m_BigDealParamEx;
    
public:
    UTresAction4_e_ex356_BigDeal();
};

