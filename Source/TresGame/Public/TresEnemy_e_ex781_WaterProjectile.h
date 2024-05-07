#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex781_WaterProjectile.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresEnemy_e_ex781_WaterProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LookAheadTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_MyTarget;
    
public:
    ATresEnemy_e_ex781_WaterProjectile(const FObjectInitializer& ObjectInitializer);
};

