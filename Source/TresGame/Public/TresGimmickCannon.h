#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickCannon.generated.h"

class UTresBodyCollPrimitive;
class UTresLockonTargetComponent;
class UArrowComponent;
class ATresProjectileBase;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickCannon : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* m_pBodyCollPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* m_pArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pLockonTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bBellShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_PreAnimationName;
    
public:
    ATresGimmickCannon(const FObjectInitializer& ObjectInitializer);
};

