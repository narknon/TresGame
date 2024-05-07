#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresDecoratorInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresBTInterface_DecoratorNativeBase.generated.h"

UCLASS(Blueprintable)
class ATresBTInterface_DecoratorNativeBase : public AActor, public ITresDecoratorInterface {
    GENERATED_BODY()
public:
    ATresBTInterface_DecoratorNativeBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDecoratorFunctionNative(AActor* SelfActor, AActor* TargetActor, FVector TargetDestination, float valueA, float valueB);
    
    
    // Fix for true pure virtual functions not being implemented
};

