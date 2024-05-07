#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresAIWeaponComponent.generated.h"

class UTresAttackDefinitionWeaponBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresAIWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresAttackDefinitionWeaponBase* m_CurrentAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAttackDefinitionWeaponBase*> m_CacheAttacks;
    
public:
    UTresAIWeaponComponent();
};

