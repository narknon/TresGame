#pragma once
#include "CoreMinimal.h"
#include "EX354_UpShotInfo.h"
#include "TresProjectile_e_ex354_NormalShot.h"
#include "TresProjectile_e_ex354_UpShot.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_UpShot : public ATresProjectile_e_ex354_NormalShot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX354_UpShotInfo m_UpShotInfo;
    
    ATresProjectile_e_ex354_UpShot(const FObjectInitializer& ObjectInitializer);
};

