#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex356_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex356_Base : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimeGageDamageValue;
    
public:
    ATresProjectile_e_ex356_Base(const FObjectInitializer& ObjectInitializer);
};

