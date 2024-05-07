#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSoKcKeyHoleGenerator.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresSoKcKeyHoleGenerator : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GeneratorRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_pSourceHoudiniActor;
    
public:
    ATresSoKcKeyHoleGenerator(const FObjectInitializer& ObjectInitializer);
};

