#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectileGenerator_e_ex054_FireBless.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex054_FireBless : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_FireBlessArray;
    
    ATresProjectileGenerator_e_ex054_FireBless(const FObjectInitializer& ObjectInitializer);
};

