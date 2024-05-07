#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex311_BlizzardProjectileBase.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex311_BlizzardProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ReflectedBulletSpeed;
    
public:
    ATresEnemy_e_ex311_BlizzardProjectileBase(const FObjectInitializer& ObjectInitializer);
};

