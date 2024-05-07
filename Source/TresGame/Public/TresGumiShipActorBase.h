#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGumiShipNotifyInterface.h"
#include "TresGumiShipActorBase.generated.h"

class UTresGumiShipSoundSetComponent;
class UTresRootComponent;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipActorBase : public AActor, public ITresGumiShipNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* m_pRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipSoundSetComponent* m_pSoundSet;
    
public:
    ATresGumiShipActorBase(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

