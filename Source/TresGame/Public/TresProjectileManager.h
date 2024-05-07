#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectileManager.generated.h"

class ATresProjectileBase;
class ATresRailSlideActor;

UCLASS(Blueprintable, NotPlaceable)
class ATresProjectileManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectileBase*> m_ProjectileList;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectileBase*> m_ResidueProjList;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresRailSlideActor*> m_ResidueRailList;
    
public:
    ATresProjectileManager(const FObjectInitializer& ObjectInitializer);
};

