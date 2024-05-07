#pragma once
#include "CoreMinimal.h"
#include "MognetMedalPrizeWork.h"
#include "GameFramework/Actor.h"
#include "TresItemMognetMedal.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class ATresCharPawnBase;

UCLASS(Abstract, Blueprintable, HideDropdown, NotPlaceable)
class ATresItemMognetMedal : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMognetMedalPrizeWork> m_Drops;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pAttachPawn;
    
public:
    ATresItemMognetMedal(const FObjectInitializer& ObjectInitializer);
};

