#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresProjectileManager_e_ex358_Naruikazuchi.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresProjectileManager_e_ex358_Naruikazuchi : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
public:
    ATresProjectileManager_e_ex358_Naruikazuchi(const FObjectInitializer& ObjectInitializer);
};

