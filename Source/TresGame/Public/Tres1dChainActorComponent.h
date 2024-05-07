#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "Tres1dChainActorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTres1dChainActorComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NextActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PrevActor;
    
public:
    UTres1dChainActorComponent();
    UFUNCTION(BlueprintCallable)
    void SetPrev(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetNext(AActor* Actor);
    
};

