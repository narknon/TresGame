#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemy_e_ex367_KBChildLaserProjectileBase.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex367_KBChildLaserProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_HitBulletData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HitBulletTime;
    
    ATresEnemy_e_ex367_KBChildLaserProjectileBase(const FObjectInitializer& ObjectInitializer);
};

