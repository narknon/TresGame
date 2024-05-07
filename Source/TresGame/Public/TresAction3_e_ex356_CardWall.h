#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "TresEnemyCardWallParam_e_ex356.h"
#include "TresAction3_e_ex356_CardWall.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction3_e_ex356_CardWall : public UTresAction_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FailedTimeGameDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyCardWallParam_e_ex356 m_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActionEndDelayTime;
    
public:
    UTresAction3_e_ex356_CardWall();
};

