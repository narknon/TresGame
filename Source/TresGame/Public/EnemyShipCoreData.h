#pragma once
#include "CoreMinimal.h"
#include "EnemyShipCoreData.generated.h"

class UParticleSystemComponent;
class UTresLockonTargetComponent;
class UTresBodyCollPrimitive;

USTRUCT(BlueprintType)
struct FEnemyShipCoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_CoreParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_CoreThonParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_CoreLockOnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* m_CoreBodyCollPrim;
    
    TRESGAME_API FEnemyShipCoreData();
};

