#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresComNpcActionActor.generated.h"

class UTresComNpcActionComponent;

UCLASS(Blueprintable)
class TRESGAME_API ATresComNpcActionActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresComNpcActionComponent* MyComNpcAction;
    
public:
    ATresComNpcActionActor(const FObjectInitializer& ObjectInitializer);
};

