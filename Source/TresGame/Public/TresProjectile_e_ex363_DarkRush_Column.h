#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex363_DarkRush_Column.generated.h"

UCLASS(Blueprintable)
class ATresProjectile_e_ex363_DarkRush_Column : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AtkUpdateInterval;
    
    ATresProjectile_e_ex363_DarkRush_Column(const FObjectInitializer& ObjectInitializer);
};

