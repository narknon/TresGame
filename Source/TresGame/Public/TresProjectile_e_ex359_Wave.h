#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex359_Wave.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex359_Wave : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
public:
    ATresProjectile_e_ex359_Wave(const FObjectInitializer& ObjectInitializer);
};

