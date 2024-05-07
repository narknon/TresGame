#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex367_DarkShootingProjectileBase.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex367_DarkShootingProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_DistExpList;
    
    ATresEnemy_e_ex367_DarkShootingProjectileBase(const FObjectInitializer& ObjectInitializer);
};

