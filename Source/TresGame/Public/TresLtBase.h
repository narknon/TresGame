#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLtBase.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresLtBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    ATresLtBase(const FObjectInitializer& ObjectInitializer);
};

