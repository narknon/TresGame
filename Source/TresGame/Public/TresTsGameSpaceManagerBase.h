#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresTsGameSpaceManagerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresTsGameSpaceManagerBase : public AActor {
    GENERATED_BODY()
public:
    ATresTsGameSpaceManagerBase(const FObjectInitializer& ObjectInitializer);
};

