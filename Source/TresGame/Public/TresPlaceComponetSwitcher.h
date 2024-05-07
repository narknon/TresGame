#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresClippingInterface.h"
#include "TresPlaceComponetSwitcher.generated.h"

class UObject;
class UActorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ATresPlaceComponetSwitcher : public AActor, public ITresClippingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterSelf_;
    
public:
    ATresPlaceComponetSwitcher(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void AddManageComponent(UActorComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    void AddManageActorClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void AddManageActor(AActor* pActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

