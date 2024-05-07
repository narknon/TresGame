#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Damage.h"
#include "TresAICharState_Damage.generated.h"

class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UTresAICharState_Damage : public UTresCharState_Damage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_MerryGoroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pPoleComponent;
    
public:
    UTresAICharState_Damage();
};

