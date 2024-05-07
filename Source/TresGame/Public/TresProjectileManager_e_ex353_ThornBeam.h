#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TresProjectileManager_e_ex353_ThornBeam.generated.h"

class ATresProjectile_e_ex353_ThornBeamSpace;
class UTresEnemy_e_ex353_ThornBeamParam;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresProjectileManager_e_ex353_ThornBeam : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex353_ThornBeamSpace> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresEnemy_e_ex353_ThornBeamParam> m_ThornBeamParam;
    
    UTresProjectileManager_e_ex353_ThornBeam();
};

