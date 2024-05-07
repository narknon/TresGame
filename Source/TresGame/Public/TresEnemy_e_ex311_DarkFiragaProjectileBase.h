#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex311_DarkFiragaProjectileBase.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex311_DarkFiragaProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Hight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Wide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Count;
    
    ATresEnemy_e_ex311_DarkFiragaProjectileBase(const FObjectInitializer& ObjectInitializer);
};

